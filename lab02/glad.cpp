// program p1.2, page 30
// this program greets a user after entering their name
// programmed by: justin pulido

#include <iostream>
#include <string>

using namespace std;

int main()
{
   cout << "Hello, my name is justin!" << "\n";
   
   cout << "what is your name? ";
   string user_name;
   getline(cin, user_name);
   
   cout << "hello, " << user_name << ". its nice to meet you.";
   cout << "\n";
   
   return 0;
}
