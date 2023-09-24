#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // hiányzik a "_"
    std::cout << '1-100 ertekek duplazasa' // endl szükséges formázás miatt, ; hiányzik
    for (int i = 0;) // hiányzik az az i++, illetve a feltétel, i=1
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // i--> "i<=N_ELEMENTS"-re változtatása szükséges, i=1
    {
        std::cout << "Ertek:" //hiányzik a változó(b[i]) kiírása illetve az endl formázás miatt, ; 
    }    
    std::cout << "Atlag szamitasa: " << std::endl;  
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // vessző helyett ; illetve a feltételnél meg kell engedni az egyenlőséget is
    {
        atlag += b[i] // ; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
