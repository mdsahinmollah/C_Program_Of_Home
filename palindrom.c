#include<stdio.h>

int main(){
    int num,temp,sum = 0,remainder;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;
    while(num != 0){
        remainder = num % 10;
        sum = sum * 10 + remainder;
        num = num / 10;
    }
    if(temp == sum){
        printf("%d is palindrom !",temp);
    }
    else{
        printf("%d is not palindrom !",temp);
    }
    

return 0;
}