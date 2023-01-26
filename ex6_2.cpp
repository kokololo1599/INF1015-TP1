/**
* Programme qui détermine si une année lue du clavier est bissextile.
* file  ex6_2.cpp
* author Luca Zama et David Vo
* date   25/01/2022
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream> 
const int NOMBRE_MOTS = 4; //nombe de mots dans le fichier .txt

struct motStruct {
    std::string mot;
    std::string natureGenre;
    std::string definition;
};

int main() {
   
    motStruct motTab[NOMBRE_MOTS];
    
    std::ifstream file("dictionnaire.txt");
    std::string line;
    int biggestWordIndex = 0;
    int maxLetters = 0;
    int i = 0;
    // ici on met les données du fichier dans le tableay motTab qui contient des éléments motStruct
    while (getline(file, line) && i < NOMBRE_MOTS) {
        std::stringstream lineString(line);
        getline(lineString, motTab[i].mot, '\t');
        getline(lineString, motTab[i].natureGenre, '\t');
        getline(lineString, motTab[i].definition);
        
        i++;
    }
    // on trouve l'index du mot le plus long dans le fichier .txt
    for(int k = 0; k < NOMBRE_MOTS; k++){
        if (motTab[k].mot.length() > maxLetters){
            biggestWordIndex = k;
            maxLetters = motTab[k].mot.length();
        }

    }
    
    std::cout << "le mot le plus long est: " << motTab[biggestWordIndex].mot 
    << " (" << motTab[biggestWordIndex].natureGenre << ") : " 
    << motTab[biggestWordIndex].definition;



    
    
    return 0;
}