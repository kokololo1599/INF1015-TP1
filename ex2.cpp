#include <iostream>

int main()
{
double montant_pretee {-1}, repaie_mois{-1}, taux_annuel{-1}; 
while (montant_pretee <= 0) {
    std::cout << "Quel est la somme d'argent pretee? ";
    std::cin >> montant_pretee;
}
while (repaie_mois < 0) {
    std::cout << "Combien d'argent par mois remboursez-vous? ";
    std::cin >> repaie_mois;
    }
while (taux_annuel < 0 || taux_annuel > 100){
    std::cout << "Quel est le taux d'interet annuel? ";
    std::cin >> taux_annuel;
    }

double taux_mensuel = taux_annuel/12;
double sommme_interet{0};
int mois_repaie{0};
while (montant_pretee != 0){
    montant_pretee -= repaie_mois;
    sommme_interet += repaie_mois;
    montant_pretee*= (1+taux_mensuel/100);
    mois_repaie += 1;
    if (repaie_mois >= montant_pretee) {
        sommme_interet += montant_pretee;
        montant_pretee = 0;
        mois_repaie += 1;
    }
}
std::cout << "Mois pour repayer: " << mois_repaie << std::endl;
std::cout << "Somme d'interet : " << sommme_interet;
return 0;
}