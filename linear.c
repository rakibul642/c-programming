#include<stdio.h>
int main(){

int num[]={10,2,30,15,28,5};
int i;

int value;
printf("Enter the value i want to search : ");
scanf("%d",&value);
int position= -1;

for(i=0;i<6;i++){
        if(value==num[i]){
            position=i+1;
            break;
        }

}

if (position==-1){
    printf("not found");
}
else{
    printf("value is found at %d position",position);
}










}s
