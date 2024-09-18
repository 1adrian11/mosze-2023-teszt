#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //hibas valtozonev
    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0; i<100; i++) //hianyos ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<100; i++) //max ertek hiany
    {
        std::cout << "Ertek:" << b[i] << std::endl; //adott elem megadasa, ";" hiany
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]; //";" hiany
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag az alabbi erteket adja vissza: " << atlag << std::endl;

    return 0;
}
