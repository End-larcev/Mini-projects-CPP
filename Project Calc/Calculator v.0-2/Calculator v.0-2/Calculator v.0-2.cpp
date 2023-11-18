#include <iostream>
using namespace std;

void operator_acq(int &a, int &b);

int main()
{
	int n1, n2;

	cout << "Hi, it's Calculator v.0-2" << endl;
	cout << "---------------------------" << endl;
	cout << "Enter first number: "; cin >> n1;
	cout << "Enter second number: "; cin >> n2;
	system("cls");

	cout << "Ok, and choose, what you want to do?" << endl;
	operator_acq(n1, n2);

    system("cls");
    cout << "Thanks for using the Calculator v.0-2" << endl;
}

void operator_acq(int &a, int &b)
{
	char oper;

	cout << "Enter the operation symbol: +, -, *, /" << endl;
	cout << "---------------------------" << endl;
	cin >> oper;
	system("cls");

	switch (oper)
	{
    case '+':
        system("cls");
        cout << "Your operator: " << oper << endl;
        cout << "Your numbers: " << a << " and " << b << endl;
        cout << "-------------------------------" << endl;
        cout << "Answer: " << a + b << endl;
        break;
    case '-':
        system("cls");
        cout << "Your operator: " << oper << endl;
        cout << "Your numbers: " << a << " and " << b << endl;
        cout << "-------------------------------" << endl;
        cout << "Answer: " << a - b << endl;
        break;
    case '*':
        system("cls");
        cout << "Your operator: " << oper << endl;
        cout << "Your numbers: " << a << " and " << b << endl;
        cout << "-------------------------------" << endl;
        cout << "Answer: " << a * b << endl;
        break;
    case '/':
        system("cls");
        cout << "Your operator: " << oper << endl;
        cout << "Your numbers: " << a << " and " << b << endl;
        cout << "-------------------------------" << endl;
        cout << "Answer: " << a / b << endl;
        break;
	default:
		system("cls");
        return(operator_acq(a, b));
	}
    cout << endl;
    system("pause");
}