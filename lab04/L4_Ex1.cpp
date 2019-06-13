/* 
   CSE201-W17 Thursday lab
   @file L4_Ex1.cpp
   @Justin Pulido
   @February 23, 2017

   Description: The program is able to calculate how much the person
                the persons investment will raise depending on how many
                times it is being raised during a given year. As well as
                taking into account for the compounds per year.
 
   Algorithm: The probelm is solved by using the function that will be 
              able to create the given result. That function is 
              initial_balance * pow(1+(p/100)/ npayments, n * npayments)
              the formula is getting the initial balance of the investment
              and getting the percentage of which it goes up and dividing it
              by the npayments. Then it multiplies the years(n) to 
              npayments(compounded).
              b = 2000 * pow(1+(11/100)/12, 15 * 12)
*/

#include <iostream>
#include <cmath>

using namespace std;

/*
    creating the function to be able to show the how much the total 
   investment the person made has grown.
   @initial_balance is the initial balance that the person has 
   invested.
   @p is the percentage of the growth 
   @n is the number of years that have need to pass
   @npayments is the amount of years compounds per year
*/ 
double future_value(double initial_balance, double p, int n, double npayments){

   double b = initial_balance * pow(1 + (p / 100) / npayments, n * npayments);
   return b;
}

int main(){

   //declairing my variables in the scope
   double initial_balance;
   double p;
   double n;
   double npayments;

   cout << "Please enter the initial balance of the investment: ";
   cin >> initial_balance;
 
   cout << "Please enter the interest rate in percent: ";
   cin >> p;
  
   cout << "Please enter the number of years: ";
   cin >> n;
   
   cout << "Please enter compound payments: ";
   cin >> npayments;

   double balance = future_value(initial_balance, p, n, npayments);

   cout << "The initial balance was: $" << initial_balance << " after " 
        << n << " years at " << p << " percent, the balance is now: $"
        << balance << endl << endl;
return 0;
}
