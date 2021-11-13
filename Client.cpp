#include "Client.h"
namespace NS_Composants
{
	Client::Client(void)
	{
		this->Noclient = 0;
		this->Nom_client = "RIEN";
		this->Prnom_client = "RIEN";
		this->DateNaiss_cl = 01012000;
		this->Code_client = 01;
		this->Adr_Facturation = "RIEN";
		this->Adr_Livraison = "RIEN";
	}
	String^ Client::SELECT(void)
	{
		return "SELECT Noclient, Nom_client, Prnom_client,DateNaiss_cl, Code_client, Adr_Facturation, Adr_Livraison" +
			"FROM Client;";
	}
	String^ Client::INSERT(void)
	{
		return "INSERT INTO Client " +
			"(Nom_client, Prnom_client,DateNaiss_cl, Adr_Facturation, Adr_Livraison) " +
			"VALUES('" + this->getNom_client() + "', '" + this->getPrnom_client() + "', '" + this->getDateNaiss_cl() + "', '" + this->getAdr_Facturation() + "', '" + this->getAdr_Livraison() + "');SELECT @@IDENTITY;";
	}
	String^ Client::UPDATE(void)
	{
		return "UPDATE Client " +
			"SET Nom_client = '" + this->getNom_client() + "', Prnom_client = '" + this->getPrnom_client() + "',,DateNaiss_cl = '" + this->getDateNaiss_cl() + "', Adr_Facturation= '" + this->getAdr_Facturation() + "', Adr_Livraison = '" + this->getAdr_Livraison() + "' " +
			"WHERE(Noclient = " + this->getNoclient() + ");";
	}
	String^ Client::DELETE(void)
	{
		return "DELETE FROM Client " +
			"WHERE(Noclient = " + this->getNoclient() + ");";
	}

	void Client::setNoclient(int No_client)
	{
		if (No_client > 0)
		{
			this->Noclient = No_client;
		}
	}

	void Client::setNom_client(String^ Nom_client)
	{
		if (Nom_client != "")
		{
			this->Nom_client = Nom_client;
		}
	}
	void Client::setPrnom_client(String^ Prnom_client)
	{
		if (Prnom_client != "")
		{
			this->Prnom_client = Prnom_client;
		}
	}
	void Client::setDateNaiss_Cl(int DateNaiss_cl)
	{
		if (DateNaiss_cl != 01012000)
		{
			this->DateNaiss_cl = DateNaiss_cl;
		}
	}
	void Client::setAdr_Facturation(String^ Adr_Facturation)
	{
		if (Adr_Facturation != "")
		{
			this->Adr_Facturation = Adr_Facturation;
		}
	}
	void Client::setAdr_Livraison(String^ Adr_Livraison)
	{
		if (Adr_Livraison != "")
		{
			this->Adr_Livraison = Adr_Livraison;
		}
	}
	int Client::getNoclient(void)
	{
		return this->Noclient;
	}
	String^ Client::getNom_client(void)
	{
		return this->Nom_client;
	}
	String^ Client::getPrnom_client(void)
	{
		return this->Prnom_client;
	}
	int Client::getDateNaiss_cl(void)
	{
		return this->DateNaiss_cl;
	}
	String^ Client::getAdr_Facturation(void)
	{
		return this->Adr_Facturation;
	}
	String^ Client::getAdr_Livraison(void)
	{
		return this->Adr_Livraison;
	}
}