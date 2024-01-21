#include<stdio.h>
int main()
{
    int m1,n1;
    scanf("%d %d",&m1,&n1);
    int matrix[m1][n1];
    int matrix1[m1][n1];
    for(int i=0; i<m1; i++)
        for(int j=0; j<n1; j++)
            scanf("%d",&matrix1[i][j]);
    int m2,n2;
    scanf("%d %d",&m2,&n2);
    int matrix2[m2][n2];
    for(int i=0; i<m2; i++)
        for(int j=0; j<n2; j++)
            scanf("%d",&matrix2[i][j]);
     for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            matrix[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d ",matrix[i][j]);
        }
        printf("
");
     }
}