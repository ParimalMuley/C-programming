#include <stdio.h>  
int main()    
{    
    int num1, num2;       int sum, sub, mult;       float div;    
    /*   
*	Read two numbers from user separated by comma   
     */    
    printf("Input any two numbers separated by comma : ");       scanf("%d,%d", &num1, &num2);    
    /*   
*	Performs all arithmetic operations   
     */     
    sum = num1 + num2;       sub = num1 - num2;       mult = num1 * num2;       div 
= (float)num1 / num2;    
    /*   
*	Prints the result of all arithmetic operations   
     */    
    printf(" addition of the numbers  : %d\n", sum);      
 printf("subtraction of numbers : %d\n", sub); 
      printf("multiplication of numbers : %d\n", mult);   
    printf("division of the numbers : %f\n", div);  ;
	/*
	output=
	Input any two numbers separated by comma : 15,20
 addition of the numbers  : 35
subtraction of numbers : -5
multiplication of numbers : 300
division of the numbers : 0.750000

--------------------------------
Process exited after 6.924 seconds with return value 35
Press any key to continue . . .*/}  
