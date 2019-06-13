#include <iostream>
#include <string>

using namespace std;

int main()
{
   cout << "Hello, my name is al!" << "\n";

   cout << "what would you like me to do?";
   string user_input;
   getline(cin, user_input);

   cout << "sorry, i am unable to perform that.";
   cout << "\n";

   return 0;
}
