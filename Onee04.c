#include<stdio.h>

int main() {

    int n,i;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];

    int sum1=0;
    printf("Mita: ");
    for(i=1; i<=n; i++) {
        scanf("%d",&arr1[i]);
        sum1+=arr1[i];
    }

    int sum2=0;
    printf("Rita: ");
    for(i=1; i<=n; i++) {
        scanf("%d",&arr2[i]);
        sum2+=arr2[i];
    }

    if(sum1>=0 ) {
        printf("Mita will win\n");
    }
    else if(sum2>=0) {
        printf("Rita will win\n");
    }
    else if(sum1>=0 && sum2>=0) {
        printf("Draw\n");
    }
    else if(sum1<=0 && sum2<=0) {
        printf("Draw\n");
    }

    return 0;
}
