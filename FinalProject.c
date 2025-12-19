/*
  Final Project - Menu-Driven Program
  Student: Ivan Jake Beldad
  Date: December 19, 2025
  Description: This program combines all midterm and semi-final activities
               into a single menu-driven application. 
 */

#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
void activity1_printf_strings();
void activity2_arithmetic_operations();
void midterm_checkup_part2();
void midterm_exam_part2();
void semifinal_lab3_implicit_conversion();
void semifinal_lab4_explicit_conversion();
void semifinal_lab5c_ternary_operator();
void semifinal_lab5b_switch_case();
void semifinal_lab5a_if_statements();
void semifinal_lab6_for_loop();
void semifinal_lab7_step_tracker();
void semifinal_exam_part2_coding();
void displayMenu();

int main() {
    int choice;
    
    // Menu array for display
    char *menuOptions[] = {
        "1.   Midterm Activity No. 1 - Using printf() to print strings and comments",
        "2.  Midterm Activity No. 2 - Arithmetic Operations (Input)",
        "3.  Midterm Checkup Exam - Part 2 - Coding",
        "4.  Midterm Examination - Coding (Part 2)",
        "5.  Semi-Finals Lab.Act.#03 - Implicit Type Conversion",
        "6.  Semi-Finals Lab.Act.#04 - Explicit Type Conversion",
        "7.  Semi-Finals Lab.Act.#05c - Ternary operator",
        "8.  Semi-Finals Lab.Act.#05b - Switch-case statement",
        "9.  Semi-Finals Lab. Act.#05a - IF Statements",
        "10. Semi-Finals Lab.Act.#06 - For loop",
        "11. Semi-Finals Lab.Act.#07 - Step Tracker Program (While and Do-While Loop)",
        "12. Semi-Final Examination Part 2 - Coding on Conditional Statements and Loops",
        "0.  Exit"
    };
    
    int numOptions = 13; // Total number of menu options including Exit
    
    // Main program loop - continues until user chooses to exit
    do {
        // Display the menu
        printf("\n");
        printf("========================================================\n");
        printf("        FINAL PROJECT - MENU-DRIVEN PROGRAM\n");
        printf("                   Student: owezing\n");
        printf("========================================================\n");
        
        // Loop through menu array to display all options
        for (int i = 0; i < numOptions; i++) {
            printf("%s\n", menuOptions[i]);
        }
        
        printf("========================================================\n");
        printf("Enter your choice:  ");
        scanf("%d", &choice);
        
        // Clear input buffer
        while (getchar() != '\n');
        
        printf("\n");
        
        // Switch-case to call the appropriate function based on user choice
        switch (choice) {
            case 1:
                activity1_printf_strings();
                break;
            case 2:
                activity2_arithmetic_operations();
                break;
            case 3:
                midterm_checkup_part2();
                break;
            case 4:
                midterm_exam_part2();
                break;
            case 5:
                semifinal_lab3_implicit_conversion();
                break;
            case 6:
                semifinal_lab4_explicit_conversion();
                break;
            case 7:
                semifinal_lab5c_ternary_operator();
                break;
            case 8:
                semifinal_lab5b_switch_case();
                break;
            case 9:
                semifinal_lab5a_if_statements();
                break;
            case 10:
                semifinal_lab6_for_loop();
                break;
            case 11:
                semifinal_lab7_step_tracker();
                break;
            case 12:
                semifinal_exam_part2_coding();
                break;
            case 0:
                printf("Thank you for using the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice!  Please select a valid option (0-12).\n");
        }
        
        // Pause before showing menu again (except when exiting)
        if (choice != 0) {
            printf("\nPress Enter to continue...");
            getchar();
        }
        
    } while (choice != 0); // Loop continues until user selects Exit (0)
    
    return 0;
}

// ============================================================
// FUNCTION IMPLEMENTATIONS
// ============================================================

/*
 * Activity 1: Using printf() to print strings and comments
 * TODO: Copy your code from Activity 1 here
 */
void activity1_printf_strings() {
    printf("===== Midterm Activity No. 1 =====\n");
    printf("Using printf() to print strings and comments\n\n");
    
    /* Print your full name*/
    printf("Full Name: Ivan Jake Beldad\n");

    /* Print your favorite quote*/
    printf("Favorite Quote: \"Trust the timing of your life.\"\n");

    /* Print a short message about why learning C is important*/
    printf("Why C is important to me: Learning C helps me understand how computers really work. It's the foundation of many modern languages and gives me control over memory and performance.\n");
	
    /* Print creative ASCII art*/
	printf("\n");
	printf("       ^\n");
	printf("      / \\\n");
	printf("     /___\\\n");
	printf("    |=   =|\n");
	printf("    |     |\n");
	printf("    |     |\n");
	printf("    |     |\n");
	printf("   /|##!##|\\\n");
	printf("  / |##!##| \\\n");
	printf(" /  |##!##|  \\\n");
	printf("|  / ^ | ^ \\  |\n");
	printf("| /  ( | )  \\ |\n");
	printf("|/   ( | )   \\|\n");
	printf("    ((   ))\n");
	printf("   ((  :  ))\n");
	printf("   ((  :  ))\n");
	printf("    ((   ))\n");
	printf("     (( ))\n");
	printf("      ( )\n");
	printf("       .\n");
	printf("       .\n");
	printf("       .\n");
	printf("   ASCII Rocket\n");
    

    
    printf("\n=== End of Activity 1 ===\n");
}


