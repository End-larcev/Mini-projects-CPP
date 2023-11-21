#include <iostream>
using namespace std;

int main()
{
    cout << "Hi, this programm count crypto-$" << endl;
    double budget, n1, n2, buy, sell, answ1, answ2, comm1, comm2;

    cout << "Enter your capital: "; cin >> budget;
    cout << "-----------------------" << endl;
    cout << "Enter first price: "; cin >> n1;
    cout << "Enter second price: "; cin >> n2;
    system("cls");

    // покупка крипты
    buy = budget / n1; // то, сколько монет ты купил, без учета комиссии
    comm1 = buy * 0.002; // коммиссия с твоей покупки 0,2%
    answ1 = buy - comm1; // то, сколько реально ты купил

    // продажа крипты
    sell = answ1 * n2; // то, сколько ты продал, без учета комиссии
    comm2 = sell * 0.002; // комиссия с твоей продажи 0,2%
    answ2 = sell - comm2; // то, сколько ты реально продал

    cout << "Start budget: " << budget << "$" << endl;
    cout << "-----------------------" << endl;
    cout << "Crypto comission: " << comm1 << endl;
    cout << "Dollar comission: " << comm2 << endl;
    cout << "-----------------------" << endl;
    cout << "Finish budget: " << answ2 << "$" << endl;

    system("pause");
    system("cls");
    return(main());
}