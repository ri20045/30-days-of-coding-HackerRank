#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    //binary conversion
    string ans = "";
    while(n>1){
        int rem = n%2;
        ans += (rem+'0');
        n = n/2;
    }
    reverse(ans.begin(), ans.end());
    ans = "1" + ans;
    //count max 1's consecutive
    int count = 0;
   int max = 0;
   for(int i=0; i<ans.length(); i++){
       if(ans[i]=='1'){
           count++;
       }
       else if(ans[i] == '0'){
         if(count > max){
          max = count;
        }
        count =0;
   }
   }
   if(count > max){
          max = count;

      }
      cout << max;
    return 0;

}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
