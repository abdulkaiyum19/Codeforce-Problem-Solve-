
#include<iostream>
using namespace std;
int main()
{
    char a;
    int b=0;
    while(cin >>a)
    b+=42<a&a<46?44-a:0;
    cout << b/2;
}