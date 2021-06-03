/*
Name:Parimal Muley
Rollno:588

Problem 7 Part 2
Write a program in C to display the fibonacci series within a given range

Take the range form the user start, end values

for example: 100, 200

What is fibonacci series?
Ans:
t0 t1 t2
0, 1, 1, 2, 3, 5, 8, 13

Logic:

t0 t1 t2
0, 1, 1

t2 = t0+t1

*/


   
    
#include <stdio.h>

int main()
{
    int t0 = 0, t1 = 1, t2 = 0;
    
    int start, end;

   
    printf("Enter the start range: ");
    scanf("%d", &start);
    printf("Enter the end range ");
    scanf("%d", &end);

    

    printf("Fibonacci terms in the given range are: \n");

    
    while(t2 <= end)
    {

        
        if(t2 >= start) 
        {
            printf("%d, ", t2);
        }

        t0 = t1;    
        t1 = t2;     
        t2 = t0 + t1; 
    }

    return 0;
}

/* output-Enter the start range: 88
Enter the end range 999
Fibonacci terms in the given range are:
89, 144, 233, 377, 610, 987,
--------------------------------
Process exited after 15.04 seconds with return value 0
Press any key to continue . . .*/
