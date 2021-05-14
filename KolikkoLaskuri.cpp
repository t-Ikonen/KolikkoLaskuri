// KolikkoLaskuri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    cout << "Anna eurot sentteina: ";

    int sentit{ 0 };
    cin >> sentit;

    int balance = sentit;

    int euro_1{ 0 };
    int sentit_50{ 0 };
    int sentit_20{ 0 };
    int sentit_10{ 0 };
    int sentit_5{ 0 };
    int sentit_1{ 0 };

    euro_1 = sentit / 100;
    cout << "\nEuron kolikot: " << euro_1<<endl;

    // 50 sentit jaljella
    balance = balance - (euro_1 * 100);
    sentit_50 = balance / 50;
    //cout << balance << endl;
    cout << "\n50 sentin kolikoita: " << balance/50<<endl;
    balance -= sentit_50 * 50;
    //cout << "Balance: " << balance<<endl;

    cout << "\n10 sentin kolikoita: " << balance / 10<<endl;
    sentit_10 = balance / 10;
    balance -= sentit_10 * 10;
    //cout << "Balance: " << balance << endl;

    cout << "\n5 sentin kolikoita: " << balance / 5<<endl;
    sentit_5 = balance / 5;
     balance -= sentit_5 * 5;
    // cout << balance << " "<< (sentit_5 * 5) << endl;
    cout << "Balance: " << balance << endl;


    sentit_1 = balance;
    cout << "\n1 Sentin kolikot: " << balance<<endl;
    balance -= sentit_1;
    cout << "Balance: " << balance << endl;



    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
