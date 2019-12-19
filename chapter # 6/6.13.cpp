#include<iostream>
 
using namespace std;
 
double floorNumber( double number);
 
int main()
{
  double number;
  cout << "Enter number to floor rounding( -999 to end): ";
  cin >> number;
 
  while( number != -999 )
  {
      cout << "Entered number " << number << " rounded to " <<  floorNumber( number ) << endl;
      cout << "Enter number to floor rounding( -999 to end): ";
     cin >> number;
    }
  
   return 0;
}
 
double floorNumber( double number )
{
  return (number);
}
