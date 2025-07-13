#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << min(a,b) << endl;
    cout << max({10, 20, 43, 32}) << endl;
    cout << a << " " << b << endl;
    swap(a,b);
    cout << a << " " << b << endl;

    return 0;
}