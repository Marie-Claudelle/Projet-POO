#pragma once

#include "GestionService.h"
#include"Personnel.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;


namespace NS_services
{
	ref class GestionPersonnel
	{
	private:
		NS_Composants::GestServ^ gestserv;
		NS_Composants::Personnel^ personnel;
		DataSet^ ds;
	public:
		GestionPersonnel(void);
		DataSet^ listePersonnels(String^);
		int ajouter_Personnel(String^, String^);
		void modifier_Personnel(int, String^, String^);
		void supprimer_Personnel(int);
	};
}

