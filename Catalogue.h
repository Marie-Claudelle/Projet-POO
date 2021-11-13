#pragma once

using namespace System;

namespace NS_Composants
{
	ref class Catalogue
	{
	private:
		int Ref_produit;
		int Prix_produitht;
		String^ Design_produit;
		int Qte_Commande;
		int Qte_stockProduit;
		int Seuil_ReapproviProduit;
		int TauxTVA;
	public:
		Catalogue(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setRef_Produit(int);
		void setDesign_Produit(String^);
		void setPrix_ProduitHT(int);
		void setQte_Commande(int);
		void setQte_stockProduit(int);
		void setSeuil_ReapproviProduit(int);
		void setTauxTVA(int);

		int getRef_Produit(void);
		int getPrix_ProduitHT(void);
		int getQte_Commande(void);
		int getQte_stockProduit(void);
		int getSeuil_ReapproviProduit(void);
		int getTauxTVA(void);
		String^ getDesign_Produit(void);
	};
}
