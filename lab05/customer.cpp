/*





*/

#include <iostream>
#include <string>
#include "class.h"

using namespace std;

/*
   creates the customer class for the .h file and creates
   gets the zipcode, address, city, state, and name of the person
   making the purchas.
*/

customer::customer(string jname, string jaddress, string jcity, jstate,
 string jzipcode, double jrlimit){

	addsales = 0;
	name = jname;
	city = jcity;
	state = jstate;
	zipcode = jzipcode;
	credit_limit = jrlimit;
}

/* 
   gets customers name and and returns it to the variable.
   @return name;
*/
string customer::get_name() const{
   return name;
}
/* 
   gets customers address and returns it to the variable.
   @return address;
*/
string customer::get_address() const{
   return address;
}
/* 
   gets customers city and returns it to the variable up top.
   @return city;
*/
string customer::get_city() const{
   return city;
}
/*
   gets customer state and returns it to the variable up top.
   @returns state;
*/
string customer::get_state() const{
   return state;
}
/*
   gets customers zipcode and returns it to the value up top.
   @return zipcode;
*/
string customer::get_zipcode() const{
   return zipcode;
}
// increases the limit the user is able to spend
void customer::increase_limit(double amount){
   credit_limit += amount;
   available_credit += amount;
}
//gets credit limit from the user and returns it to the variable
double customer::get_credit_limit() const{
   return credit_limit;
}
//whenever the customer tries to make a purchase and the purchase is over the limit
//the user cannot make the the transaction and it will not process.
void customer::attempted_purchase(double amount){
   if(amount > credit_limit()){
	cout << "The amount of: $" << credit_limit << " is too much for the amount of credit you have."
	<< endl;
   }else{
          cout << "the item amount of: $" << amount << "was purchased successfully." << endl;
          addsales++;
          credit_limit -= amount;
          cout << "Your credit limit is now: $" << credit_limit() << endl << endl;
   }
}
// gets customers amount of purchases that they made. 


