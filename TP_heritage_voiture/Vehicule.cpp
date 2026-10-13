#include "Vehicule.h"
#include <iostream>

Vehicule::Vehicule(string m, int p, int k)
// constucteur de la classe
{
	marque = m;
	puissance = p;
	kilometrage = k;

}

void Vehicule::parcourir(int distance)
// permet de parcourir une distance avec le vehicule
{
	kilometrage = kilometrage + distance;
	std::cout << "Vous avez parcouru : " << distance<<std::endl;
}

void Vehicule::lire_caracteristiques()
// permet de lire les caracteristiques d'un véhicule
{
	std::cout << "Voici les caracteristiques du vehicule\n";
	std::cout << "Marque : " << marque;
	std::cout << "\nPuissance : " << puissance;
	std::cout << "\nKilometrage : " << kilometrage<<std::endl;
}


// methode de la classe Voiture
void Voiture::lire_type()
{
	std::cout << "Voici le type de la voiture : " << type;
}

Voiture::Voiture(string m, int p, int k, string t) : Vehicule(m, p, k)
// constucteur de la classe
{
	if (t == "berline" || t == "suv" || t == "4x4" || t == "break") {
		type = t;
	}
	else {
		type = "Mauvais type les seul possible sont : [berline],[suv],[4x4],[break]";
	}

}

Bus::Bus(string m, int p, int k, int pla, int e) : Vehicule(m, p, k)
// constucteur de la classe
{
	place = pla;
	essieux = e;
}

void Bus::info_bus()
// affiche le nombre de place et d'essieux du bus
{
	std::cout << "Le bus a : " << place << " place assise et " << essieux << " essieux" << std::endl;
}

