#pragma once
#include "GestionService.h"
#include "Commande.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_services
{
	ref class GestionCommande
	{
	private:
		NS_Composants::GestServ^ gestserv;
		NS_Composants::Commande^ commande;
		DataSet^ ds;
	public:
		GestionCommande(void);
		DataSet^ listeCommande(String^);
		DataSet^ listeArticle(String^);
		int ajouter_Commande(String^, String^);
		void modifier_Commande(int, String^, String^);
		void supprimer_Commande(int);
		void Afficher_Commande(String^);
		void Afficher_Prix_Article(int);
		void Afficher_un_Article(String^);
	};
}

