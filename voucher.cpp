#include <iostream>
using namespace std;
class Foodcourt{
public:
    char name[10];
    int id;
    int balance;
    void get(){
        cout << "Enter the name: " << endl;
        cin >> name;
        cout << "Enter the voucher id: " << endl;
        cin >> id;
        cout << "Enter the total balance: " << endl;
        cin >> balance;
    }
};
class Customer{
public:
    char customerName[15];
    int productPrice;
    void get(){
        cout << "Enter the customer name: ";
        cin >> customerName;
        cout << "Enter the product price: ";
        cin >> productPrice;
    }
};
class Voucher : public Foodcourt, public Customer{
public:
    void getdata(){
        Foodcourt ::get();
        Customer :: get();
    }
    void Voucherbalance(){
        balance = balance - productPrice;
    }
    void PrintData(){
        cout << "The name of the customer is: " << customerName << endl;
        cout << "The name of the normal customer is: " << name << endl;
        cout << "The voucher id is: " << id << endl;
        cout << "The left balance is: " << balance << endl;
        cout << "The product price is: " << productPrice << endl;
    }
};
int main(){
    Voucher v1;
    v1.getdata();
    v1.Voucherbalance();
    v1.PrintData();
    return 0;
}
