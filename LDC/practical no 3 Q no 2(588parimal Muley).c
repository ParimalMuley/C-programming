/*Name:Parimal Muley  
Rollno:586(E3)

Problem 3 Part 2

Write a program in C to display the grade obtained by the student in a course. 
The input will be the marks obtained and the output will be the grade obtained


1. store the marks of 5 subject(hindi, english, math, history, physics)
2. Assume the marks is out of 100;
3. Calculate the percentage
4. per = total_marks_obtained/total_mark*100
5. compare to calculate the grades

Grade criteria:

if grade is greater than equal to 90 then grade will be 'A'
else if grade is less than 90 and greater than equal to 80 then grade will be 'B'
else if grade is less than 80 and greater than equal to 70 then grade will be 'C'
else if grade is less than 70 and greater than equal to 60 then grade will be 'D'
else if grade is less than 60 and greater than equal to 50 then grade will be 'E'
else grade will be 'F'

*/

#include<stdio.h>

int main() {
    
    int Hindi, English, Maths, History, Physics;
    float percentage;
    char grade;
    
    //Ask user to enter the marks
    printf("Enter the marks for Hindi, English, Math, History, Physics in the Respective Order :\n ");
    scanf("%d%d%d%d%d", &Hindi, &English, &Maths, &History, &Physics);

    //Calculate the percentage
    percentage = (Hindi+English+Maths+History+Physics)/5;
    
    //use if-else if to assign the grade
    if( percentage >= 90)
        grade = 'A';
    else if( percentage >= 80)
        grade = 'B';
    else if( percentage >= 70)
        grade = 'C';
    else if( percentage >= 60)
        grade = 'D';
    else if( percentage >= 50)
        grade = 'E';
    else 
        grade = 'F';
    
    //print the grade
    printf("Grade : %c",grade);

    return 0;
}
/*OUTPUT-
Enter the marks for Hindi, English, Math, History, Physics in the Respective Order :
 98 93 95 87 84
Grade : A
--------------------------------
Process exited after 80.03 seconds with return value 0
Press any key to continue . . .*/