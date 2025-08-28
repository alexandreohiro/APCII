/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 01 parte 3
*/
#include <stdio.h>

void zerarDiagonais(int m, int n, int mat[m][n]) 
{
    for(int i=0; i<m; i++) 
    {
        if(i < n) mat[i][i] = 0;                       // diagonal principal
        if(n-i-1 >= 0 && n-i-1 < n) mat[i][n-i-1] = 0; // diagonal secundária
    }
}

int main() {
    int mat[3][3];
    
    printf("Digite os valores da matriz (3x3):\n");
    
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    zerarDiagonais(3, 3, mat);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++) printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
