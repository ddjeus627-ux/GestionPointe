// GestionPointe.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
	Point p1, p2, p3;
	float valeur;

	std::cout << "Gestion Points\n";
	cout << "les points sont :\n";

	p1.affiche();
	p2.affiche();
	p3.affiche();

	cout << "Entrez l'abscisse de p1 : ";
	cin >> valeur;
	p1.setAbscisse(valeur);

	cout << "Entrez l'ordonnee de p1 : ";
	cin >> valeur;
	p1.setOrdonnee(valeur);

	cout << "Entrez l'abscisse de p2 : ";
	cin >> valeur;
	p2.setAbscisse(valeur);

	cout << "Entrez l'ordonnee de p2 : ";
	cin >> valeur;
	p2.setOrdonnee(valeur);

	cout << "Entrez l'abscisse de p3 : ";
	cin >> valeur;
	p3.setAbscisse(valeur);

	cout << "Entrez l'ordonnee de p3 : ";
	cin >> valeur;
	p3.setOrdonnee(valeur);

	cout << "Les points sont :" << endl;

	p1.affiche();
	p2.affiche();
	p3.affiche();

	cout << endl;

	cout << "Deplacement de p1 :" << endl;

	p1.deplace(2, 3);

	cout << "p1 apres deplacement : ";
	p1.affiche();

	cout << endl;

	cout << "Distance de p1 :" << endl;
	p1.distance();

	cout << endl;

	cout << "Distance de p2 :" << endl;
	p2.distance();

	cout << endl;

	cout << "Distance de p3 :" << endl;
	p3.distance();

	Point symP1;
	symP1 = p1.symetrie();

	cout << "Le symetrie de p1 est :\n";
	symP1.affiche();
}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
