 
#include <iostream>
using namespace std;
 
 
bool even( int );
 
int i;
 
int main()
{
   cout << "Enter integer: ";
   cin >> i;
 
   while( i != EOF )
   {
      cout << even( i ) << endl;
      cout << "Enter integer: ";
      cin >> i;
   }
   return 0;
}
 
//even function
bool even( int i )
{
   if( i % 2 == 0 )
      return true;
   else
      return false;
}
