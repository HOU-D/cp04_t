#include <iostream>

// Classe abstraite avec une méthode abstraite
class Forme {
public:
    // Méthode abstraite pure
        void dessiner(){
        std::cout << "Dessine un cercle." << std::endl;
    }

    // Destructeur virtuel
    virtual ~Forme() {
    }
};


int main() {
    // Tentative d'instanciation directe de la classe abstraite
    // Cela provoquera une erreur de compilation
    // Forme forme;  // Cette ligne déclencherait une erreur

    // Utilisation d'un pointeur vers la classe abstraite
    Forme cercle ;

   

    return 0;
}
