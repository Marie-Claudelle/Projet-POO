#pragma once

using namespace System;

namespace NS_Composants
{
	ref class Personnel
	{
	private:
		String^ Pnom_prsnl;
		String^ Nom_prsnl;
		String^ Adrss_prsnl;
		int Date_prsnl;
		String^ Sh_prsnl;
		String^ Poste_prsnl;
	public:
		Personnel(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setPnom_prsnl(String^);
		void setNom_prsnl(String^);
		void setAdrss_prsnl(String^);
		void setDate_prsnl(int);
		void setSH_prsnl(String^);
		void setPoste_prsnl(String^);
		String^ getPnom_prsnl(void);
		String^ getNom_prsnl(void);
		String^ getAdrss_prsnl(void);
		int getDate_prsnl(void);
		String^ getSh_prsnl(void);
		String^ getPoste_prsnl(void);
	};
}

