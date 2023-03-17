#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,sum = 0,remainder;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;
    while(num != 0){
        remainder = num % 10;
        sum = sum + remainder*remainder*remainder;
        num = num / 10;
    }
    if(temp == sum){
        printf("%d is armstrong !",temp);
    }
    else{
        printf("%d is not armstrong !",temp);
    }
    

return 0;
}