/* 
   CSE201-W17 Thursday Lab
     @L4_Ex2.cpp
     @Justin Pulido
     @February 23, 2017

   Description: The program uses a function to be able to see 
                where the customer is purchasing gas from,
                how many gallons they are buying, and how much
                the discount rate will be depending on where
                they are at.
 
   Algorithm: The program uses the if else to figure out where
              the user is at, and it will run down the code
              to figure out where they are buying gas from,
              and how much of a discount they get.
              uses the formula 
  (gal_bought *price_per_gallon * get_discount(customer_city, gal_last))

*/
              
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


/*
    parameters taken are:
    @gal_last gallons bought last year
    @customer_city gets city name of customer
    
    if the city is worcestor and gallons used
    last year is over equal 1200 then the discount
    rate is .91 and if it is not greater than or
    equal too 1200 then the discount rate is 1.

    Worcester, gal_last = 1300, gal_bought: 20,
    price per gallon = 3.09,
    (20 * 3.09)*(get_discount(customer_city, gal_bought)
    = $55.62
*/
double get_discount(string customer_city, double gal_last){

   double discount_rate;
   if (customer_city == "Boston"){
      if (gal_last >= 1000){
          discount_rate = .9;
      }else
          discount_rate = 1;
   }
   else if (customer_city == "Worcester"){
      if (gal_last >= 1200){
         discount_rate = .91;
      }else
         discount_rate = 1;
   }
   else if(customer_city == "Los Angeles"){
      if (gal_last >= 1600){
         discount_rate = .65;
      }else
         discount_rate = .1;
   }
   else if(customer_city == "Corona"){
      if (gal_last >= 1000){
         discount_rate = .20;
      }else 
         discount_rate = .10;
   }
   else if(customer_city == "Riverside"){
      if (gal_last >= 200){
         discount_rate = .40;
      }else
         discount_rate = .1;
   }
   else if(customer_city == "Boston"){
     if (gal_last >= 100){
        discount_rate = .65;
      }else
        discount_rate = .1;
   }
   else if(customer_city == "Oakland"){
      if (gal_last >= 1400){
        discount_rate = .85;
      }else 
         discount_rate = .1;
   }
   else if(customer_city == "Sacramento"){
      if (gal_last >= 1000){
         discount_rate = .45;
      }else
         discount_rate = .1;
   }
   else if(customer_city == "Irvine"){
      if (gal_last >= 1500){
         discount_rate = .50;
      }else
         discount_rate = .1;
   }
   else if(customer_city == "Pasadena"){
      if (gal_last >= 1400){
         discount_rate = .40;
      }else 
         discount_rate = .60;
   }
   else if(customer_city == "Fresno"){
      if (gal_last >= 1500){
         discount_rate = .80;
      }else
         discount_rate = .1;
   }
   else   
      if (gal_last >= 1500){
         discount_rate = .9;
      }else
         discount_rate = 1;
 
   return discount_rate;
}

int main(){  
   //declaring the variables
   string customer_city;
   double price_per_gallon = 1;
   double gal_bought = 1;
   double gal_last = 1;

   //getting customer city
   cout << "Customer City: ";
   getline(cin, customer_city);

   //getting gallons of last year
   cout << "Please enter gallons purchased last year: ";
   cin >> gal_last;

   cout << "Please enter the number of gallons being bought: ";
   cin >> gal_bought;

   cout << "Please enter price per gallon: ";
   cin >> price_per_gallon;

   cout << "The total payment is: $" << (gal_bought * 
           price_per_gallon) * (get_discount(customer_city, gal_last))
           << endl << endl;
return 0;
}
