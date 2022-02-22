#include <iostream>   //iostream headerfile
using namespace std ;

int main(){   //beginning of function main
  double salary , netSalary ;  //declaring variables
  int etype , otHrs , otRate ; 

  cout << "Enter employee type :" ;    //prompt
  cin >>etype ;          //getting input

  cout << "Enter salary :" ;
  cin >> salary ;

  cout << "Enter otHrs :" ;
  cin >> otHrs ;

  switch (etype){
    case 1 :
         otRate = 1000;
        break ;

    case 2 :
         otRate = 1500 ;
        break ;

    default :
        otRate = 1700 ;
        break ;
    
  }
        netSalary = salary + otHrs * otRate ;
        cout << "Net salary is " << netSalary << endl;   //printing output

  return 0;
}   //end of function main