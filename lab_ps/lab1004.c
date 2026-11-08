#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
// DataNode structure using typedef
typedef struct DataNode {
  char* data;
  struct DataNode* next;
} DataNode;
  
// SinglyLinkedList structure using typedef
typedef struct SinglyLinkedList {
  unsigned int count;
  DataNode* head;
} SinglyLinkedList; 
  
// Function prototypes
DataNode *createDataNode(char *data);
SinglyLinkedList *createSinglyLinkedList();
void traverse(SinglyLinkedList *list);
void insert_last(SinglyLinkedList *list, char *data);
void insert_front(SinglyLinkedList* list, char* data);
void delete(SinglyLinkedList* list, char* data); 
  
int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[100]; 
     
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        // แก้ไขให้รองรับการรับข้อความที่มีเว้นวรรค (เช่น ชื่อ นามสกุล) 
        // โดยใช้ %[^\n] ซึ่งจะอ่านทุกอย่างจนกว่าจะเจอการขึ้นบรรทัดใหม่
        scanf(" %c: %[^\n]", &condition, data); 
         
        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            delete(mylist, data);
        } else {
            printf("Invalid Condition!\n");
        }
    }
 
    traverse(mylist);
     
    // Remember to free allocated memory for each node's data    
    DataNode* current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
     
    return 0;
}
  
// Create a new DataNode
DataNode* createDataNode(char* data) {
  unsigned int length = strlen(data);
  char* text_new = (char*) malloc(sizeof(char)* length+1);
  strcpy(text_new, data);
  
  DataNode *pNew= (DataNode*) malloc(sizeof(DataNode));
  pNew->data = text_new;
  pNew->next = NULL;
  
  return pNew;
}
  
// Create a new SinglyLinkedList
SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList *list = (SinglyLinkedList*) malloc(sizeof(SinglyLinkedList));
    list->count = 0;
    list->head = NULL;
    return list;
}
  
// Traverse the list and print data
void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    struct DataNode* pointer = list->head;
    while (pointer->next != NULL) {
        printf("%s -> ", pointer->data); 
        pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}
  
// Insert a new node at the end of the list
void insert_last(SinglyLinkedList* list, char* data) {
    struct DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode *p = list->head;
        while (p->next != NULL){
            p = p->next;
        }
        p->next = pNew;
    }
    list->count++;
}
  
// Insert a new node at the front of the list
void insert_front(SinglyLinkedList* list, char* data) {
    DataNode *pNew = createDataNode(data);
    pNew->next = list->head;
    list->head = pNew;
    list->count++;
}
 
// Delete function
void delete(SinglyLinkedList* list, char* data) {
    struct DataNode* current = list->head;
    struct DataNode* previous = NULL;
 
    while (current != NULL && strcmp(current->data, data) != 0) {
        previous = current;
        current = current->next;
    }
 
    if (current == NULL) {
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }
 
    if (previous == NULL) {
        list->head = current->next; 
    } 
    else {
        previous->next = current->next; 
    }
 
    free(current->data);
    free(current);
    list->count--;
}
