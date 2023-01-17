#include <iostream>

int est_premier(int n)
{

if (n%2 == 0) return 2;
for (int i = 3; i*i <= n; i+=2){
    if  (n%i == 0)
        return i;
    else return 0;}
    return 0;
}

int main()
{
std::cout << "Entrer un nombre entier: " << std::endl;
int nombre;
std::cin >> nombre;
if (est_premier(nombre) == 0)
    std::cout << "Ce nombre est premier.";
else
    {std::cout << "Ce nombre n'est premier car il est divisible par" << est_premier(nombre) << ".";}



}