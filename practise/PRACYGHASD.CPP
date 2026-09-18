#include <iostream>
using namespace std;


class bankbalance{
    private:
    int balance;
    public:
    bankbalance(int startingbalance){
        if (startingbalance>=0){
            balance= startingbalance;
        }else {
            balance = 0;
        }
    }
    void deposit(int amount){
        if (amount>=0){
            balance= balance+amount;
        }
    }
    void withdraw(int amount){
        if (amount >0 && amount <=balance){
            balance = balance- amount;
        }
    }
    void display(){
        cout << "balance"<< balance<<endl;
    }

};


int main() {
    bankbalance account(10000);

    account.deposit(2000);
    account.withdraw(3000);

    account.display();

    return 0;
}