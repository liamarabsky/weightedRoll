#include <iostream>
#include <chrono>
using namespace std;

int main()
{
  int n = 0;
  int roll = 0;
  while ( n < 100 ){
    srand(n);
    int roll = rand()%38;
	
    string item = "empty";
    if ( roll < 38 ){ item = "Potion"; }
    if ( roll < 26 ){ item = "Sword"; }
    if ( roll < 16 ){ item = "Shield"; }
    if ( roll < 11 ){ item = "Silver"; }
    if ( roll < 3 ){ item = "Knife"; }
    if ( roll < 1 ){ item = "Staff"; }
    cout << item << endl;
    n++;
  }   
 }
