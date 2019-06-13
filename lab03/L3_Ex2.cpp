/* 
   CSE201-W17 Thursday lab
   @file L3_Ex1.cpp
   @Justin Pulido
   @February 5, 2017

   Description: calculates how much people will be given a discount for
                when they use a certain amount of killowats per hour.

   Algorithm: Uses a set amount of variables for kwh, and it shows the electic bill
	      for people who use a certain amount of it. 
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   // declaring const variables
   double const NINE_KWH = 0.60;
   double const FOURTEEN_KWH = 0.45;
   double const NINTEEN_KWH = 0.40;
   double const TWO_THOUSAND_KWH = 0.35; 
   double Killowats;
   double total = 0;

   //displaying what the user needs to enter
   cout << "Plese enter the amount of Killowats you used this month: ";
   cin >> Killowats;

   // If else statements
   // Shows what to do if electricity is a certain amount
   // if the killowatts is less than or equal to 999
   // different charge amount and different rate
   if (Killowats <= 999)
   {	
    total = Killowats * NINE_KWH;
    total += Killowats;
    cout << "Your electric bill is: $" << total << endl;
   } 
   //if killowatts is less than or equal too 1499
   // different charge rate and displays bill
   else if (Killowats <= 1499) {
    total = Killowats * FOURTEEN_KWH;
    total += Killowats;
    cout << "Your electric bill is: $" << total << endl;
   }
   // if killowatts is less than or equal too 1999
   // different charge rate
   else if (Killowats <= 1999) {
    total = Killowats * NINTEEN_KWH;
    total += Killowats;
    cout << "Your electric bill is: $" << total << endl;
   }
   // if the killowatts is over 2000 different charge rate
   else if (Killowats >= 2000) {
    total = Killowats * TWO_THOUSAND_KWH;
    total += Killowats;
    cout << "Your electric bill is: $" << total << endl;
   }
return 0;
}
