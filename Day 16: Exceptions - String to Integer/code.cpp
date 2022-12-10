#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try
    {
        int number = stoi(S);
        cout << number << endl;
    }
    catch(exception)
    {
        cout << "Bad String" << endl;
    }
    return 0;
}
