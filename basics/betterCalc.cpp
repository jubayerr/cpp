#include<iostream>
using namespace std;

// building a calculator

int main()
{
    int num1, num2;
    char op;
    int result;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter first number: ";
    cin >> num2;

    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    } 
    else if (op == '/')
    {
        result = num1 / num2;
    } 
    else 
    {
        cout << "invalid number or operator" << endl;
    }

    cout << "Answer is = " << result << endl;

    return 0;
}