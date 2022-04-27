#include<stdio.h>
void main()
{
    int mat[6][6];
    int i,j,row,col,sum=0;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
 
    printf("The matrix\n");
    for(i=0;i <6 ; i++)
    {
        for(j=0;j < 6; j++)
        {
            printf("%d\t",mat[6][6]);
        }
        printf("\n");
    }
    for(i=0;i < 6; i++)
    {
        for(j=0; j < 6; j++)
        {
            if(i==j)
            {
                sum=sum+mat[6][6];
            }
        }
    }
 
    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}
