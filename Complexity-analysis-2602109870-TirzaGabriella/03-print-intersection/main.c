// write a C code to print all values that are contained in two different arrays having the sice of m and n, respectively

#include <stdio.h>

void printIntersection(int*x, int*y, int m, int n){
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (x[i] ==y[j]){
                printf("%d,",x[i]);
                break;
            }
        }
    }
    printf("\n");
}