#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];   // N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'  // hiányzika
    for (int i = 0;)   // Hiányzikaz i++
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)    // végtelen loop
    {
        std::cout << "Ertek:"  // érték hiáynzik, ;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;    // inicializálás hiáynzik
    for (int i = 0; i < N_ELEMENTS, i++)   // ;
    {
        atlag += b[i]   %% ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}