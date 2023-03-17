// #include <stdio.h>
// int main()
// {
//     int fibonacci[2]={0,1},i,num;
//     printf("Enter the upper range :");
//     scanf("%d",&num);

//     for(i=2;i<num;i++){
//     fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];

//     }
//     for(i=0;i<num;i++){
//     printf("%d",fibonacci[i]);
//     }
// return 0;
// }
#include<stdio.h>
int main(){
    int n,f=0,s=1,next,i;
    printf("Enter the upper range : ");
    scanf("%d",&n);
    printf("%d %d ",f,s);
    for(i = 2;i<n;i++){
        next = f + s;
        printf("%d ",next );
        f = s;
        s = next;
    }
return 0;
}