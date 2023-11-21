#include <iostream>
using namespace std;

void operator_acq_answ(int& pn1, int& pn2, char& oper, int& answ);

int main()
{
    int n1, n2, ans;
    char oper;

    system("color 1F");
    cout << "Hi, it's Calculator v.---" << endl;
    cout << "---------------------------" << endl;
    cout << "Enter first number: "; cin >> n1;
    cout << "Enter second number: "; cin >> n2;
    system("cls");

    cout << "Ok, and choose, what you want to do?" << endl;
    operator_acq_answ(n1, n2, oper, ans);
    cout << "Your operator: " << oper << endl;
    cout << "Your numbers: " << n1 << " and " << n2 << endl;
    cout << "-------------------------------" << endl;
    cout << "Answer: " << ans << "\n" << endl;
    system("pause");

    system("cls");
    cout << "Thanks for using the Calculator v.---" << endl;
}

void operator_acq_answ(int& pn1, int& pn2, char& oper, int& answ)
{
    cout << "Enter the operation symbol: +, -, *, /" << endl;
    cout << "---------------------------" << endl;
    cin >> oper;
    system("cls");

    switch (oper)
    {
    case '+':
        oper = '+';
        answ = pn1 + pn2;
        break;
    case '-':
        oper = '-';
        answ = pn1 - pn2;
        break;
    case '*':
        oper = '*';
        answ = pn1 * pn2;
        break;
    case '/':
        oper = '/';
        answ = pn1 / pn2;
        break;
    default:
        system("cls");
        return(operator_acq_answ(pn1, pn2, oper, answ));
    }
}