#include <iostream>
using namespace std;

void header()
{
    cout << "=====================================" << endl;
    cout << "******* KONVERSI SUHU CELCIUS *******" << endl;
    cout << "=====================================" << endl;
}

void output(float value)
{
    cout << "HASIL KONVERSI : " << endl;
    cout << "=====================================" << endl;
    cout << "Celcius = " << value << endl;
    cout << "Reamur = " << value * 4 / 5 << endl;
    cout << "Celcius = " << value * 9 / 5 + 32 << endl;
    cout << "Celcius = " << value + 273 << endl;
}

int main()
{
    float celcius;
    header();
    cout << "Masukkan Suhu dalam Celcius = ";
    cin >> celcius;
    output(celcius);
    return 0;
}