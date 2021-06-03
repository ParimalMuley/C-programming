/* Name-parimal Kiran Muley
batch- E3 roll no-588
 
1.Write a program in C to display the quotient and remainder after the division of two numbers
  */
#include <stdio.h>
int main() {
    int dividend, divisor, remainder;
    float quotient;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient = %.2f\n", quotient);/*prints the quotient*/
    printf("Remainder = %d", remainder);/*prints the remainder*/
    return 0;
    /* OUTPUT-
	Enter dividend: 55
Enter divisor: 4
Quotient = 13
Remainder = 3
--------------------------------
Process exited after 14.22 seconds with return value 0
Press any key to continue . . .*/
}
