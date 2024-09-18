#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hibas valtozonev
    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;) //hianyos ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //max ertek hiany
    {
        std::cout << "Ertek:" //adott elem megadasa
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //";" hiany
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
