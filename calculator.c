#include<stdio.h>
//function declaration
float addition (float shuvo1,float rakib2);
float subtraction( float shuvo1,float rakib2);
float multi( float shuvo1,float rakib2);
float div(float shuvo1,float rakib2);
float reminder(float shuvo1,float rakib2);
float power(float shuvo1,float rakib2);

int main (){
float shuvo1,rakib2,result;
char operator ;

//input user
printf("Enter 1st number  :  ");
scanf("%f",&shuvo1);

printf("Enter operator (+,-,*,/,!,^ :   ");
scanf("%c", &operator);

 printf("Enter second number : ");
 scanf("%f", &rakib2);

 //perform calculation based on the operator
 switch(operator){
  case '+':
      result = addition(shuvo1,rakib2);
      break;

  case '-':
    result=subtraction(shuvo1,rakib2);
    break;

  case '*':
    result=multi(shuvo1,rakib2);
    break;

  case '/':
    //check for division by zero
    if(rakib2==0){
        printf("Error:Division by zero is not allowed\n");
    return 1;//exit program with an error code
 }else{
 result =div(shuvo1,rakib2);
 }
    break;

  case '!':
    result = reminder(shuvo1,rakib2);
    break;

    case '^':
    result= power(shuvo1,rakib2);
    break;

    default:
        printf("Error: invalid operator\n");
        return 1;//Exit program with an error code
 }

 //Display the result
 printf("Final result  : %.2f %c %.2f = %.2f\n",shuvo1,operator,rakib2,result);

 return 0;

 }

//Function addition
float addition(float shuvo1,float rakib2){
return shuvo1+rakib2;
}

//Function subtraction
float subtraction (float  shuvo1,float rakib2){
return  shuvo1- rakib2;
}

//Function multi
float multi (float shuvo1,float rakib2){
return shuvo1 * rakib2;
}


//Function div
float div(float shuvo1,float rakib2){
return shuvo1/rakib2;
}


//Function reminder
float reminder(float shuvo1, float rakib2){
return  shuvo1 ! rakib2;
}

//Function to perform power
float power(float shuvo1,float rakib2){
return shuvo1^rakib2;
}