void activity2_arithmetic_operations() {
    printf("===== Midterm Activity No. 2 =====\n");
    printf("Arithmetic Operations (Input)\n\n");
    
     /* Declare variables to store user input*/
    int num1, num2;

    /* Prompt user for input*/
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    /* Perform arithmetic operations and display results*/
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    /* Check for division by zero*/
    if (num2 != 0) {
        printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
        printf("Modulo: (int)%d %% (int)%d = %d\n", num1, num2, (int)num1 % (int)num2);
    } else {
        printf("Division and modulo by zero are undefined.\n");
    }
    
    printf("\n=== End of Activity 2 ===\n");
}

/*
 * Midterm Checkup Exam - Part 2 - Coding
 * TODO: Copy your code from Midterm Checkup here
 */
void midterm_checkup_part2() {
    printf("===== Midterm Checkup Exam - Part 2 =====\n");
    printf("Coding\n\n");
    

    // Variable declarations
    // Using unsigned int since scores cannot be negative
    unsigned int quizScore, midtermScore, finalExamScore;   // Stores raw scores
    float finalGrade;   // Stores computed weighted average (may include decimals)

    printf("=== Student Grade Calculator ===\n");

    // Input section: Prompt user for scores
    printf("Enter quiz score: ");
    scanf("%u", &quizScore);

    printf("Enter midterm score: ");
    scanf("%u", &midtermScore);

    printf("Enter final exam score: ");
    scanf("%u", &finalExamScore);

    // Computation: Apply weighted formula
    finalGrade = (quizScore * 0.20f) + (midtermScore * 0.30f) + (finalExamScore * 0.50f);

    // Output section: Display results
    printf("\nFinal Grade = %.2f\n", finalGrade);   // Show grade with 2 decimal places
    printf("Total grades computed: %d\n", COMPONENTS);   // Show number of components

    return 0;
} 

/*
 * Midterm Examination - Coding (Part 2)
 * TODO: Copy your code from Midterm Exam here
 */
void midterm_exam_part2() {
    printf("===== Midterm Examination - Part 2 =====\n");
    printf("Coding\n\n");
    
    // TODO: Paste your Midterm Exam code here
    
    printf("\n=== End of Midterm Exam ===\n");
}

/*
 * Semi-Finals Lab Activity #03 - Implicit Type Conversion
 * TODO: Copy your code from Lab 3 here
 */
void semifinal_lab3_implicit_conversion() {
    printf("===== Semi-Finals Lab. Act.#03 =====\n");
    printf("Implicit Type Conversion\n\n");
    
    // TODO: Paste your Lab 3 code here
    
    printf("\n=== End of Lab 3 ===\n");
}

/*
 * Semi-Finals Lab Activity #04 - Explicit Type Conversion
 * TODO: Copy your code from Lab 4 here
 */
void semifinal_lab4_explicit_conversion() {
    printf("===== Semi-Finals Lab.Act. #04 =====\n");
    printf("Explicit Type Conversion\n\n");
    
    // TODO: Paste your Lab 4 code here
    
    printf("\n=== End of Lab 4 ===\n");
}

/*
 * Semi-Finals Lab Activity #05c - Ternary operator
 * TODO: Copy your code from Lab 5c here
 */
void semifinal_lab5c_ternary_operator() {
    printf("===== Semi-Finals Lab.Act.#05c =====\n");
    printf("Ternary operator\n\n");
    
    // TODO: Paste your Lab 5c code here
    
    printf("\n=== End of Lab 5c ===\n");
}

/*
 * Semi-Finals Lab Activity #05b - Switch-case statement
 * TODO:  Copy your code from Lab 5b here
 */
void semifinal_lab5b_switch_case() {
    printf("===== Semi-Finals Lab.Act.#05b =====\n");
    printf("Switch-case statement\n\n");
    
    // TODO: Paste your Lab 5b code here
    
    printf("\n=== End of Lab 5b ===\n");
}

/*
 * Semi-Finals Lab Activity #05a - IF Statements
 * TODO:  Copy your code from Lab 5a here
 */
void semifinal_lab5a_if_statements() {
    printf("===== Semi-Finals Lab.Act.#05a =====\n");
    printf("IF Statements\n\n");
    
    // TODO: Paste your Lab 5a code here
    
    printf("\n=== End of Lab 5a ===\n");
}

/*
 * Semi-Finals Lab Activity #06 - For loop
 * TODO: Copy your code from Lab 6 here
 */
void semifinal_lab6_for_loop() {
    printf("===== Semi-Finals Lab.Act.#06 =====\n");
    printf("For loop\n\n");
    
    // TODO: Paste your Lab 6 code here
    
    printf("\n=== End of Lab 6 ===\n");
}

/*
 * Semi-Finals Lab Activity #07 - Step Tracker Program (While and Do-While Loop)
 * TODO: Copy your code from Lab 7 here
 */
void semifinal_lab7_step_tracker() {
    printf("===== Semi-Finals Lab. Act.#07 =====\n");
    printf("Step Tracker Program (While and Do-While Loop)\n\n");
    
    // TODO: Paste your Lab 7 code here
    
    printf("\n=== End of Lab 7 ===\n");
}

/*
 * Semi-Final Examination Part 2 - Coding on Conditional Statements and Loops
 * TODO: Copy your code from Semi-Final Exam here
 */
void semifinal_exam_part2_coding() {
    printf("===== Semi-Final Examination Part 2 =====\n");
    printf("Coding on Conditional Statements and Loops\n\n");
    
    // TODO: Paste your Semi-Final Exam code here
    
    printf("\n=== End of Semi-Final Exam ===\n");
}

