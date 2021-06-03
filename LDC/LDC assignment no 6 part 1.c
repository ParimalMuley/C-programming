/* name-Parimal Kiran MUley
 Roll no-588[E3]
 Problem 6 Part 1
Write a program in C to display the addition of N numbers stored in an array
 */
 
 #include<stdio.h>

int main()
{

    int n, sum = 0, c, array[100];

    printf("Enter the number of subject marks you want to add: "); // printf to print the statement
    scanf("%d", &n);

    printf("\n\nEnter %d subjects marks \n\n", n);

    for(c = 0; c < n; c++) //condition
    {
        scanf("%d", &array[c]);
        sum = sum +array[c];    //
    }

    printf("\n\nSum of marks = %d\n\n", sum); // final printf to print the sum
    return 0;
}

/*
 OUTPUT-Enter the number of subject marks you want to add: 6


Enter 6 subjects marks

45 32 34 56 66 98


Sum of marks = 331


--------------------------------
Process exited after 24.35 seconds with return value 0
Press any key to continue . . .*/
