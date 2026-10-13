#pragma once
#include <string>
using namespace std;
class Vehicule
{
	private:
		string marque;
		int puissance;
		int kilometrage;

	public:
		Vehicule(string m, int p, int k);
		void parcourir(int distance);
		void lire_caracteristiques();

};

class Voiture : public  Vehicule
{
	private:
		string type;

	public:
		void lire_type();
		Voiture(string m, int p, int k, string t);
};


class Bus : public Vehicule
{
	private:
		int place;
		int essieux;

	public:
		Bus(string m, int p, int k, int pla, int e);
		void info_bus();

};

