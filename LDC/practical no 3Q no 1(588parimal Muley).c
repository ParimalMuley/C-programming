/*
name-parimal Kiran Muley
 roll no-588(E3)*/
 
#include<stdio.h>
#include<math.h>
int main()
{
	 double
	 ceil_temp,floor_temp,sqrt_temp,pow_temp,abs_temp;
	 int base,expa;
	 float negative,no;
    
	ceil_temp=ceil(4.5);
	 printf("\nround up value of4.5 is %f",ceil_temp);
	
	floor_temp = floor (4.5); 
     printf("\nround up value of4.5 is %f",floor_temp);
	
	 sqrt_temp=sqrt(49);
	 printf("\nsquare root of 49 is %f",sqrt_temp);
	 
	
	 printf("\nEnter any decimal point no =");
	 scanf("%f",  &no);
	 ceil_temp=ceil(no);
	 printf("\nround up value of %f is%f",no,ceil_temp );
	 
	 printf("\nEnter base no=");
	 scanf("%d",&base);
	 printf("\n Enter exponent no=");
	 scanf("%d",&expa);
	 pow_temp=pow(base,expa);
	 printf("\n%f",pow_temp);
	 
	 printf("\n Enter negative no=");
	 scanf("%f",&negative);
	 abs_temp=abs(negative);
	 printf("\n Absolute value of %f is %f",negative,abs_temp);
	 
	 } /*  output-
round up value of4.5 is 5.000000
round up value of4.5 is 4.000000
square root of 49 is 7.000000
Enter any decimal point no =55.5

round up value of 55.500000 is56.000000
Enter base no=26

 Enter exponent no=35

33424673908950952000000000000000000000000000000000.000000
 Enter negative no=-6

 Absolute value of -6.000000 is 6.000000
--------------------------------
Process exited after 44.13 seconds with return value 0
Press any key to continue . . .*/
