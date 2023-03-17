#include<stdio.h>
int main(){
    int num,a[20],i=0,j;
    printf("Enter a decimal number : ");
    scanf("%d",&num);
    while (num != 0){
        a[i] = num % 16;
        num = num / 16;
        i++;
    }
    printf("Decimal to hexadecimal is : ");
    for(j=i-1;j>=0;j--){
        if(a[j]<10){
            printf("%d",a[j]);
        }
        else{
            printf("%c",a[j]+55);
        }

    }
return 0;
}