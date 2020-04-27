/*
W01 CALCULATOR Part A
    Create a program that reads two numbers and a operator and prints the result.
    
    Example (The text at the back> in each line is read during execution):
    Numbers 1> 20
    Operator> *
    Numbers 2> 5
    The answer of 20 * 5 is 100.
 */

#include <iostream>

using namespace std;

int main() {
   int num1, num2;
   char op;
   
    cout << "Enter Numbers" << '\n';
    cout << "Number 1: " << '\n';
    cin >> num1;
    cout << "Operator: " << '\n';
    cin >> op;
    cout << "Number 2: " << '\n';
    cin >> num2;
    
    if (!cin){
        cout << "Enter Only Numbers" << '\n';
    }
    
    switch (op) {
        case '*':
            cout << "The answer of " << num1 << op << num2 << " is " << num1*num2 << '\n';
            break;
            
        case '+':
            cout << "The answer of " << num1 << op << num2 << " is " << num1+num2 << '\n';
            break;
            
        case '-':
            cout << "The answer of " << num1 << op << num2 << " is " << num1-num2 << '\n';
            break;
            
        case '/':
            if (num2==0) {
                cout << "Cannot divide by 0" << '\n';
            }
            else
            cout << "The answer of " << num1 << op << num2 << " is " << num1/num2 << '\n';
            break;        
        default:
            break;
    }
}

/* OUTPUT:
    Enter Numbers
    Number 1: 2
    Operator: *
    Number 2: 4
    The answer of 2*4 is 8
*/