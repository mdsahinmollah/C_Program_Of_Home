#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,sum =0,rem,i=0;
    printf("Enter a binary number :");
    scanf("%d",&num);
    temp = num;
    while(num != 0)
    {
        rem = num % 10;
        sum = sum + rem*pow(2,i);
        i++;
        num = num / 10;
    }
    printf("Decimal of %d is : %d",temp,sum);
return 0;
}