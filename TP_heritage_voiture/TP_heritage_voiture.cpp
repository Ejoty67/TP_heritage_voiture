/* https://www.youtube.com/watch?v=QDia3e12czc */ 

#include <iostream>
#include "Vehicule.h"

int main()
{    
    //creation des objet vehicule, voiture et bus
    Vehicule a("Alpine", 800, 0);
    Voiture b("Renault", 300, 10, "suv");
    Voiture c("Mercerdes", 600, 5, "4x4");
    Bus bus("Air France", 500, 700, 40, 3);
    // test de la classe vehicule
    a.lire_caracteristiques();
    a.parcourir(50);
    a.parcourir(25);
    a.lire_caracteristiques();

    // onn affiche pour la premiere voiture
    std::cout << "\n\nVoiture 1\n" << std::endl;
    b.lire_caracteristiques();
    b.parcourir(500);
    b.parcourir(250);
    b.lire_caracteristiques();
    b.lire_type();

    // onn affiche pour la deuxieme voiture
    std::cout << "\n\nVoiture 2\n" << std::endl;
    c.lire_caracteristiques();
    c.parcourir(33);
    c.parcourir(34);
    c.lire_caracteristiques();
    c.lire_type();

    //on affiche pour le bus
    std::cout << "\n\nBus\n" << std::endl;
    bus.lire_caracteristiques();
    bus.parcourir(800);
    bus.parcourir(654);
    bus.lire_caracteristiques();
    bus.info_bus();
}
