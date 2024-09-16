#include<stdio.h>
int main(){

int a[4],sum=0,i;

    a[0]=5;
    a[1]=5;
    a[2]=5;
    a[3]=5;

    for(i=0;i<4;i++){
        sum=sum+a[i];

    }
    printf("%d\n",sum);
    printf("The average number : %.2f\n",(float)sum/4);

    return 0;




}
