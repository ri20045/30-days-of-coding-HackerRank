#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin >> n;
    map<string, string> phoneBook;
    string name;
    string number;
    for(int i=1; i<=n; i++){
        cin >> name >> number;
        phoneBook[name]=number;
    }
    while(cin >> name) {
        if(phoneBook.find(name)==phoneBook.end()){
            cout << "Not found\n";
        }
        else{
            cout << name << "=" << phoneBook[name] << endl;
        }
    }
    return 0;
}
