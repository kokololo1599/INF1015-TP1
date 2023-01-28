/**
* Programme qui détermine si une année lue du clavier est bissextile.
* file  ex3.cpp
* author David Vo et Luca Zama
* date   22/01/2022
*/
#include <iostream>
#include <cmath>
const double GRAVITE = 9.811;
bool verification(double entree, int borne_inferieur, float borne_superieur ){
    // verifie la validite de l'entree
    if (borne_inferieur<entree && entree < borne_superieur) return true;
    else return false;
}
int main(){
    double hauteur_initial{-1};
    int nb_rebonds{-1};
    double coef_rebond{-1};
    double nouveau_hauteur{-1};

    while (!(verification(hauteur_initial, 0, INFINITY))){
        std::cout << "Quel est la hauteur initiale (en m)? ";
        std::cin >> hauteur_initial;
    }
    while(!(verification(nb_rebonds, 0, INFINITY))){
        std::cout << "Combien de rebonds? ";
        std::cin >> nb_rebonds;
    }
    while (!(verification(coef_rebond, 0, 1))) {
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