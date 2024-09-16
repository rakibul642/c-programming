#include<stdio.h>

int main() {

    char n;
    scanf("%c",&n);

    if(n=='A') {
        printf("Execellent\n");
    }
    else if(n=='B') {
        printf("Well Done\n");
    }
    else if(n=='C') {
        printf("You Passed\n");
    }
    else if(n=='D') {
        printf("Better Try Again\n");
    }
    else {
        printf("Invalid Grade");
    }

    return 0;
}
