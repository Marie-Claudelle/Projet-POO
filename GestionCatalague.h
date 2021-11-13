#pragma once
#include "GestionService.h"
#include "Catalogue.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_services
{
	ref class GestionCatalogue 
	{
	private:
		NS_Composants::GestServ^ gestserv;
		NS_Composants::Catalogue^ catalogue;
		DataSet^ ds;
	public:
		GestionCatalogue(void);
		DataSet^ listeArticle(String^);
		int ajouter(int, String^, int, int, int, int, int);
		void modifier(int, String^, int, int, int, int, int);
		void supprimer(int);
		void Afficher_Prix_Article(int);
	};
}