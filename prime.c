#include <stdio.h>
int main(){
    int num,flag = 0,i,numb = 1;
    while (numb != 0)
    {
            
        printf("Enter a number : ");
        scanf("%d",&num);

        for(i = 2;i<num;i++){
            if(num % i == 0){
                flag = 1;
            
            }

        }
        if(flag == 1){
            printf("%d is not prime! \n",num);
            
        }
        else{
            printf("%d is prime! \n",num);
            
        }
    }



return 0;
}