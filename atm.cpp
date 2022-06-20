#include <iostream>
using namespace std;

int main()
{
    bool loog = true;
    int option;
    string name;
    int startingBalance, totalW, totalD, amD, amW;
    totalD = 0;
    totalW = 0;
    amD = 0;
    amW = 0;
    cout << "Enter account name: ";
    getline(cin, name);
    cout << "Enter starting balance: ";
    cin >> startingBalance;
    int Balance = startingBalance;
    while (loog)
    {
        cout << "Hello " << name << "...\nWhat would you like to do:" << endl;
        cout << "1) Deposit\n2) Withdraw\n3)Log Out\nWhich option: ";
        cin >> option;
        if (option <= 0 or option > 3)
        {
            cout << "You suck...\nGo again!!" << endl;
            continue;
        }
        if (option == 1)
        {
            int d = 0;
            cout << "How much would you like to deposit: ";
            cin >> d;
            Balance += d;
            totalD++;
            amD += d;
            cout << "Balance: $" << Balance << endl;
            continue;
        }
        if (option == 2)
        {
            int w = 0;
            cout << "How much would you like to withdraw: ";
            cin >> w;
            Balance -= w;
            totalW++;
            amW += w;
            cout << "$" << Balance << endl;
            continue;
        }
        if (option == 3)
        {
            cout << "Account Name: " << name << endl;
            cout << "Starting Balance: " << startingBalance << endl;
            cout << "Balance: $" << Balance << endl;
            cout << "Total Deposits: " << totalD << endl;
            cout << "Amount deposited: $" << amD << endl;
            cout << "Total Withdraws: " << totalW << endl;
            cout << "Amount withdrawn: $" << amW;
            loog = false;
        }
    }
    return 0;
}