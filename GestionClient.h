#pragma once
#include "GestionService.h"
#include "Client.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_services
{
	ref class GestionClient
	{
	private:
		NS_Composants::GestServ^ gestserv;
		NS_Composants::Client^ client;
		DataSet^ ds;
	public:
		GestionClient(void);
		DataSet^ listeClient(String^);
		int ajouter(int, String^, String^, int, int, String^, String^);
		void modifier(int, String^, String^, int, int, String^, String^);
		void supprimer(int);
	};
}
