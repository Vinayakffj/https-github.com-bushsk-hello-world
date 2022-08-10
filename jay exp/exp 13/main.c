#include<stdio.h>
void transpose (int A[4][4], int B[4][4])
{
    int i,j;
 {

    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
    {
        B[i][j]=A[j][i];
    }
}
}
void main()
{
    int A[4][4]= {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int B[4][4],i,j;
    transpose (A,B);
    printf("JAY BANKOTI - 121A8022\n");
    printf("result matrix is \n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
            printf("%d",B[i][j]);
            printf("\n");
    }

}
