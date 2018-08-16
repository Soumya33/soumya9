//include library
#include <iostream>
using namespace std;
//main function
int main()
{
int a,b,sum,substract,product,remainder ; // declaration
float division;
a = 5; // definition
b = 3;  // definition
float x, y,sum2,substract2,product2,division2;
x = 2.678;
y = 7.987;
sum = a + b; // adds 2 numbers
substract = a - b; // calculates the difference
product = a * b; // calculates the product
division = a / b; // divides the numbers
remainder = a % b; // finds the remainder
sum2 = x + y; // adds 2 numbers
substract2 = y - x; // calculates the difference
product2 = x * y; // calculates the product
division2 = y / a; // divides the numbers
// displaying the calculations in terminal
cout << "numbers are " << a << "," << b << endl; 
cout << "results in integer" << endl;
cout << "sum is " << sum << endl;
cout << "difference is " << substract << endl;
cout << "product is " << product << endl;
cout << "quotient is " << division << endl;
cout << "remainder is " << remainder << endl;
cout << "results in float" << endl;
cout << "sum is " << sum2 << endl;
cout << "difference is " << substract2 << endl;
cout << "product is " << product2 << endl;
cout << "quotient is " << division2 << endl;
return 0;
}


