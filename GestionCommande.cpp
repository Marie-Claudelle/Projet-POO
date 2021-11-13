
#include "GestionCommande.h"

namespace NS_services
{
	GestionCommande::GestionCommande(void)
	{
		this->gestserv = gcnew NS_Composants::GestServ();
		this->commande = gcnew NS_Composants::Commande();
		this->ds = gcnew Data::DataSet();
	}
	DataSet^ GestionCommande::listeCommande(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->gestserv->getRows(this->commande->SELECT(), dataTableName);
		return this->ds;
	}
	DataSet^ GestionCommande::listeArticle(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->gestserv->getRows(this->commande->SELECT(), dataTableName);
		return this->ds;
	}
	int GestionCommande::ajouter_Commande(String^ nom, String^ prenom)
	{
		int id_personne;
		this->commande->setNom(nom);
		this->commande->setPrenom(prenom);
		id_personne = this->gestserv->actionRowsID(this->commande->INSERT());
		return id_personne;
	}​​

}
/*

void GestionCommande::modifier(int id_personne, String^ nom, String^ prenom)
{​​

this->commande->setID(id_personne);
this->commande->setNom(nom);
this->commande->setPrenom(prenom);
this->gestserv->actionRows(this->commande->UPDATE());
}​​
void GestionCommande::supprimer(int id_personne)
{​​
this->commande->setID(id_personne);
this->gestserv->actionRows(this->commande->DELETE());
}​​
void GestionCommande::Afficher_Commande(String^)
{​​
}​​
void GestionCommande::Afficher_Prix_Article(int)
{​​
}​​
void GestionCommande::Afficher_un_Article(String^)
{​​
}​​
*/