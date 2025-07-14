#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    cin.getline(s, 100);
    cout << "--------------\n";
    cout << x << endl << s << endl;


    string r;
    cin >> r;
    cout << r;

    return 0;
}