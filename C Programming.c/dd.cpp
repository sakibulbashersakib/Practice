#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    int result;
    cout << "Enter first Number: ";
    cin >> num1;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter second Number: ";
    cin >> num2;

    if(op == '+')
    {
        result = num1 + num2;
    }
    else if(op == '-')
    {
        result = num1 - num2;
    }
    else if(op == '*')
    {
        result = num1 * num2;
    }
    else{
        cout << "Invalid Operator";
    }

    return 0;
}
