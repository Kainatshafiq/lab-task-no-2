#include <iostream>
using namespace std;
int main() {
   float balance;
    cout<<"Enter the initial balance:";
    cin>>balance;
    float deposite;
    cout<<"Enter the deposite balance:";
    cin>>deposite;
    float withdrawl;
    cout<<"Enter the withdrawl amount:";
    cin>>withdrawl;
    balance+=deposite; //deposit=deposite+balance;
    cout<<"balance after deposite:"<<balance<<endl;
    balance-=withdrawl; //withdrawl=withdrawl+balance;
    cout<<"balance after withdrawl:"<<balance<<endl;
    cout<<"final balance:"<<balance;
    return 0;
}