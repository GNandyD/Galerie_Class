#include <iostream>
#include "Galerie.h"


using namespace std;

int main()
{
    Galerie galerie;

     galerie.Stocker("Image1.jpg");
     galerie.Stocker("Image2.png");

    cout << "Vos Images" << endl;

    galerie.Afficher_Images();

    return 0;
}
