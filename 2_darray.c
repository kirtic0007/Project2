#include <stdio.h>
#include <stdlib.h> 

int main() {
    int **a; 
    int rows = 2, cols = 2;
    int i, j;

  
    a = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        a[i] = (int *)malloc(cols * sizeof(int));
    }

  
    printf("Enter %dx%d matrix elements:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    printf("Entered matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

   
    for (i = 0; i < rows; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
