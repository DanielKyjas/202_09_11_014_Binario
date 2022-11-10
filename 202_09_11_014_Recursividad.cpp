// 202_09_11_014_Recursividad
//Daniel Callejas Rayón
// ver recursividad
#include <iostream>
void invertir(int num)
{
    std::string numbin2, numbin;
    int binario=1;
    do {
        binario * 2;
    } while (binario >= num);
    do {
        if (binario < num) {
            numbin2 = "0";
        }
        else {
            numbin2 = "1";
            binario - num;
        }
        numbin = numbin2 + numbin2;
    } while (num > 0);
    std::string invertir = numbin; 

}

int main()
{
    int numerito;
    do {
        std::cout << "Ingresa un numero de mas de 4 cifras: ";
        std::cin >> numerito;
        if (numerito < 0) {
            std::cout << "\nIngresa un numero entero y positivo de 4 cifras... \n";
        }
    } while (numerito < 0);
    invertir(numerito);
    std::cout << "\n\n";
}
