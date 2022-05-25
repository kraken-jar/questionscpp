#include <iostream>
using namespace std;
class accounts{
    int sales;
    int purchases;
public:
    void read();
    friend void printTotal(accounts a1);
};
int main(){
    accounts a1;
    a1.read();
    printTotal(a1);
    return 0;
}
void accounts::read(){
    cout << "Enter the total sales: ";
    cin >> sales;
    cout << "Enter the total purchases: ";
    cin >> purchases;
}
void printTotal(accounts a1){
    int balance,profits;
    balance = a1.sales - a1.purchases;
    profits = 0.04*balance;
    cout << "The tax paid is " << profits << endl;
}
