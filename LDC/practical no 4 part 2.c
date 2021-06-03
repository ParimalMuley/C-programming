/*
name-Parimal Muley
roll no-588
practical 4 part 2 */
#include<stdio.h>
#include<conio.h>
int main()
{
 int x,n;

 printf("\n"); //for new line
printf("enter a no",x);
scanf(" %d", &x); 

 n=x;         //Initialize
 while(n>=1)   // Condition
 {
  printf(" \n %d",n);
  n--;     // Decrement
 }

 getch();


// Do While Loop
 n=x;  // Initialize
 do
  {
   printf("\n \n %d",n);
   n--;          // Decrement
  }
  while(n>=1); // Condition


 getch();
 
 
 //  For loop
 //  (initialize; condition ; increment)

 for(n= x;n>=1;n--)
 {
   printf("\n\n %d",n);
 }

 getch();





      }
      
      
      
      
      /*   output-
enter a no7

 7
 6
 5
 4
 3
 2
 1

 7

 6

 5

 4

 3

 2

 1

 7

 6

 5

 4

 3

 2

 1  */
