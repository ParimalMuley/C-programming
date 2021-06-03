/*name-Parimal Muley
roll no- 588 E
*/
#include <stdio.h>
int main() {
   int i, j, rows,space,k,n,c;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      
	    printf("\n");
   }
    
	//part2
	printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
    // part 3
    
     printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
      
   }
     //part 4
   printf("Enter number of rows\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
  {
    for (k = 1; k <= n-c; k++)
      printf(" ");

    for (k = 1; k < c; k++)
      printf("*-");

    printf("*\n");
  }
   
   
   /* Part 5
    Input rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Iterate through columns to print star */
        for(j=i; j<=rows; j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

  
  
  
    
   return 0;
}/*
output-
Enter the number of rows: 5
*
* *
* * *
* * * *
* * * * *
Enter the number of rows: 5
* * * * *
* * * *
* * *
* *
*
Enter the number of rows: 5
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
Enter number of rows
5
    *
   *-*
  *-*-*
 *-*-*-*
*-*-*-*-*
Enter number of rows: 5
*****
 ****
  ***
   **
    *

--------------------------------
Process exited after 4.266 seconds with return value 0
Press any key to continue . . .*/
