* Kristoffer Carlino
* C++ 310
* Dr. Robert Flowers
* M9 - Debugging of Classmate's Code

  In the original program, there were two syntax errors that prevented successful compilation. The first error occurred on line 93, where a missing semicolon followed the cout statement in main(). In C++, each statement must end with a semicolon, so I added one after endl to fix the issue. The second error was the missing semicolon after the return 0 statement. I corrected this to allow proper termination of the main() function. Additionally, I ensured all output statements used the correct syntax and proper line breaks. After fixing these issues, the program compiled successfully and demonstrated inheritance correctly. The Account class now serves as a functional base class, while CheckingAccount and SavingsAccount both override the checkBalance() method to display customized outputs. These changes allowed the program to compile, execute, and display formatted balances for both account types without errors.
