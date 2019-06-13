/* 
   CSE201-W17 Thursday lab
   @file L3_Ex1.cpp
   @Justin Pulido
   @February 5, 2017

   Description: calculates how much people will be given a discount for
                when they use a certain amount of killowats per hour.

   Algorithm: The problem is solved by using an if and else statement
	      and having the user enter the amount of killowatts used.
              Also having H = 900 = $.60, kwh = 1754 = $.45,
              and kwh = 10000 = $.45 tax increase.
   	      Total += User_input * Kwh_rate;
              Total += User_input;
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   //declaring variables
   double const HOURLY_KWH = .60;
   double const THOUSAND_KWH = .45;
   double Killowatts;
   double total = 0;

   //stating what the person should enter
   //for number of killowatts used
   cout << "Please enter the ammount of killowatts you used this month: ";
   cin >> Killowatts;

   //if else statements to determine how much to charge
   //if the electricity is less then or equal too 900
   if (Killowatts <= 900)
   {
      total = Killowatts * HOURLY_KWH;
      total += Killowatts;
      cout << "Your total electricity bill is: $" << total << endl;
   }
   //checking to see if killowatts used is over 1000 or equal to it
   // if it is the rate is changed and the charged amount is different
   else if (Killowatts >= 1000)
   {
      total = Killowatts * THOUSAND_KWH;
      total += Killowatts;
      cout << "Your total electricity bill is: $" << total << endl;
   }

return 0;
} 
