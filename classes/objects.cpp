#include <bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
    int balance;
   
    int Account_number ;

    public:
    void setbalance(int b){
        if(b>=1000){
            balance=b;
        }
        else{
            cout<<"insufficient balance !";
        }
    }
    int getbalance(){
        return balance;
    }
    void setAccount_number(int a){
        Account_number=a;

    }
    int getAccount_number(){
        return Account_number;
    }

     string Holder_name ;

};


int main(){
    BankAccount b;

    b.setAccount_number(10024545);
    b.setbalance(20000);
    b.Holder_name="piyush";

    cout<<"the name of account holder is : "<<b.Holder_name<<endl;

    cout<<"the account number is :"<<b.getAccount_number()<<endl;

    cout<<"the balance is : "<<b.getbalance();
    return 0;
    



}