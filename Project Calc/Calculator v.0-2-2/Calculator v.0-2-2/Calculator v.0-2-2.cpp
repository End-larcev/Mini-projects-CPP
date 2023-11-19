#include <iostream>
using namespace std;

void operator_acq(int& a, int& b, char& oper);

int main()
{
    int n1, n2;
    char oper;

    system("color 1F");
    cout << "Hi, it's Calculator v.0-2-2" << endl;
    cout << "---------------------------" << endl;
    cout << "Enter first number: "; cin >> n1;
    cout << "Enter second number: "; cin >> n2;
    system("cls");

    cout << "Ok, and choose, what you want to do?" << endl;
    operator_acq(n1, n2, oper);
    cout << "Your operator: " << oper << endl;
    cout << "Your numbers: " << n1 << " and " << n2 << endl;
    cout << "-------------------------------" << endl;
    cout << "Answer: " << n1 + n2 << "\n" << endl;
    system("pause");

    system("cls");
    cout << "Thanks for using the Calculator v.0-2-2" << endl;
}

void operator_acq(int& a, int& b, char& oper)
{
    cout << "Enter the operation symbol: +, -, *, /" << endl;
    cout << "---------------------------" << endl;
    cin >> oper;
    system("cls");

    switch (oper)
    {
    case '+':
        oper = '+';
        break;
    case '-':
        oper = '-';
        break;
    case '*':
        oper = '*';
        break;
    case '/':
        oper = '/';
        break;
    default:
        system("cls");
        return(operator_acq(a, b, oper));
    }
}