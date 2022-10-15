/*
Given base(B) and height(H) of a triangle find its area.
*/
#include <iostream>
using namespace std;
int main()
{
    double base , height;
    cin >> base >> height;
    double area = (base * height)*0.5;
    cout << area;
}