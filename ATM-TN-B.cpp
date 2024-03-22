#include <iostream>
#include <string>

using namespace std;

int main() {
    // Predefined users
    int numUsers = 3;
    int numUserAttributes = 2;
    string preDefUser[numUsers][numUserAttributes] = {
        {"John Doe", "passwordDoe"},
        {"Jane Doe", "passwordJane"},
        {"Sarah Conner", "helloworld2000"} };

    int choiceTN;
    string userTN, passTN, loggedInUserTN = "";

    // Register/Login
    cout << "1. Register\n2. Login\nExit\nMake your selection: ";
    cin >> choiceTN;

    if (choiceTN == 1) {
        cout << "Enter username: ";
        cin >> userTN;
        cout << "Enter password: ";
        cin >> passTN;

        // Register new user (including balance)
        balanceTN = 0; // Starting balance

        // Menu (after successful registration)
        cout << "1. Display balance \n"
            << "2. Deposit money into account\n"
            << "3. Withdraw money from account\n"
            << "4. Exit ATM\n";
        cin >> choiceTN;

        while (choiceTN != 00) {
            switch (choiceTN) {
            case 1:
                cout << loggedInUserTN << ", here is your account balance: $" << balanceTN << endl;
                break;
            case 2:
                cout << "Enter deposit amount " << loggedInUserTN << ": $";
                cin >> depositTN;
                balanceTN += depositTN;
                cout << loggedInUserTN << ", the amount to be deposited is $" << depositTN << endl;
                cout << loggedInUserTN << ", the current balance is $" << balanceTN << endl;
                break;
            case 3:
                cout << "Enter withdrawal amount " << loggedInUserTN << ": $";
                cin >> withdrawTN;
                if (withdrawTN > balanceTN) {
                    cout << "Insufficient funds. Your current balance is $" << balanceTN << endl;
                }
                else {
                    balanceTN -= withdrawTN;
                    cout << loggedInUserTN << ", the amount withdrawn is $" << withdrawTN << endl;
                    cout << loggedInUserTN << ", the current balance is $" << balanceTN << endl;
                }
                break;
            case 4:
                cout << "Goodbye, " << loggedInUserTN << endl;
                return 0; // Exit the program
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
            cin >> choiceTN;
        }
    }
    else if (choiceTN == 2) {
        // Login validation
        for (int row = 0; row < numUsers; row++) {
            string usernameTN = preDefUser[row][0];
            string passwordTN = preDefUser[row][1];
            if (usernameTN == userTN && passwordTN == passTN) {
                loggedInUserTN = usernameTN;
                break;
            }
        }

        if (loggedInUserTN == "") {
            cout << "Incorrect username/password" << endl;
        }
        else {
            cout << "Welcome, " << loggedInUserTN << endl;

            // Logged-in user menu
            cout << "1. Display balance \
