//program to calculate area of a circle
#include <iostream>
using namespace std;
int main()
{
float rad, area;// variables('rad','area') of data type 'float'
const float  PI = 3.14F;// constant('PI') of data type 'float' 

cout << endl << "Enter radius: ";//for output
cin >> rad;//taking input

area = PI * rad * rad;//c++ statement

cout << "Area is : " << area << endl;

return 0;
}

