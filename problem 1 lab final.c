#include<stdio.h>
int findAr(int size,int ar[],int tergetnumber){
int i;
for(i=0; i<size; ++i){
    if(ar[i] == tergetnumber){
        return i;
    }
}
return-1;
}

int main(){
int ar[]={3,6,9,4,7,8};
int size = sizeof(ar)/sizeof(ar[0]);


int result1=findAr(size,ar,3);
int result2=findAr(size,ar,9);

printf(" findAr(6,ar,3)=%d\n",result1);
printf(" findAr(6,ar,9)=%d\n",result2);

return 0;
}
