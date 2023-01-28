/**
* Programme qui détermine si une année lue du clavier est bissextile.
* file  ex4.cpp
* author David Vo et Luca Zama
* date   22/01/2022
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> // for setprecision() and fixed
double nombre_aleatoire(){
    return ((double)std::rand() / RAND_MAX) * 2 - 1;
}
int main(){
    #define PI 3.141593
    std::srand(std::time(nullptr));
    int nb_iterations = 0, iterations_cercle = 0;
    std::cout << "Nombre d'iterations? " << std::endl;
    std::cin >> nb_iterations;

    for (int i=0; i<nb_iterations; i++) {
        double x = nombre_aleatoire();
        double y = nombre_aleatoire();
        if (x*x + y*y <= 1) {
            iterations_cercle++;
        }
    }
    double pi_approximation = float(4.0000000*iterations_cercle/nb_iterations);
    // vrai float
    // probabilite du cercle = pi/4
    std::cout<< std::setprecision(6) <<std::fixed ;
    std::cout << "Approximation du pi : " << pi_approximation << "\n";
    std::cout << "Ecart relatif entre l'approximation et la normale : " 
    << std::abs((pi_approximation - PI)/PI) << "%";
    
    
    
}