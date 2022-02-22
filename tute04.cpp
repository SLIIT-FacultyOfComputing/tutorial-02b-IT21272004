#include <iostream> //iostream headerfile

long Factorial(int n);
long nCr(int n, int r);

int main() {    //beginning of function main
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}  //end of function main4


long Factorial(int n){
  int fac = 1 ;
  for (int i = 2 ; i <= n ; i++){
    fac =  fac * i ;
  }
 return fac ;
}


long nCr(int n, int r){
 
  return Factorial(n) / (Factorial (r) * Factorial (n-r));
}
