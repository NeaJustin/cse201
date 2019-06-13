#include <iostream>
#include <string>

using namespace std;

int main()
{
   string customer_city;
   double gal_last;
   double discount_rate = 1;

   cout << "Customer City: ";
   getline(cin, customer_city);

   cout << "Number of gallons of oil used last year: ";
   cin >> gal_last;

   if (customer_city == "Boston")
   { 
      if (gal_last >= 1000)
         discount_rate = .9;
      else
         discount_rate = 1;
   }
   else if (customer_city == "worcester")
   {
     if (gal_last >= 1500)
        discount_rate = .91;
     else
        discount_rate = 1;
   }
   else
   {
      if (gal_last >= 1500)
         discount_rate = .9;
      else
         discount_rate = 1;
   }
   cout << "Discount rate is: " << discount_rate << "\n";

   return 0;
}
