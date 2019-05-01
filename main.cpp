#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login: " << endl;
    cin >> login;
    cout << "Podaj haslo: " << endl;
    cin >> haslo;

    if ((login=="admin")&&(haslo=="szarlotka"))
    {
        cout << "Logowanie powiodlo sie.";
    }
    else
    {
        cout << "Logowanie nie powiodlo sie.";
    }


    return 0;
}
