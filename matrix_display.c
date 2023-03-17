#include<stdio.h>
int main()
{
    int arr[2][3],i,j;

    printf("Enter numbers in matrix : ");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix form is : ");
    printf("\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%4d",arr[i][j]);
            printf("\n");          
        
    }
return 0;
}