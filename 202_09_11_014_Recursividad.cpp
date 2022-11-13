// 202_09_11_014_Recursividad
//Daniel Callejas Rayón
// ver recursividad
#include <iostream>
void invertir(int num)
{
    if (num != 0)
    {
        invertir(num / 2);
        std::cout << num % 2;
    }
}

int main()
{
    int decimal;
        std::cout << "Dame un numero para convertirlo en binario: \n";
        std::cin >> decimal;
        invertir(decimal);
    std::cout << "\n\n";
}
