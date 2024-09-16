#include<stdio.h>

int main() {

    int n=4,i;
    int arr[n];

    for(i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1] && arr[0]>arr[2] && arr[0]>arr[3]) {
        printf("The arranger will be Rahim\n");
    }
    else if(arr[1]>arr[0] && arr[1]>arr[2] && arr[1]>arr[3]) {
        printf("The arranger will be Karim\n");
    }
    else if(arr[2]>arr[0] && arr[2]>arr[1] && arr[2]>arr[3]) {
        printf("The arranger will be Farid\n");
    }
    else {
        printf("The arranger will be Mitul\n");
    }

    return 0;
}
