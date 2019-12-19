#include<iostream> 
 
using namespace std;
 
int roundToInteger( double );
double roundToTenths( double );
double roundToHundredths( double );
double roundToThousandths( double );
 
double number;
 
int main()
{
  cout << "Enter number to round (EOF to end): ";
  cin >> number;
 
  while( number != EOF )
  {
    cout << roundToInteger( number ) << endl
      << roundToTenths( number ) << endl
      << roundToHundredths( number ) << endl
      << roundToThousandths( number ) << endl;
 
    cout << "Enter number to round (EOF to end): ";
    cin >> number;     
   }
 
   //for pause
   system("PAUSE");
   return 0;
}
 
//rounding
int roundToInteger( double number )
{
  return floor( number + .5 );
}
 
double roundToTenths( double number )
{
  return floor( number * 10 + .5) / 10;
}
 
double roundToHundredths( double number )
{
    return floor( number * 100 + .5) / 100;
}
 
double roundToThousandths( double number )
{
    return floor( number * 1000 + .5) / 1000;
}
