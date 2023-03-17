#include <stdio.h>
int main()
{
    int sum =0,i,j,k;
    int a[2][3],b[2][3],result[2][3];
    /*for input of 1st matrix*/
    printf("Enter numbers in 1st matrix : ");
    for(i = 0;i < 2; i ++)
    {
        for(j =0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
            
    }
    /*for input of 2st matrix*/
    printf("Enter numbers in 2nd matrix : ");
    for(i = 0;i < 2; i ++)
    {
        for(j =0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
            
    }
    /*for multiply*/

    for(i = 0;i < 2; i ++)
    {
        for(j =0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    /*for display the matrix*/
    printf("Matrix form is : ");
    printf("\n");

    for(i = 0;i < 2; i ++)
    {
        for(j =0;j<3;j++)
        
            printf("%4d",result[i][j]);
            printf("\n");
        
            
    }
return 0;
}
   
