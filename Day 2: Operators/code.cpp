#include<iostream>
#include <cmath>
using namespace std; 
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip_amount = tip_percent*meal_cost/100;
    double tax_amount = tax_percent*meal_cost/100;
    double total_amount = tip_amount+tax_amount+meal_cost;
    cout << round(total_amount);
}
int main(){
    double meal_cost;
    int tip_percent;
    int tax_percent;

    cin >> meal_cost;
    cin >> tip_percent;
    cin >> tax_percent;

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
