// Code By Mouad

// ===== Libraries =====

#include <iostream>
#include <string>
#include <limits>
#include <chrono>
#include <thread>

// ===== namespaces + global things =====

using namespace std;
using namespace chrono;

// ===== Variables =====

    // === Strings ===

    string greetings = "Hello there, Howdy";
    string text = "After calculate, we are going to get :";
    string choicex = "Choose your (x) value : ";
    string choicey = "Choose your (y) value : ";
    string choiceop = "Choose your operator : ";
    string wrongchoicex = "Enter the correct (x) value : ";
    string wrongchoicey = "Enter the correct (y) value : ";
    string wrongchoiceop = "Enter the correct operator ('+', '-', '*', '/') : ";
    string matherror = "Can't devide on 0";

    // === char ===

    char op;

    // === double ===

    double x;
    double y;
    double z;

// ===== Codes =====

// === Functions ===

// = cin =

int Cin() {

    cout << greetings << endl;

    this_thread::sleep_for(seconds(1));

    cout << choicex ;
    cin >> x;

    while (cin.fail()) {

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << wrongchoicex;

        cin >> x;

    }

    cout << "proccessing" << '\n';
    this_thread::sleep_for(seconds(1));
    
    cout << choicey ;
    cin >> y;

    while (cin.fail()) {

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << wrongchoicey;

        cin >> y;

    }

    return 0;

}

// = switchandcalc =

int switchandcalc() {

    cout << "proccessing" << '\n';
    this_thread::sleep_for(seconds(1));

    cout << choiceop;
    cin >> op;

    while (cin.fail()) {

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << wrongchoiceop;

        cin >> op;

    }

    while (op != '+' && op != '-' && op != '*' && op != '/') {

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << wrongchoiceop;

        cin >> op;

    }

    switch (op) {

        case '+': z = x + y ; break;
        case '-' : z = x - y; break ;
        case '*' : z = x * y; break ;
        case '/' :
            if (y == 0) {

                cout << "proccessing & calculating." << '\n';
                this_thread::sleep_for(milliseconds(500));
                cout << "proccessing & calculating.." << '\n';
                this_thread::sleep_for(milliseconds(500));
                cout << "proccessing & calculating..." << '\n';
                this_thread::sleep_for(milliseconds(500));
                cout << "proccessing & calculating." << '\n';
                this_thread::sleep_for(milliseconds(500));
                cout << "proccessing & calculating.." << '\n';
                this_thread::sleep_for(milliseconds(500));
                cout << "proccessing & calculating..." << '\n';
                this_thread::sleep_for(milliseconds(500));

                cout << matherror << endl;

                return 1;
            }
            
            else {
                z = x / y;
            }
    break; } 

    return 0;

}

// = finalresult =


int finalresult() {

    cout << "proccessing & calculating." << '\n';
    this_thread::sleep_for(milliseconds(500));
    cout << "proccessing & calculating.." << '\n';
    this_thread::sleep_for(milliseconds(500));
    cout << "proccessing & calculating..." << '\n';
    this_thread::sleep_for(milliseconds(500));
    cout << "proccessing & calculating." << '\n';
    this_thread::sleep_for(milliseconds(500));
    cout << "proccessing & calculating.." << '\n';
    this_thread::sleep_for(milliseconds(500));
    cout << "proccessing & calculating..." << '\n';
    this_thread::sleep_for(milliseconds(500));


    cout << text << z << endl;

    return 0;

}

// = main =

int main() {

    Cin();

    if (switchandcalc() == 1) {
        return 0;
    }

    finalresult();

    return 0;
}
