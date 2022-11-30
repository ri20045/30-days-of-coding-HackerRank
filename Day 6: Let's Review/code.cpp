int main() {
    string str;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> str;
        for(int j=0; j<=str.length()-1; j++){
            if(j%2==0){
                cout << str[j];
            }
        }
        cout << " ";
            for(int j=0; j<=str.length()-1; j++){
            if(j%2!=0){
                cout << str[j];
            }
        
            }
            cout << endl;
    }
    return 0;
}
