#include<stdio.h>

  float addition(float n1, float n2);
  float subtraction(float n1, float n2);
  float multiplication(float n1, float n2);
  float division(float n1, float n2);
 

  int main()
  {
     char choice;
     float n1, n2;
     float result;
     
     printf("WECLCOME TO THE HANDCALCULATOR\n*******\n");
     
     printf("Select the Arthimatic Operation you want to be perfromed \n [+, -, *, /] :\n");
     scanf("%c" , &choice);
 
    printf("Enter the First Number\n");
    scanf("%f" , &n1);

    printf("Enter the Second Number\n");
    scanf("%f" , &n2);


    switch(choice)
     {
       case '+' :
           result = addition(n1 , n2);
           
           printf("\n The result of %.2f %c %.2f  = %.2f", n1, choice, n2, result);
           break;

       case '-' :
           result = subtraction(n1 , n2);
           printf("\n The result of %.2f %c %.2f  = %.2f", n1, choice, n2, result);
           break;

      case '*' :
           result = multiplication(n1 , n2);
           printf("\n The result of %.2f %c %.2f  = %.2f", n1, choice, n2, result);
           break;

      case '/' :
           result = division(n1 , n2);
           printf("\n The result of %.2f %c %.2f  = %.2f", n1, choice, n2, result);
           break;
      
       default:
           printf("\n You have enetered an Invalid Operator ");
      
    }
    return 0;
  }

  float addition(float n1, float n2)
    {
      return n1 + n2;
    }
  
  float subtraction(float n1, float n2)
    {
      return n1 - n2;
    }

  float multiplication(float n1, float n2)
    {
      return n1 * n2;
    }

  float division(float n1, float n2)
    {
      return n1 / n2;
    }