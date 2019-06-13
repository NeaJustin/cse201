/* 
   CSE201-W17 Thursday Lab
     @L5_Ex1.cpp
     @Justin Pulido
     @March 12, 2017

   Description: The program allows the user to be able to purchase items
		within the limits of their credit card. 

   Algorithm: the program is able to execute the procedures using a class.
     The class allows the variable to be put into a private,
     so that the user will get the correct output without having
     faulty errors. The class will be customer and will have parameters
     to cover what the user needs to have inside of it. Their name, 
     address zipcode, state, and credit limit. this allows the program to be 
     accurate and will make it more clear. It grabs the functions 
     through the class and returns it to the user to show 
     everything about them and if the purchase is being processed 
     correctly. However, if the user does not have enough credit,
     it will cause the purchase to not go through. The user is then 
     able to input a new credit limit which will allow them to make
     certain purchases. After it will keep track of the 
     users purchases and deduct the amount of money on their credit 
     and show them how much credit they have left. 
     Everything then is printed onto the screen and shown 
     directly to the user. 
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class customer{
   public:
 
      customer(string name, string address, string city, 
               string zipcode, string state, double credit_limit);
      void increase_limit(double amount);
      string get_name() const;
      string get_address() const;
      string get_city() const;
      string get_state() const;
      string get_zipcode() const;
      double get_credit_limit() const;
      double get_available_credit() const;
      void set_available_credit_limit();
      void print_customer_info();
      void attempt_purchase(double amount);
      int get_purchase() const;
   private:
	string address;
	string name;
	string city;
	string state;
	string zipcode;
	double credit_limit;
	int addsales;
	int available_credit;      
};

/*
   creates the customer class for the .h file and creates
   gets the zipcode, address, city, state, and name of the person
   making the purchas.
*/

customer::customer(string jname, string jaddress, string jcity, string jstate,
 string jzipcode, double jrlimit){

	addsales = 0;
	name = jname;
        address = jaddress;
	city = jcity;
	state = jstate;
	zipcode = jzipcode;
	credit_limit = jrlimit;
}


/* 
   gets customers name and and returns it to the variable.
   @return name;
*/
string customer::get_name() const
{
   return name;
}

/* 
   gets customers address and returns it to the variable.
   @return address;
*/
string customer::get_address() const
{
   return address;
}

/* 
   gets customers city and returns it to the variable up top.
   @return city;
*/
string customer::get_city() const
{
   return city;
}

/*
   gets customer state and returns it to the variable up top.
   @returns state;
*/
string customer::get_state() const
{
   return state;
}

/*
   gets customers zipcode and returns it to the value up top.
   @return zipcode;
*/
string customer::get_zipcode() const
{
   return zipcode;
}

// increases the limit the user is able to spend
void customer::increase_limit(double amount)
{
   credit_limit += amount;
   available_credit += amount;
}

//gets credit limit from the user and returns it to the variable
double customer::get_credit_limit() const
{
   return credit_limit;
}

//whenever the customer tries to make a purchase and the purchase is over the limit
//the user cannot make the the transaction and it will not process.
void customer::attempt_purchase(double amount)
{
   if(amount > get_available_credit())
   {
	cout << "The amount of: $" << get_available_credit() << "the item purchased is too much for the amount of credit you have."<< endl;
   }
   else
   {
          cout << "the item amount of: $" << amount << " was purchased successfully." << endl;
          addsales++;
          available_credit -= amount;
          cout << "Your credit limit is now: $" << get_available_credit()<< endl << endl;
   }
}

//get customers amount of purchases made
//return addsales;
int customer::get_purchase() const
{
	return addsales;
}

//get customers available credit and returns it to the parameter
double customer::get_available_credit() const
{
	return available_credit;
}

//set customers available credit equal to the credit limit
void customer::set_available_credit_limit()
{
	available_credit = credit_limit;
}

//print customer information entered in the beginning.
void customer::print_customer_info(){
   cout << "customers name: " << get_name() << endl;
   cout << "address: " << get_address() << endl;
   cout << "customer city: " << get_city() << endl;
   cout << "state: " << get_state() << endl;
   cout << "zipcode: " << get_zipcode() << endl;
   cout << "customer credit limit: $" << get_credit_limit() << endl;
}

int main(){
	
	customer Justin("justin", "10029 columbine Ave", "Montclair", "California",
                      "91763", 5000);
        Justin.print_customer_info();
        Justin.set_available_credit_limit();
        Justin.attempt_purchase(5000000);
        Justin.attempt_purchase(100);
        Justin.attempt_purchase(10);
        Justin.attempt_purchase(10);

        cout << "purchase made: " << Justin.get_purchase() << endl;

        Justin.increase_limit(3000);
        cout << "after the icrease credit limit, neew credit limit is: "
            << Justin.get_credit_limit() << endl;
        Justin.attempt_purchase(1600);
        Justin.attempt_purchase(30);

        cout << "credit limit is: " << Justin.get_credit_limit() << endl;
        cout << "purchase made: " << Justin.get_purchase() << endl;
    
        return 0;
}




