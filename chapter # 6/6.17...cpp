#include<iostream>
using std::cout;
using std:: endl;
 
#include<ctime>
using std::rand;
 
int main()
{
    // seed by time
    srand( time( 0 ));
 
    //output to dislplay
    cout << "Random number for a) 2, 4, 6, 8, 10 is " << (rand() % 5 + 1) * 2 << endl;
    cout << "Random number for b) 3, 5, 7, 9, 11 is " << (rand() % 5 + 1) * 2 + 1 << endl;
    cout << "Random number for c) 6, 10, 14, 18, 22 is " << ((rand() % 5 + 1) * 2 + 1) * 2 << endl;
 
    return 0;
}
