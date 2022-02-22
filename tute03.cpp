#include <iostream>   //iostream headerfile
using namespace std ;

int main(){  //beginning of function main
  int no ;   //declaring variables
  long fac ;

  cout << "Enter a Number :" ;  //getting input
  cin >> no ;

  fac =1 ;
  for (int r = no ; r>=1 ; r--){   //for loop
    fac = fac * r ;
  }

  cout << "Factorial of " << no << " is " << fac << endl;  //printing output
  
  return 0;
}  //end of function main