#include<iostream>
using namespace std;
int main()
{
   int i;
   int n=5;
   int arr[5];
   for(i=0; i<5; i++){
      cin >> arr[i];
   }
   for(i=0; i<5; i++){
      cout << arr[i];
   }
   for(i=4; i>=0; i--){
      cout << arr[i] << ' ';
   }

    return 0;
}
