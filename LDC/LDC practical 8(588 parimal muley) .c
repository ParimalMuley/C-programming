/*
Name: parimal kiran muley
Rollno: 588[E]


Problem:
Write a menu-driven program in c to perform addition, subtraction, 
division, and the transpose of metrics

1. Addition
2. Subtraction
3. Transpose
4. Division
5. Exit
*/
#include <stdio.h>

int main()
{
    int choice; //variable declaration
    int i,j,w,x,y,z,n; //variable declaration
    printf("enter number of rows and columns of A : "); //ask user to enter number of rows and columns of matrix A
    scanf("%d", &w); //store number of rows
    scanf("%d", &x); //store number of columns 
    int A[w][x]; //array declaration
    int At[x][w]; //array declaration
    printf("enter number of rows and columns of B : ");//ask user to enter number of rows and columns of matrix B
    scanf("%d", &y); //store number of rows
    scanf("%d", &z); //store number of columns
    int B[y][z]; //array declaration
    int Bt[z][y];//array declaration
    
    printf("\nenter numbers in A matrix:\n"); //ask user to enter numbers in matrix A
        for(i=0;i<w;i++) //checking condition
    {
        for(j=0;j<x;j++) //checking condition
            scanf("%d", &A[i][j]); //store numbers
    }
    printf("\nmatrix A: \n"); //message
        for(i=0;i<w;i++) //checking condition
    {
        for(j=0;j<x;j++) //checking condition
        {
            printf("%d", A[i][j]); //display matrix A
            printf(" "); 
        }
        printf("\n");
    }
    printf("\nenter numbers in B matrix:\n"); //ask user to enter number in matrix B
        for(i=0;i<y;i++) //checking condition
    {
        for(j=0;j<z;j++) //checking condition
            scanf("%d", &B[i][j]); //store numbers
    }
    printf("\nmatrix B: \n"); //message
        for(i=0;i<y;i++) //checking condition
    {
        for(j=0;j<z;j++) //checking condition
        {
            printf("%d", B[i][j]); //display matrix B
            printf(" ");
        }
        printf("\n");
    }
    
    while(1) //checking condition
    { //start of while loop
    printf("\nselect the operation you want to perform");
	printf("\n\n1.addition \n2.substraction \n3.transpose \n4.Division \n5.exit:  "); //ask user to enter choice
    scanf("%d", &choice); //store user choice
    if(choice==5) //checking condition
    {
        break;
    }
    switch(choice) 
    { //start of switch case
        case 1:
        if(w==y && x==z) //checking condition
        {
            printf("\n\nThe Addition of matrices is: \n"); //output message
        for(i=0;i<w;i++) //checking condition
    {
        for(j=0;j<x;j++) //checking condition
        
            {
                printf("%d", A[i][j]+B[i][j]); //output
                printf(" ");
            }
            printf("\n");
    }
        }
        else
        printf("\nwrong input \nrows and columns of both matrices should be same");
    break;
    case 2:
    if(w==y && x==z) //checking condition
        {
            printf("\n\nThe Substraction of matrices is: \n"); //output message
        for(i=0;i<w;i++) //checking condition
    {
        for(j=0;j<x;j++) //checking condition
        
            {
                printf("%d", A[i][j]-B[i][j]); //output
                printf(" ");
            }
            printf("\n");
    }
        }
        else
        printf("\nwrong input \nrows and columns of both matrices should be same");
    break;
    case 3:
    for(i=0;i<w;i++) //checking condition
    {
        for(j=0;j<x;j++) //checking condition
            {
                At[j][i]=A[i][j]; //calcualting transpose of matrix A
            }
    }
    printf("\nThe transpose of matrix A is: \n"); //output message
        for(i=0;i<x;i++) //checking condition
    {
        for(j=0;j<w;j++) //checking condition
        {
            printf("%d", At[i][j]); //output
            printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<y;i++) //checking condition
    {
        for(j=0;j<z;j++) //checking condition
            {
                Bt[j][i]=B[i][j]; //calcualting transpose of matrix A
            }
    }
    printf("\nThe transpose of matrix B is: \n"); //output message
        for(i=0;i<z;i++) //checking condition
    {
        for(j=0;j<y;j++) //checking condition
        {
            printf("%d", Bt[i][j]); //output
            printf(" ");
        }
        printf("\n");
    }
    break;
    case 4:
    printf("\n enter number n for division: "); //ask user to enter value of n
    scanf("%d", &n); //store value of n in variable "n"
    printf("\nThe division of matrix A by number n is: \n"); //output message
        for(i=0;i<w;i++) //checking condition
    {
        for(j=0;j<x;j++) //checking condition
        {
            printf("%d", A[i][j]/n); //output
            printf(" ");
        }
        printf("\n");
    }
    printf("\nThe division of matrix B by number n is: \n"); //output message
        for(i=0;i<y;i++) //checking condition
    {
        for(j=0;j<z;j++) //checking condition
        {
            printf("%d", B[i][j]/n); //output
            printf(" ");
        }
        printf("\n");
    }
    break;
    default:
    printf("\n\nwrong choice"); //wrong choice message
    } //end of switch case() 
    } //end of while loop
    printf("\n\nThank you for using this program"); //thank you message
    return 0;
} //end of main()


/*
output:
enter number of rows and columns of A : 3 3
enter number of rows and columns of B : 3 3

enter numbers in A matrix:
6 8 4 2 6 4 6 2 4

matrix A:
6 8 4
2 6 4
6 2 4

enter numbers in B matrix:
 12 22 32 10 20 22 14 24 62

matrix B:
12 22 32
10 20 22
14 24 62

select the operation you want to perform

1.addition
2.substraction
3.transpose
4.Division
5.exit:  1


The Addition of matrices is:
18 30 36
12 26 26
20 26 66

select the operation you want to perform

1.addition
2.substraction
3.transpose
4.Division
5.exit:  2


The Substraction of matrices is:
-6 -14 -28
-8 -14 -18
-8 -22 -58

select the operation you want to perform

1.addition
2.substraction
3.transpose
4.Division
5.exit:  3

The transpose of matrix A is:
6 2 6
8 6 2
4 4 4

The transpose of matrix B is:
12 10 14
22 20 24
32 22 62

select the operation you want to perform

1.addition
2.substraction
3.transpose
4.Division
5.exit:  4

 enter number n for division: 2

The division of matrix A by number n is:
3 4 2
1 3 2
3 1 2

The division of matrix B by number n is:
6 11 16
5 10 11
7 12 31

select the operation you want to perform

1.addition
2.substraction
3.transpose
4.Division
5.exit:  5


Thank you for using this program
--------------------------------
Process exited after 196.1 seconds with return value 0
Press any key to continue . . .*/


