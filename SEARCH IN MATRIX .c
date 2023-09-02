#include <stdio.h>
int main() {
   int a[3][3] = {{1, 2, 3}, {2, 4, 7}, {2, 8, 6}};
   int search = 6, flag = 0, i, j;
   
   printf("THE MATRIX IS\n");
   for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] == search) {
                flag = 1;
                break; 
            }
        }
        if (flag == 1) {
            break;  
        }
    }
    
    if (flag == 1) {
        printf("\nELEMENT FOUND AT POSITION %d %d", i, j);
    } else {
        printf("\nELEMENT NOT FOUND");
    }
    
    return 0;
}
