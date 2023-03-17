#include<stdio.h>
int main(){
    int num,sum=0,avg,i=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(i = 0;i<=num;i++){
        sum = sum + i;
    }
    printf("The sum of %d numbers is : %d \n",num,sum);
    avg = sum/num;
    printf("The avg of %d numbers is : %d",num,avg);
return 0;
}