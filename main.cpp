#include <iostream>
#include <string>
using namespace std;




void fullName(string firstName, string lastName) 

{
  cout << "Hello " << firstName << " " << lastName << "!\n";
}

int main() {
  
  
  string askfirst;
  string asklast;
  
  cout << "Enter your First Name:\n";
  cin >> askfirst;
  cout << "Enter your Last Name:\n"; 
  cin >> asklast;    
  fullName(askfirst, asklast);
}

