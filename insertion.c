#include<stdio.h>
void insertElement(int arr[],int *n,int element,int position){

if (position<0 || position >*n){

    printf("Invalid position!\n");
    return ;
}

for(int i =n;i>position;i--){

    arr[i]=arr[i-1];
}

arr[position]=element;
(*n)++;

}
int main(){
int arr[100]={1,2,3,4,5};
int n=5;
int element=10;
int position =2;

printf("original array  :  ");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
printf("\n");
}
insertElement(arr, &n, element, position);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
