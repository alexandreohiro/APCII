/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 02 parte 3
*/
#include <stdio.h>

void zerarBordas(int m, int n, int mat[m][n]) 
{
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<n;j++) 
        {
            if(i==0 || i==m-1 || j==0 || j==n-1)
                mat[i][j]=0;
        }
    }
}

int main() 
{
    int mat[4][4];

    printf("Digite os valores da matriz mat (4x4):\n");

    for(int i = 0; i < 4; i++) 
    {
        for(int j = 0; j < 4; j++) 
        {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    zerarBordas(4,4,mat);

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++) printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
