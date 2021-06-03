/*Name:Parimal Kiran Muley
Rollno:E3(588)

Problem 2 Part 2

Write a menu driven program in C to demonstrate the use of left shift, 
right shift, and, or, xor operators


*/

#include<stdio.h>

int main() {
    
    int num1, num2, bits;
    int choice;
    
    while(1) {
        
        // Display menu option to user
        printf("\n1. Left Shift");
        printf("\n2. Right Shift");
        printf("\n3. And");
        printf("\n4. or");
        printf("\n5.  xor");
        printf("\n6. Exit");
        
        //Ask the user to enter the choice
        printf("\n\nEnter your choice: ");
        
        //Store the user choice in varible "choice"
        scanf("%d", &choice);
        
        if (choice == 6) {
        break;
        }
        
        //Ask user to enter the number 1
        printf("\n\nEnter number 1: ");
        
        //Store the value of number 1 in variable num1
        scanf("%d", &num1);
        
        
        //Perform the action based on the choice selected by the user using switch case.
        switch(choice) {
            
            // for Left shift
            case 1:
                
                printf("\nEnter the no. of bits: ");
                scanf("%d", &bits);
                
                printf("\n\n Left shift of %d by %d bits is %d", num1, bits, num1<<bits);
            break;
            // for right shift
			case 2:
			    printf("\nEnter the no of bits:");
				scanf("%d", &bits);
				
				printf("\n\n Right shift of %d by %dbits is %d",num1,bits,num1>>bits);
		    break;    
            
            // for AND operation
            case 3:
                
                printf("\nEnter number 2: ");
                scanf("%d", &num2);
                
                printf("\n\n%d AND %d = %d", num1, num2, num1&num2);    
            break;
              //for OR operation
			case 4:
			    printf("\nEnter number 2:");
				scanf("%d",&num2);
				printf("\n\n%d OR %d = %d", num1, num2, num1|num2);
		    break;
		    
			//for XOR operation	
			case 5:
			printf("\nEnter number 2:");
				scanf("%d",&num2);
				printf("\n\n%d XOR %d = %d", num1, num2, num1^num2);
			break;
				  
            default:
                printf("\nEnter the correct choice");
                
        } // end of switch
        
    
    }// end of while loop
    
    printf("Thank You for using the programe");
    
    return 0;
}
/*OUTPUT-
1. Left Shift
2. Right Shift
3. And
4. or
5.  xor
6. Exit

Enter your choice: 1


Enter number 1: 20

Enter the no. of bits: 2


 Left shift of 20 by 2 bits is 80
1. Left Shift
2. Right Shift
3. And
4. or
5.  xor
6. Exit

Enter your choice: 2


Enter number 1: 80

Enter the no of bits:2


 Right shift of 80 by 2bits is 20
1. Left Shift
2. Right Shift
3. And
4. or
5.  xor
6. Exit

Enter your choice: 3


Enter number 1: 40

Enter number 2: 30


40 AND 30 = 8
1. Left Shift
2. Right Shift
3. And
4. or
5.  xor
6. Exit

Enter your choice: 4


Enter number 1: 50

Enter number 2:90


50 OR 90 = 122
1. Left Shift
2. Right Shift
3. And
4. or
5.  xor
6. Exit

Enter your choice: 5


Enter number 1: 60

Enter number 2:100


60 XOR 100 = 88
1. Left Shift
2. Right Shift
3. And
4. or
5.  xor
6. Exit

Enter your choice: 6
Thank You for using the programe
--------------------------------
Process exited after 77.18 seconds with return value 0
Press any key to continue . . .*/
