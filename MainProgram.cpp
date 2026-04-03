// ============================================================================
//  LAB: Loops in C++ (while, for, do-while)
//  Course: CMP1001 - Introduction to Programming (C++)
//  Duration: 60 minutes
//
//  Description:
//    In this lab you will practice the three loop structures in C++:
//    while, for, and do-while. You will start with simple counting
//    and progress to real-world problems that require iteration.
//
//  Instructions:
//    1. Read each section carefully before writing code.
//    2. Look for "// TODO:" markers — that is where you write your code.
//    3. Compile often! Fix errors as you go.
//    4. Test each exercise before moving to the next one.
//    5. The Challenge section is optional but recommended.
//
//  How to compile:
//    g++ MainProgram.cpp -o lab
//    ./lab
// ============================================================================

#include <iostream>
using namespace std;

int main() {

    // ========================================================================
    //  SECTION 1 — WARM-UP (5-10 minutes)
    //  Goal: Recall basic I/O and variables before we dive into loops.
    // ========================================================================

    cout << "===== SECTION 1: WARM-UP =====" << endl;

    // Exercise 1.1
    // Ask the user for their name and greet them.
    // Example output: "Hello, Ali! Welcome to the Loops Lab."

    // TODO: Declare a string variable for the name
    // TODO: Prompt the user and read the name with cin
    // TODO: Print the greeting
    string name;
    cout << "enter name" << endl;
    cin >> name;
    cout << "Hello " << name;
    cout << endl;

    // Exercise 1.2
    // Ask the user for two integers and print their sum and product.
    // Example: If user enters 4 and 7, print:
    //   Sum: 11
    //   Product: 28

    // TODO: Declare two int variables
    // TODO: Prompt and read both integers
    // TODO: Print the sum and product
    int x, y;
    cout << "Enter 2 integers" << endl;
    cin >> x >> y;
    cout << x + y;
    cout << endl;

    // ========================================================================
    //  SECTION 2 — CORE CONCEPTS (10-15 minutes)
    //  Goal: Understand the syntax of while, for, and do-while.
    // ========================================================================

    cout << "===== SECTION 2: CORE CONCEPTS =====" << endl;

    // --- 2A: The WHILE loop ---
    // Syntax:
    //   while (condition) {
    //       // body — runs as long as condition is true
    //   }
    //
    // Example: Print numbers 1 to 5
    //   int i = 1;
    //   while (i <= 5) {
    //       cout << i << " ";
    //       i++;
    //   }

    // Exercise 2.1
    // Using a WHILE loop, print all EVEN numbers from 2 to 20.
    // Expected output: 2 4 6 8 10 12 14 16 18 20

    cout << "Even numbers (while): ";
    // TODO: Write a while loop that prints even numbers from 2 to 20
    int i = 2;
    while(i < 21){
        cout << i++ << " ";
        i++;
    }
    cout << endl;

    // --- 2B: The FOR loop ---
    // Syntax:
    //   for (initialization; condition; update) {
    //       // body
    //   }
    //
    // Example: Print numbers 1 to 5
    //   for (int i = 1; i <= 5; i++) {
    //       cout << i << " ";
    //   }

    // Exercise 2.2
    // Using a FOR loop, print all ODD numbers from 1 to 15.
    // Expected output: 1 3 5 7 9 11 13 15

    cout << "Odd numbers (for): ";
    // TODO: Write a for loop that prints odd numbers from 1 to 15
    for(i = 1; i < 16; i++){
        cout << i++ << " ";
    }
    cout << endl;
    cout << endl;

    // --- 2C: The DO-WHILE loop ---
    // Syntax:
    //   do {
    //       // body — always runs at least once
    //   } while (condition);
    //
    // Key difference: The body executes BEFORE the condition is checked.
    //
    // Example: Ask user for a positive number (keep asking until valid)
    //   int num;
    //   do {
    //       cout << "Enter a positive number: ";
    //       cin >> num;
    //   } while (num <= 0);

    // Exercise 2.3
    // Using a DO-WHILE loop, ask the user to enter a number between
    // 1 and 10 (inclusive). Keep asking until they enter a valid number.
    // Then print: "You entered: X"

    // TODO: Declare an int variable
    // TODO: Write a do-while loop that validates input (1-10)
    // TODO: Print the valid number
    do {
        cout << "Enter number between 1-10" << endl;
        cin >> i;
        cout << "You entered: " << i << endl;
    } while (i < 1 || i > 10);
    cout << endl;

    // ========================================================================
    //  SECTION 3 — GUIDED EXERCISES (25-30 minutes)
    //  Goal: Solve problems using loops with increasing difficulty.
    // ========================================================================

    cout << "===== SECTION 3: GUIDED EXERCISES =====" << endl;

    // Exercise 3.1 — Countdown Timer
    // Ask the user for a starting number (e.g., 10).
    // Print a countdown from that number to 1, then print "Liftoff!"
    // Example for input 5:
    //   5... 4... 3... 2... 1... Liftoff!

    cout << "-- Exercise 3.1: Countdown --" << endl;
    // TODO: Ask user for a starting number
    // TODO: Use a loop to count down to 1, printing each number followed by "... "
    // TODO: After the loop, print "Liftoff!"
    cout << "Enter start number" << endl;
    cin >> x;
    for(i = x; i > 0; i--){
        cout << i << "... ";
    }
    cout << "Liftoff!";
    cout << endl;

    // Exercise 3.2 — Sum Calculator
    // Ask the user how many numbers they want to add.
    // Then read that many numbers one by one and print the total sum.
    // Example:
    //   How many numbers? 3
    //   Enter number 1: 10
    //   Enter number 2: 20
    //   Enter number 3: 5
    //   Total sum: 35

    cout << "-- Exercise 3.2: Sum Calculator --" << endl;
    // TODO: Ask how many numbers
    // TODO: Use a for loop to read each number and accumulate the sum
    // TODO: Print the total sum
    int coutn, num, sum;
    cout << "How many numbers?" << endl;
    cin >> coutn;
    sum = 0;
    for(i = 1; i <= coutn; i++){
        cout << "Enter number " << i << ":" << endl;
        cin >> num;
        sum = sum + num;
    }
    cout << "Total sum: " << sum;
    cout << endl;

    // Exercise 3.3 — Multiplication Table
    // Ask the user for a number N.
    // Print the multiplication table for N from 1 to 10.
    // Example for N = 7:
    //   7 x 1 = 7
    //   7 x 2 = 14
    //   ...
    //   7 x 10 = 70

    cout << "-- Exercise 3.3: Multiplication Table --" << endl;
    // TODO: Ask for N
    // TODO: Use a for loop from 1 to 10
    // TODO: Print each line: N x i = N*i
    int N;
    cout << "Enter N:" << endl;
    cin >> N;
    for(i = 1; i < 11; i++){
        cout << N << " x " << i << " = " << N * i << endl;
    }
    cout << endl;

    // Exercise 3.4 — Factorial Calculator
    // Ask the user for a non-negative integer N.
    // Calculate N! (N factorial) using a loop.
    // Reminder: 0! = 1, 5! = 5 * 4 * 3 * 2 * 1 = 120
    //
    // Print: "N! = result"

    cout << "-- Exercise 3.4: Factorial --" << endl;
    // TODO: Ask for N (non-negative integer)
    // TODO: Use a loop to calculate the factorial
    //       Hint: start with result = 1, multiply by each number from 1 to N
    // TODO: Print the result
    cout << "Enter non-negative N:" << endl;
    cin >> N;
    sum = 1;
    for(i = N; i > 0; i--){
        sum *= i;
    }
    cout << N << "!" << " = " << sum << endl;
    cout << endl;

    // Exercise 3.5 — Number Guessing (Sentinel Loop)
    // Generate a "secret" number (just hardcode it, e.g., 42).
    // Let the user guess until they get it right.
    // After each wrong guess, tell them "Too high!" or "Too low!"
    // When correct, print "Correct! You guessed it in X tries."
    //
    // Use a while or do-while loop.

    cout << "-- Exercise 3.5: Number Guessing --" << endl;
    int secret = 42;
    // TODO: Declare variables for the guess and a try counter
    // TODO: Loop until the guess equals the secret
    //       - Read the user's guess
    //       - Increment the counter
    //       - Print "Too high!" or "Too low!" if wrong
    // TODO: Print "Correct! You guessed it in X tries."
    N = 0;
    x = 0;
    do {
        cout << "Enter guess: " << endl;
        cin >> N;
        x++;
        if(N > secret){
            cout << "Too high!" << endl;
        } else {
            cout << "Too low!" << endl;
        }
    }while(N != secret);
    cout << "Correct! You guessed it in " << x << " tries.";
    cout << endl;

    // Exercise 3.6 — Pattern Printer (Nested Loops)
    // Ask the user for a number of rows N.
    // Print a right triangle of stars:
    //
    // Example for N = 5:
    // *
    // **
    // ***
    // ****
    // *****
    //
    // Hint: You need a loop inside a loop (nested for loops).

    cout << "-- Exercise 3.6: Star Pattern --" << endl;
    // TODO: Ask for the number of rows
    // TODO: Outer loop for each row (1 to N)
    //       TODO: Inner loop to print the correct number of '*' characters
    //       TODO: Print a newline after each row
    cout << "Enter number rows: " << endl;
    cin >> N;
    for(i = 0; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // ========================================================================
    //  SECTION 4 — CHALLENGE (10 minutes)
    //  Goal: Apply your loop skills to harder, more open-ended problems.
    // ========================================================================

    cout << "===== SECTION 4: CHALLENGE =====" << endl;

    // Challenge 4.1 — Digit Counter
    // Ask the user for a positive integer.
    // Count how many digits it has WITHOUT converting to a string.
    // Hint: Repeatedly divide by 10 until you reach 0.
    //
    // Example: 48153 → 5 digits
    //          7     → 1 digit

    cout << "-- Challenge 4.1: Digit Counter --" << endl;
    // TODO: Ask for a positive integer
    // TODO: Use a while loop to count digits
    // TODO: Print the digit count
    cout << "Enter positive integer" << endl;
    cin >> N;
    x = 0;
    while(N > 0){
        N /= 10;
        x++;
    }
    cout << x << " digits";
    cout << endl;

    // Challenge 4.2 — Simple Menu System
    // Create a menu-driven mini-program using a do-while loop:
    //
    //   === MINI CALCULATOR ===
    //   1. Add two numbers
    //   2. Multiply two numbers
    //   3. Check if a number is even or odd
    //   0. Exit
    //   Choice:
    //
    // The program should:
    //   - Display the menu
    //   - Read the user's choice
    //   - Perform the selected operation (ask for input as needed)
    //   - Repeat until the user chooses 0
    //
    // This is a common real-world pattern for console applications.

    cout << "-- Challenge 4.2: Mini Calculator --" << endl;
    // TODO: Declare a variable for the menu choice
    // TODO: Write a do-while loop that:
    //       - Prints the menu
    //       - Reads the choice
    //       - Uses if/else or switch to handle each option
    //       - Loops back unless choice == 0
    // TODO: Print "Goodbye!" when exiting
    int menu;
    x = 0;
    y = 0;
    do{
        cout << "1. Add two numbers" << endl;
        cout << "2. Multiply two numbers" << endl;
        cout << "3. Check if a number is even or odd" << endl;
        cout << "0. Exit" << endl;
        cin >> menu;
        if(menu == 1){
            cout << "Enter 2 integers" << endl;
            cin >> x >> y;
            cout << "Sum: " << x + y << endl;
        } else if(menu == 2){
            cout << "Enter 2 integers" << endl;
            cin >> x >> y;
            cout << "Sum: " << x * y << endl;;
        } else if(menu == 3){
            cout << "Enter 1 number" << endl;
            cin >> x;
            if(x % 2 == 0){
                cout << "even" << endl;
            } else{
                cout << "odd" << endl;
            }
        }

    } while (menu != 0);
    cout << "Goodbye!";
    cout << endl;

    // ========================================================================
    cout << "===== LAB COMPLETE =====" << endl;
    cout << "Great job! Don't forget to save and submit your work." << endl;
    // ========================================================================

    return 0;
}
