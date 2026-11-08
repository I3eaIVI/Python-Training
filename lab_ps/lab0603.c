#include <stdio.h>

int main() {
    float m[3][3];
    int isScalar = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &m[i][j]);
        }
    }
    float n = m[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                if (m[i][j] != n) {
                    isScalar = 0;
                }
            } else if (m[i][j] != 0.0) {
                    isScalar = 0;
        	}
    	}
    }

    if (isScalar) {
        printf("This is a scalar matrix");
    } else {
        printf("This is not a scalar matrix");
    }

    return 0;
}