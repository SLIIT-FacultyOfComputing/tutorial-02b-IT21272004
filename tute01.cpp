 #include <iostream>   //iostream headerfile
using namespace std ;

int main(){   //beginning of function main
    float length , inches ;
   cout << "Enter length in cm :" ;
  cin >> length ;

  inches = length / 2.54 ;

  cout << "Length in inches is " << inches << endl;

 return 0;
}  //end of function main
