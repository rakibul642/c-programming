#include<stdio.h>
#include <stdlib.h>
int add(int x,int y);
int sub(int x,int y);
int multi(int x,int y);
int division (int x,int y);

void fact();

main(){

          int choice,num1,num2,sum1,sub1,mul1,div1;
          printf(" press 1 for add");
          printf("press 2 for sub");
          printf("press 3 for multi");
          printf("press 4 for div");
          printf("press 5 for factorial");

        scanf("%d",&choice);


        printf("Enter the two numbers :  ");
        scanf("%d%d",&num1,&num2);

        switch(choice)
        {
        case 1:
          sum1=  add(num1,num2);
          printf(" sum is =%d",sum1);
            break;

        case 2:
            sub1= sub(num1,num2);
            printf("subtraction is =%d",sub1);
            break;

        case 3:
            mul1=mul(num1,num2);
            printf("multiplication is =%d",mul1);
            break;

            case 4:
            div1=division(num1,num2);
            printf("division is =%d",div1);
            break;

            case 5:
                fact();
                break;

                case 6:
                    even_odd();
                    break;

        }
}
//addition
int add(int x,int y){
int z;
z= x+y;
return(z);
}
//subtraction
int sub(int x,int y){
int z;
z=x-y;
return(z);
}
//multiplication
int mul(int x,int y){
int z;
z=x*y;
return(z);
}
//division
int division(int x,int y){
int z;
z=x/y;
return(z);
}

//factorial
fact()
int x,y;
printf("enter the value: ");
scanf("%d",&x);

for(y=1;y<=x;y++)
    factorial = factorial * y;
printf("factorial is =%d",factorial);


}
