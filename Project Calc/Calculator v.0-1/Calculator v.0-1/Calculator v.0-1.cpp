#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	char oper;

	cout << "Hi, it's my calculator v.0-1" << endl;
	cout << "Enter your first number: "; cin >> n1;
	cout << "Ok, and choose, what you want to do?\n"
		<< "+, -, * or /   "; cin >> oper;
	cout << "And, enter second number: "; cin >> n2;
	cout << endl;
	cout << "---------------------------------------" << endl;

	switch (oper)
	{
	case '+':
		cout << "Answer: " << n1 + n2 << endl;
		break;
	case '-':
		cout << "Answer: " << n1 - n2 << endl;
		break;
	case '*':
		cout << "Answer: " << n1 * n2 << endl;
		break;
	case '/':
		cout << "Answer: " << n1 / n2 << endl;
		break;
	}
}