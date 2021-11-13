#pragma once
using namespace System;

namespace NS_Composants
{
	ref class Commande
	{
	private:
		int Ref_Commande;
		int Date_emission;
		int Date_Paiement;
		String^ Moyen_Paiement;
		int Ref_Article;
		String^ Nom_Article;
		int Qte_Article;
		String^ Nature_Article;
		int Tot_Article;
		int Mont_tot_HT;
		int Mont_tot_TVA;
		int Mont_tot_TTC;
		String^ Nom_Societe;
		String^ logo_Societe;
		String^ Couleur_Article;
		int Asr_Societe;
		int Num_Service;
		int Prix_UHTarticle;

	public:
		Commande(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setRef_Commande(int);
		void setDate_emission(int);
		void setDate_Paiement(int);
		void setMoyen_Paiement(String^);
		void setRef_Article(int);
		void setNom_Article(String^);
		void setQte_Article(int);
		void setNature_Article(String^);
		void setTot_Article(int);
		void setMont_tot_HT(int);
		void setMont_tot_TVA(int);
		void setMont_tot_TTC(int);
		void setNom_Societe(String^);
		void setlogo_Societe(String^);
		void setCouleur_Article(String^);
		void setAsr_Societe(int);
		void setNum_Service(int);
		void setPrix_UHTarticle(int);

		int getRef_Commande(void);
		int getDate_emission(void);
		int getDate_Paiement(void);
		String^ getMoyen_Paiement(void);
		int getRef_Article(void);
		String^ getNom_Article(void);
		int getQte_Article(void);
		String^ getNature_Article(void);
		int getTot_Article(void);
		int getMont_tot_HT(void);
		int getMont_tot_TVA(void);
		int getMont_tot_TTC(void);
		String^ getNom_Societe(void);
		String^ getlogo_Societe(void);
		String^ getCouleur_Article(void);
		int getAsr_Societe(void);
		int getNum_Service(void);
		int getPrix_UHTarticle(void);
	};
}

