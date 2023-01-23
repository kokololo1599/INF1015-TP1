#include <iostream>
#include <cstdlib>
#include <ctime>
double generate_rand(){
    return ((double)std::rand() / RAND_MAX) * 2 - 1;
}
int main(){
    #define PI 3.141593
    std::srand(std::time(nullptr));
    int nb_iterations = 0, iterations_cercle = 0;
    std::cout << "Nombre d'iterations? " << std::endl;
    std::cin >> nb_iterations;

    for (int i=0; i<nb_iterations; i++) {
        double x = generate_rand();
        double y = generate_rand();
        if (x*x + y*y <= 1) {
            iterations_cercle++;
        }
    }
    double pi_approximation = 4.00000000*iterations_cercle/nb_iterations;
    // probabilite du cercle = pi/4
    
    std::cout << "Approximation du pi : " <<pi_approximation << "\n";
    std::cout << "Difference entre l'approximation et la normale : " << (pi_approximation - PI);
    
    
    
}