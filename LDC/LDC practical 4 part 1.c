/* parimal Muley
588 E3 */
#include<stdio.h>
#include<conio.h>
int main()
{
 int n=1,x;

 printf("enter a no\n",x); //for new line
 scanf("%d",&x);
 // While Loop

 n=1;         //Initialize
 while(n<=x)   // Condition
 {
  printf(" %d\n",n);
  n++;    // Increment
 }

 getch();
 printf("this output is for do while loop\n");
 // Do While Loop
 n=1;  // Initialize
 do
  {
   printf(" %d ",n);
   n++;          // Increment
  }
  while(n<=x); // Condition


 getch();
 
printf("\n"); //for new line

  /*  For loop
  (initialize; condition ; increment) */
printf("this output is for for loop");
 for(n=1;n<=x;n++)
 {
   printf(" %d ",n);
 }

 getch();


}

/*output- enter a no
55
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10
 11
 12
 13
 14
 15
 16
 17
 18
 19
 20
 21
 22
 23
 24
 25
 26
 27
 28
 29
 30
 31
 32
 33
 34
 35
 36
 37
 38
 39
 40
 41
 42
 43
 44
 45
 46
 47
 48
 49
 50
 51
 52
 53
 54
 55
this output is for do while loop
 1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30  31  32  33  34  35  36  37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55
this output is for for loop 1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30  31  32  33  34  35  36  37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55
--------------------------------
Process exited after 5.97 seconds with return value 0
Press any key to continue . . .     */
