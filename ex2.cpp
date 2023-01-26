/**
* Programme qui determine la somme d'interet et les mois associés pour un pret avec la somme 
* \file   ex2.cpp
* \author Van-Truong Vo
* \date   22/01/2023
* Créé le 16 janvier 2008
*/
#include <iostream>
#include <cmath>
bool verification(double entree, int borne_inferieur, float borne_superieur ){
    // verifie la validite de l'entree
    if (borne_inferieur<entree && entree < borne_superieur) return true;
    else return false;
}

int main()
{
    double montant_pretee {-1}, repaie_mois{-1}, taux_annuel{-1}; 
    while (!(verification(montant_pretee, 0, INFINITY))) { // redemande la question si la valeur n'est pas valide
        std::cout << "Quel est la somme d'argent pretee? ";
        std::cin >> montant_pretee;
    }
    while (!(verification(repaie_mois, 0, INFINITY))) { // redemande la question si la valeur n'est pas valide
        std::cout << "Combien d'argent par mois remboursez-vous? ";
        std::cin >> repaie_mois;
    }
    while (!(verification(taux_annuel, 0, 100))){ // redemande la question si la valeur n'est pas valide
        std::cout << "Quel est le taux d'interet annuel? ";
        std::cin >> taux_annuel;
    }

    double taux_mensuel = taux_annuel/12;
    double sommme_interet{0}, total_repaie{0};
    double dette_originelle = montant_pretee;
    int mois_repaie{0};
    while (montant_pretee != 0){
        montant_pretee -= repaie_mois;
        total_repaie += repaie_mois;
        montant_pretee*= (1+(taux_mensuel/100));
        mois_repaie += 1;
        if (repaie_mois >= montant_pretee) {
            total_repaie += montant_pretee;
            montant_pretee = 0;
            mois_repaie += 1;
        
        }
    }
sommme_interet = total_repaie - dette_originelle; 
std::cout << "Mois pour repayer: " << mois_repaie << std::endl;
std::cout << "Somme d'interet : " << sommme_interet;
return 0;
}