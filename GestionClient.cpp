#include "GestionClient.h"

namespace NS_services
{
	GestionClient::GestionClient(void)
	{
		this->gestserv = gcnew NS_Composants::GestServ();
		this->client = gcnew NS_Composants::Client();
		this->ds = gcnew Data::DataSet();
	}
	DataSet^ GestionClient::listeClient(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->gestserv->getRows(this->client->SELECT(), dataTableName);
		return this->ds;
	}
	int GestionClient::ajouter(int Noclient, 
		String^ Nom_client, 
		String^ Prnom_client, 
		int DateNaiss_cl,
		int Code_client,
		String^ Adr_Facturation,
		String^ Adr_Livraison)
	{
		int Noclient=0;
		this->client->setNom_client(Nom_client);
		this->client->setPrnom_client(Prnom_client);
		this->client->setDateNaiss_Cl(DateNaiss_cl);
		this->client->setCode_client(Code_client);
		this->client->setAdr_Facturation(Adr_Facturation);
		this->client->setAdr_Livraison(Adr_Livraison);

		Noclient = this->gestserv->actionRowsID(this->client->INSERT());
		return Noclient;
	}

	void GestionClient::modifier(int Noclient, String^ Nom_client,
		String^ Prnom_client,int DateNaiss_cl,int Code_client,
		String^ Adr_Facturation,String^ Adr_Livraison)
	{
		int Noclient=0;
		this->client->setNom_client(Nom_client);
		this->client->setPrnom_client(Prnom_client);
		this->client->setDateNaiss_Cl(DateNaiss_cl);
		this->client->setCode_client(Code_client);
		this->client->setAdr_Facturation(Adr_Facturation);
		this->client->setAdr_Livraison(Adr_Livraison);
		this->gestserv->actionRows(this->client->UPDATE());
	}
	void GestionClient::supprimer(int Noclient)
	{
		this->client->setNoclient(Noclient);
		this->gestserv->actionRows(this->client->DELETE());
	}

}