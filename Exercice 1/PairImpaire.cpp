//But: Ecrire un programme qui determine si un entier est pair ou impaire.
//Auteur:Zachary GAGNON
//Date:2021-02-08

#include<iostream>

void main()
{
	int Nombre1; // Nombre entré par l'utilisateur
	

	std::cout << "Entrer un nombre entier:"; //Demander a l'utilisateur d'entrer un nombre entier
	std::cin >> Nombre1;
	//std::cout << Nombre1  //Ligne pour verifier code

	
	if (Nombre1 %2 == 0)
	{
		std::cout << Nombre1 << " est un nombre pair";
	}
	else
	{
		std::cout << Nombre1 << " est un nombre impaire";
	}

}
// tests: 156 pair
//        -2  pair
//		  -13485729 impair
//        51728392 pair
//        9837462517382 error