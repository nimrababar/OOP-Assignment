#include <iostream>
using namespace std;
 
double maximum(double i, double j, double k);
 
int main()
{
   double a, b, c;
 
   cout << "Enter three floating point numbers: ";
   cin >> a >> b >> c;
 
   cout << "The smallest is " << maximum(a,b,c);
 
   return 0;
}
 
double maximum(double i, double j, double k)
{
   double max;
 
   max = i;
   if( i > j)
   {
      if( j > k)
        max = k;
      else
         max = j;
   }
   else
   {
      if( i > k)
         max = k;
   }
 
   return max;
}
