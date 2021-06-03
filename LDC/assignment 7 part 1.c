/*
name- Parimal Muley
Roll no- 588 [E]

Problem 7 Part 1
Write a program in C to display the prime numbers within a given range
*/
#include <stdio.h>
int main()
{
   int num1, num2,x, i, j;
 
   /* Ask user to input the from/to range
    * like 1 to 100, 10 to 1000 etc.
    */
   printf("Enter the start and end range:");
   //Store the range in variables using scanf
   scanf("%d %d", &num1, &num2);
 
   //Display prime numbers for input range
   printf("Prime numbers between %d and %d are:\n", num1, num2);
   for(i=num1+1; i<num2; ++i)
   {
      x=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            x=1;
            break;
         }
      }
      if(x==0)
         printf("%d\n",i);
  }
  return 0;
}
/*output-Enter the start and end range:78
175
Prime numbers between 78 and 175 are:
79
83
89
97
101
103
107
109
113
127
131
137
139
149
151
157
163
167
173

--------------------------------
Process exited after 18.6 seconds with return value 0
Press any key to continue . . . */
