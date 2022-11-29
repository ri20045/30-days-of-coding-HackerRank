#include<iostream>
using namespace std;
int main()
{
   int i,n;
   cin >> n; 
   int result = n*i; 
   for(i=1; i<=10; i++){
    if(n>=2 && n<=20){
       cout << n << " x " << i << " = " << n * i << endl;
    }
   }
    return 0;
}
