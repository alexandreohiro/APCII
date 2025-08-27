#include <stdio.h>

void zerarBordas(int m, int n, int mat[m][n]) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(i==0 || i==m-1 || j==0 || j==n-1)
                mat[i][j]=0;
        }
    }
}

int main() {
    int mat[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    zerarBordas(4,4,mat);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}
