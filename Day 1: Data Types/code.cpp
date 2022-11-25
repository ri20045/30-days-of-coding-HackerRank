#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int num;
    double n;
    string str;

    cin >> num;
    cin >> n;
    cin.ignore();
    getline(cin, str);
    
    cout << i + num << "\n";
    cout << setprecision(1) << fixed << d + n << "\n";
    cout << s + str;
}
