#include <iostream>
#include <cmath>
const double GRAVITE = 9.811;
int main(){
    double hauteur_initial{-1};
    int nb_rebonds{-1};
    double coef_rebond{-1};
    double nouveau_hauteur{-1};

    while (hauteur_initial <= 0){
        std::cout << "Quel est la hauteur initiale (en m)? ";
        std::cin >> hauteur_initial;
    }
    while(nb_rebonds <= 0){
        std::cout << "Combien de rebonds? ";
        std::cin >> nb_rebonds;
    }
    while (coef_rebond< 0 || coef_rebond>1) {
        std::cout << "Quel est le coefficient de rebond? ";
        std::cin >> coef_rebond;
    }
    for (int i=0; i<nb_rebonds; i++){
        double vitesse_initial = pow((2*hauteur_initial*GRAVITE), 0.5);
        double nouvelle_vitesse = coef_rebond*vitesse_initial;
        nouveau_hauteur = pow(nouvelle_vitesse, 2)/(2*GRAVITE);

    }
    std::cout << "La nouvelle hauteur est " << nouveau_hauteur << "m."; 
}