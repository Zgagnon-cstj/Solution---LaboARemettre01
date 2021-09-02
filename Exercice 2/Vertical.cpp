//But: Ecrire un programme qui vérifie si un nombre est constitué de 5 chiffres et affice celui ci a la verticale si il a biens 5 chiffres
//Auteur: Zachary GAGNON
//date: 2021-02-08
#include<iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int number; // nombre entrer par l'utilisateur

	cout << "Entrer un nombre a cinq chiffres :"; //Demander a l'utilisateur d'inscrire un nombre
	cin >> number;

	if (number >= 10000 && number <= 99999) // si le nombre est plus haut ou egal a 10000
														// ou si le nombre est plus petit ou egal a 99999 le code affiche le nombre sous forme verticale
	{                        //Affichage de chaques nombre a la verticale
		cout << number / 10000 % 10 << endl;
		cout << number / 1000 % 10 << endl;
		cout << number / 100 % 10 << endl;
		cout << number / 10 % 10 << endl;
		cout << number % 10 << endl;
	}
	else if (number <= -10000 && number >= -99999) //si le nombre est entre -99999 et -100000  

	{                        //Affichage de chaques nombre a la verticale
		cout << number / 10000 % 10 << endl;
		cout << number / 1000 % 10 << endl;
		cout << number / 100 % 10 << endl;
		cout << number / 10 % 10 << endl;
		cout << number % 10 << endl;
		
	}
	else      //sinon le code affiche ce message
	{
		cout << "Ce nombre ne contiens pas 5 chiffres" << endl;
	}
	return 0;
}
// test : 12345 nombre afficher
//        123456 message afficher
//        1234 message afficher
//        -12345 nombre afficher
//        -1234 message afficher
//        -123456 message afficher
//        Lettre message afficher