#include "GestionCatalague.h"

namespace NS_services
{
	GestionCatalogue::GestionCatalogue(void)
	{
		this->gestserv = gcnew NS_Composants::GestServ();
		this->catalogue = gcnew NS_Composants::Catalogue();
		this->ds = gcnew Data::DataSet();
	}
	DataSet^ GestionCatalogue::listeArticle(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->gestserv->getRows(this->catalogue->SELECT(), dataTableName);
		return this->ds;
	}
	int GestionCatalogue::ajouter(int Ref_produit, String^ Design_produit,
		int Qte_stockProduit, int Seuil_ReapproviProduit, int Qte_Commande,
		int TauxTVA, int Prix_produitht)
	{
		int Ref_produit = 0;
		this->catalogue->setRef_Produit(Ref_produit);
		this->catalogue->setDesign_Produit(Design_produit);
		this->catalogue->setQte_stockProduit(Qte_stockProduit);
		this->catalogue->setSeuil_ReapproviProduit(Seuil_ReapproviProduit);
		this->catalogue->setQte_Commande(Qte_Commande);
		this->catalogue->setTauxTVA(TauxTVA);
		this->catalogue->setPrix_ProduitHT(Prix_produitht);

		Ref_produit = this->gestserv->actionRowsID(this->catalogue->INSERT());
		return Ref_produit;
	}
	void GestionCatalogue::modifier(int Ref_produit, String^ Design_produit,
		int Qte_stockProduit, int Seuil_ReapproviProduit,
		int Qte_Commande, int TauxTVA, int Prix_produitht)
	{
		this->catalogue->setRef_Produit(Ref_produit);
		this->catalogue->setDesign_Produit(Design_produit);
		this->catalogue->setQte_stockProduit(Qte_stockProduit);
		this->catalogue->setSeuil_ReapproviProduit(Seuil_ReapproviProduit);
		this->catalogue->setQte_Commande(Qte_Commande);
		this->catalogue->setTauxTVA(TauxTVA);
		this->catalogue->setPrix_ProduitHT(Prix_produitht);
		this->gestserv->actionRows(this->catalogue->UPDATE());
	}
	void GestionCatalogue::supprimer(int Ref_produit)
	{
		this->catalogue->setRef_Produit(Ref_produit);
		this->gestserv->actionRows(this->catalogue->DELETE());
	}
}