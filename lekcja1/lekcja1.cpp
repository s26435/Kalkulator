//Jan Wolski 9.10.2021
//program z lekcji pierwszej
// kalkulator

#include <iostream>
#include <windows.h>

using namespace std;

char c;

int potega(int x, int y) //rekurencyjne potegowanie
{
    if (y == 0) return 1;
    else return x * potega(x, y - 1);
}

float liczenie(char x) //funkcja licz¹ca
{
    //wprowadzanie danych do zmiennych
    float a, b;
    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b; 
    //rozpoznawanie dzia³ania
    switch (x)
    {
    case 'D':
    case 'd': return a + b;
    case 'O':
    case 'o': return a - b;
    case 'M':
    case 'm': return a * b;
    case 'Z':
    case 'z': return a / b;
    case 'P':
    case 'p': return potega(a,b);
    default: cout << "Niepoprawny znak!"; return 0;
    }
}

int main()
{
    while (true)
    {
        //szata wizualna
        cout << "Kalkulator" << endl;
        cout << "D. Dodawanie" << endl;
        cout << "O. Odejmowanie" << endl;
        cout << "M. Mnozenie" << endl;
        cout << "Z. Dzielenie" << endl;
        cout << "P. Potegowanie" << endl;
        cout << "Q. Wyjscie" << endl;
        //wybór dzia³ania
        cin >> c;
        if (c == 'q' || c == 'Q') break;
        cout << "Wynik: " << liczenie(c) << endl;
        system("pause");
        system("cls");
    }
    return 0;
}

