#include <stdio.h>

void zerarDiagonais(int m, int n, int mat[m][n]) {
    for(int i=0; i<m; i++) {
        if(i < n) mat[i][i] = 0;             // diagonal principal
        if(n-i-1 >= 0 && n-i-1 < n) mat[i][n-i-1] = 0; // diagonal secundária
    }
}

int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    zerarDiagonais(3, 3, mat);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}
