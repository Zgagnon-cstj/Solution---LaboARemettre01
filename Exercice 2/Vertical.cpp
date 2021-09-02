//But: Ecrire un programme qui v#rifie si un nombre est constitu# de 5 chiffres
//Auteur: Zachary GAGNON
//date: 2021-02-08
#include<iostream>
using namespace std;
void main()
{
	int number; // nombre entrer par l'utilisateur
	cout << "Entrer un nombre a cinq chiffres :";
	cin >> number;



	if (number >= 10000 && number <= 99999) // si le nombre est plus haut ou egal a 10000
											// ou si le nombre est plus petit ou egal a 99999 le code affiche le nombre sous forme verticale
	{
		cout << number;
	}
	else                                   //sinon le code affiche ce message
	{
		cout << "Ce nombre ne contiens pas 5 chiffres";
	}
}
// test : 12345 nombre afficher
//        123456 message afficher
//        99999 nombre afficher 
//        9999 message afficher