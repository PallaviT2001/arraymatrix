#include <stdio.h>
int main()
{
    int m=2,n=2;
    int i;
    int j;
    int matrix1[m][n];
    int matrix2[m][n];
    int result[m][n];

    printf("enter the first matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter the second matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {

            scanf("%d", &matrix2[i][j]);

        }
    }
    printf("Result matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            result[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d\n",result[i][j]);
        }
    }
}

