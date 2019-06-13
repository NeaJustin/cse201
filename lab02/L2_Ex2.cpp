/*
   CSE201-W17 thursday lab
   @file L2_Ex2.cpp
   @justin pulido
   @feburary 2, 2017
   
   DESCRIPTION: This program prompts the user for 3 double precision
   floating values num1, num2, num3, and computes and displays the 
   following values.
        the sum of num1, num2 and num3
        the average of num1, num2 and num3
        the log2 of num1

   ALGORITHM: 
   Get three double precision floating point numbers
      Prompt
      get three numbers
   Compute and print
        Sum of the three numbers 
        Average of the three numbers 
        log2 of the first number
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   // creating variables 
   double sum = 0;
   double num1;
   double num2;
   double num3;
   double total = 0;
   double average = 0;
   
   // getting values for 1, 2 and 3
   cout << "please enter a value: "; 
   cin >> num1;

   cout << "please enter another value: ";
   cin >> num2;
   
   cout << "please enter last value: ";
   cin >> num3;

   sum = num1 + num2 + num3;
   cout << "the sum of " << num1 << " " << num2 << " " 
        << num3 << " is: " << sum << ".\n"; // showing sum of 1, 2 and 3
   
   // getting the average of the three numbers 
   average = sum / 3;
   cout << "the average of " << sum << " is: "
         << average << ".\n";
   
   // getting log2 of the first number
   cout << "the log2 of " << num1 << " is: " << log2(num1) << ".\n";

return 0;
}
