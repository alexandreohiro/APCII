/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 03 parte 3
*/
#include <stdio.h>

void multiplicarMatrizes(int m, int n, int p, int A[m][n], int B[n][p], int C[m][p]) {
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            C[i][j]=0;
            for(int k=0;k<n;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
}

int main() 
{
    int A[2][3], B[3][2], C[2][2];

    printf("Digite os valores da matriz A (2x3):\n");
    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os valores da matriz B (3x2):\n");
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 2; j++) 
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    multiplicarMatrizes(2,3,2,A,B,C);
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    
    return 0;
}
