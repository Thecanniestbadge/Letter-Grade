// Programmer:   Thecanniestbadge
// Date:         06/07/2023
// Program Name: Letter Grade
// Chapter:      Decisions
// Description:  This program has the user enter an exam score and then the program determines what letter grade the exam gets based off of set ranges of each letter grade.
//               This program also has functions in it to validate the user input is acceptable.
//               The program takes the users input and runs it through an If statement that gives the exam score its letter grade.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
    // Constant Declarations
    // This area of the program uses constants.
    // The constants are assigned a variable that is set to a number that is used in the if statements to determine the correct letter grade.
    const int MIN_SCORE = 0;
    const int MAX_SCORE = 100;
    const int A_MIN_SCORE = 90;
    const int B_MIN_SCORE = 80;
    const int C_MIN_SCORE = 70;
    const int D_MIN_SCORE = 60;

    // Variable Declarations
    // The double is used so that the users input can be a deciaml number (double score)
    // The char statement is used so that the letter grade can be given
    double score;
    char grade;

    // *** INPUT ***
    // Asks the user to enter the exam score and it can be a interger or a double
    printf("Enter the exam score: ");
    scanf("%lf", &score);

    // *** IF STATEMENT ***
    // This if statement checks and see if the users input is a valid number within 0-100
    if (score < MIN_SCORE || score > MAX_SCORE)
    {
        printf("The exam score must be between %d and %d inclusive.\n", MIN_SCORE, MAX_SCORE);
        printf("\n"); // Blank line
        return 0;
    }

    // Determine the grade
    // These if statements determines the letter grade of the validated exam score 
    if (score >= A_MIN_SCORE)
    {
        grade = 'A';
    }
    else if (score >= B_MIN_SCORE)
    {
        grade = 'B';
    }
    else if (score >= C_MIN_SCORE)
    {
        grade = 'C';
    }
    else if (score >= D_MIN_SCORE)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    // *** OUTPUT *** 
    // This area outputs the users exam score and the assigned letter grade to the user 
    printf("An exam score of %.1f is a letter grade of %c.\n", score, grade);
    printf("\n"); // Blank line
    return 0;
} // end main()

