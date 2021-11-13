#pragma once
using namespace System;

namespace NS_Composants 

{
	ref class Client
	{
	private:
		int Noclient;
		String^ Nom_client;
		String^ Prnom_client;
		int DateNaiss_cl;
		int Code_client;
		String^ Adr_Facturation;
		String^ Adr_Livraison;
	public:
		Client(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		
		void setNoclient(int);
		void setNom_client(String^);
		void setPrnom_client(String^);
		void setDateNaiss_Cl(int);
		void setCode_client(int);
		void setAdr_Facturation(String^);
		void setAdr_Livraison(String^);
		
		int getNoclient(void);
		String^ getNom_client(void);
		String^ getPrnom_client(void);
		int getDateNaiss_cl(void);
		int getCode_client(void);
		String^ getAdr_Facturation(void);
		String^ getAdr_Livraison(void);

	};
}


