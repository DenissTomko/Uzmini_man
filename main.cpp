#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
  srand(time(NULL));
 
  int x=rand()%100 + 1; // skaitļi  no 1 līdz 100   
  int y; //user choice  
  cout << "Input number 1-100" <<endl;

  for (int i=0; i<8;i++)
  {
    cin >> y;
    if (y>x) {cout << "LESS";}
    if (y<x) {cout << "MORE";}
    if (y==x) {cout << "YOU WIN!!!"; break;}

  }



return 0;
}