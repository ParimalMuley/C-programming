/*
Name: Parimal Muley
Rollno: 588 [E]

Problem 6 Part 2
Write a program in C to display the minimum and maximum element in an array

*/
#include<stdio.h>
#include <conio.h>
 
 
int main()
{
    int a[1000],i,n,min,max;
   //Take the input from the user
    printf("Enter size of the array : ");//initialize the value of array marks
    scanf("%d",&n);
 
    printf("Enter marks in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum marks  : %d",min);
          printf("\nmaximum marks : %d",max);
 
 
    return 0;
}
/*output	
Enter size of the array : 10
Enter marks in array : 56 34 67 89 87 98 65 34 23 3
minimum marks  : 3
maximum marks : 98
--------------------------------
Process exited after 68.83 seconds with return value 0
Press any key to continue . . .*/


