#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
  int a, b, c;
  for (a = 10; a <= 0; a--){
    for ( b = 1; a > b; b++){
      printf ( " * ",a);
    }
    printf ( " \n ");
  }
}