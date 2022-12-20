#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */      int retday,retmonth,retyear;
     cin >> retday >> retmonth >> retyear;
     int dueday,duemonth,dueyear;
     cin >> dueday >> duemonth >> dueyear;
     
     if(retyear==dueyear){
         if(retmonth==duemonth){
             if(retday==dueday){
                 cout << 0 << endl;
             }
             else{
                 if(retday>dueday){
                     int fine=15*(retday-dueday);
                     cout << fine << endl;
                 }
                 else{
                     cout << 0 << endl;
                 }
             }
         }
         else{
             if(retmonth>duemonth){
                 int fine = 500*(retmonth-duemonth);
                 cout << fine << endl;
             }
             else{
                 cout << 0 << endl;
             }
         }
     }
     else{
         if(retyear>dueyear){
             cout << 10000 << endl;
         }
         else{
             cout << 0 << endl;
         }
     }
    return 0;
}
