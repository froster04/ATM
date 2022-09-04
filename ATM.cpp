#include <iostream>
using namespace std;

void Menu(){
    cout<<"******Menu******"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit Money"<<endl;
    cout<<"3.Withdraw Money"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"****************"<<endl;
}

int main(){

    int option;
    double balance = 5000;
    double depositMoney;
    double withdrawMoney;

    do{    
    Menu();
    
    cout<<"Choose Operation: ";
    cin>>option;
    system("cls");

    switch (option)
    {
    case 1:
        cout<<"Your Balance is: "<<balance<<" $"<<endl;
        cout<<endl;
        break;
    
    case 2:
        cout<<"Enter Deposit Amount: ";
        cin>>depositMoney;
        balance += depositMoney;
        cout<<endl;
        break;
    
    case 3:
        cout<<"Enter Withdraw Amount: ";
        cin>>withdrawMoney;
        if (withdrawMoney<=balance)
        {
        balance -= withdrawMoney;
        }
        else
        cout<<"Apni aukad se jada mat Withdraw Kar :)"<<endl;;
        cout<<endl;
         break;
    case 4:
        break;
    
    default: cout<<"Enter Valid Option"<<endl;
        cout<<endl;
        break;
    }
    } while (option!=4);
}