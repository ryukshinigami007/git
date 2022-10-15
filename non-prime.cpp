#include <iostream>
using namespace std;

int main() {
    int a , b;
    cin >> a >> b;
    int n = 0;
    for(int i =1;i<a*b/2;i++)
    {
         n = i*i;
         if(n==a*b)
         {
             cout << "yes";
             break;
         } else if(n!=a*b&&i==a*b/2-1)
         {
             cout << "no";
         }
    }
    return 0;
}