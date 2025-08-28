#include <stdio.h>

void multiplicarMatrizes(int m, int n, int p, int A[m][n], int B[n][p], int C[m][p]) {
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            C[i][j]=0;
            for(int k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
}

int main() {
    int A[2][3] = {{1,2,3},{4,5,6}};
    int B[3][2] = {{7,8},{9,10},{11,12}};
    int C[2][2];
    multiplicarMatrizes(2,3,2,A,B,C);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}