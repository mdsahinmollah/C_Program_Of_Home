#include<stdio.h>
int main(){
    int num,a[20],i=0,j;
    printf("Enter a decimal number : ");
    scanf("%d",&num);
    while (num != 0){
        a[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Decimal to binary is : ");
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);

    }
return 0;
}