#include<iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;
    switch(day)
    {
        case 1:
            cout << "Monday\n";
            break;

        case 2: 
            cout << "Tuesday\n";
            break;

        case 3:
            cout << "Wednesday\n";
            break;

        case 4: 
            cout << "Thursday\n";
            break;

        case 5:
            cout << "Wednesday\n";
            break;

        case 6:
            cout << "Thursday\n";
            break;

        case 7:
            cout << "Friday\n";
            break;

        default: 
            cout << "Invaild Input!!!";
    }
    
    return 0;
}