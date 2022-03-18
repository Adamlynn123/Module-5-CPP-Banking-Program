#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Bank{
            char name[100], addr[100], type[10];
            float balance;
    public:
            void open_account();
            void deposit();
            void withdraw();
            void display_account();
};

void Bank::open_account()
{
    cout<<"Enter your full name:"<<endl;
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your Address:"<<endl;
    cin.ignore();
    cin.getline(addr,100);
    cout<<"What account type? - Savings(S) Checking (C): "<<endl;
    cin.ignore(); 
    cin.getline(type,15);
    cout<<"Initial deposit amount: "<<endl;
    cin>>balance;

    cout<<"Account successfully created!"<<endl;
}

void Bank::deposit()
{
    int deposit_amount;
    cout<<"Enter amount you want to deposit: "<<endl;
    cin>>deposit_amount;

    balance = balance + deposit_amount;
    cout<<"Your current balance is: " <<balance<<endl;;
}

void Bank::withdraw()
{
    float withdraw_amount;
    cout<<"Enter amount you want to withdraw: "<<endl;
    cin>>withdraw_amount;

    balance = balance - withdraw_amount;
    cout<<"Your remaining balance is: " <<balance<<endl;;
}

void Bank::display_account()
{
    cout<<"Your name: "<<name<<endl;
    cout<<"Your Address: "<<addr<<endl;
    cout<<"Account Type: "<<type<<endl;
    cout<<"Current Balance: "<<balance<<endl;
}

int main()
{

    Bank obj;
    int choice;
    char option;

    cout<<"******************************"<<endl;
    cout<<"********** Main Menu **********"<<endl;
    cout<<"******************************"<<endl;
do{
    cout<<"1.) Open Account"<<endl;
    cout<<"2.) Deposit Money"<<endl;
    cout<<"3.) Withdraw Money"<<endl;
    cout<<"4.) Display Account"<<endl;
    cout<<"5.) Exit Program"<<endl;

    cin>>choice;
        switch (choice)
        {
            case 1: 
                cout<<"1.) Open Account:"<<endl;
                obj.open_account();
                break;

            case 2: 
                cout<<"2.) Deposit Money:"<<endl;
                obj.deposit();
                break;

            case 3: 
                cout<<"3.) Withdraw Money:"<<endl;
                obj.withdraw();
                break;

            case 4: 
                cout<<"4.) Display Account:"<<endl;
                obj.display_account();
                break;

            case 5: 
                if (choice==5)
                {
                    exit(1);
                }
            default:
                cout<<"Invalid choice! Please try again!"<<endl;
                break;
        }

        cout<<"Do you want to continue with the program?: Press (Y/N)" <<endl;
        option = getch();

        if (option =='n')
        {
            exit(1);
        }
    } while (option == 'y');
        getch();
        return 0;
}