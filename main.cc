#include <iostream>
#include <cmath>
using namespace std;

// 10679301
// recursive function to find the greatest common factor of two integers

int isgcd(int a, int b)
{

int num1 = min(a,b);
int num2 = max(a,b);
if (a==b)
  {
     return a;
  } else
  return isgcd(num1, num2-num1);
}


int main()
{
    int a,b;
   cout<<"Enter two numbers"<< endl;
   cin >> a>> b;

 cout << "The Greatest common divisor of the two numbers is:" << isgcd(a,b) <<endl;
    return 0;
}
