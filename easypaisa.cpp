#include <iostream>using namespace std;
int main() {int choice;
    double balance = 10000;
    double amount;
    int pin, id;
    int transactionID = 58432956;

    cout << "        EASYPAISA\n";


    cout << "Enter PIN: ";
    cin >> pin;

    if (pin != 1234) {cout << "Wrong PIN!\n";
        return 0;
    }do 
        cout << "        EASYPAISA MENU\n";
        cout << "1. Check Balance\n";
        cout << "2. Send Money\n";
        cout << "3. Mobile Load\n";
        cout << "4. Pay Bill\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {case 1:
                cout << "\nYour balance is: Rs. " << balance << endl;
                break;

            case 2: {long long number;

                cout << "\nEnter receiver number: ";
                cin >> number;

                cout << "Enter amount: Rs. ";
                cin >> amount;

                if (amount <= 0) {cout << "Invalid amount!\n";
                }else if (amount > balance) {cout << "Insufficient balance!\n";
                }else {balance = balance - amount;

                    cout << "Money sent successfully!\n";
                    cout << "Transaction ID: " << transactionID << endl;
                    cout << "Remaining balance: Rs. " << balance << endl;

                    transactionID++;
                }break;
            }case 3: {long long number;

                cout << "\nEnter mobile number: ";
                cin >> number;

                cout << "Enter load amount: Rs. ";
                cin >> amount;

                if (amount <= 0) {cout << "Invalid amount!\n";
                }else if (amount > balance) {cout << "Insufficient balance!\n";
                }else {balance = balance - amount;

                    cout << "Mobile load successful!\n";
                    cout << "Transaction ID: " << transactionID << endl;
                    cout << "Remaining balance: Rs. " << balance << endl;

                    transactionID++;
                }break;
            }case 4: {int billChoice;

                cout << "\n1. Electricity Bill\n";
                cout << "2. Gas Bill\n";
                cout << "3. Internet Bill\n";
                cout << "Enter bill type: ";
                cin >> billChoice;

                cout << "Enter bill id number:\n";
                cin >> id;

                cout << "Enter bill amount: Rs. ";
                cin >> amount;

                if (amount <= 0) {cout << "Invalid amount!\n";
                }else if (amount > balance) {cout << "Insufficient balance!\n";
                }else {balance = balance - amount;

                    cout << "Bill paid successfully!\n";
                    cout << "Transaction ID: " << transactionID << endl;
                    cout << "Remaining balance: Rs. " << balance << endl;

                    transactionID++;
                }break;
            }case 5:
                cout << "\nThank you for using EasyPaisa!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }} while (choice != 5);

    return 0;}
