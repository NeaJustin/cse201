#ifndef CLASS_H
#deFine CLASS_H

#include <string>

using namespace std;

class customer{
   public:
 
      customer(string name, string address, string city, 
               string state, string zipcode, double credit_limit);
      void increase_limit(double, amount);
      string get_name() const;
      string get_address() const;
      string get_city() const;
      string get_state() const;
      string get_state() const;
      string get_zipcode() const;
      double credit_limit() const;
      double get_addsales() const;
      double get_available_credit() const;
      void set_available_credit_limit();
      void print_customer_info();
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
#endif
