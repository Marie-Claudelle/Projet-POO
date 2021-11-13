#include "Catalogue.h"

namespace NS_Composants
{
    Catalogue::Catalogue(void)
    {
        this->Ref_produit = -1;
        this->Design_produit = "RIEN";
        this->Prix_produitht = -1;
        this->Qte_stockProduit = -1;
        this->Seuil_ReapproviProduit = -1;
        this->TauxTVA = -1;
        this->Qte_Commande = -1;
    }
    String^ Catalogue::SELECT(void)
    {
        return "SELECT Ref_produit, Design_produit,Prix_produitht, Qte_stockProduit, Seuil_ReapproviProduit, TauxTVA, Qte_Commande " +
            "FROM Catalogue;";
    }
    String^ Catalogue::INSERT(void)
    {
        return "INSERT INTO Catalogue " +
            "( Ref_produit, Design_produit, Prix_produitht, Qte_stockProduit, Seuil_ReapproviProduit, TauxTVA, Qte_Commande) " +
            "VALUES('" + this->getRef_Produit() + "', '" + this->getDesign_Produit() + "', '" + this->getPrix_ProduitHT() + "','" + this->getQte_stockProduit() + "','" + this->getSeuil_ReapproviProduit() + "', '" + this->getTauxTVA() + "',  '" + this->getQte_Commande() + "');SELECT @@IDENTITY;";
    }
    String^ Catalogue::UPDATE(void)
    {
        return "UPDATE Catalogue " +
            "SET Ref_produit = '" + this->getRef_Produit() + "', Design_produit = '" + this->getDesign_Produit() + "',Prix_produitht = '" + this->getPrix_ProduitHT() + "',Qte_stockProduit = '" + this->getQte_stockProduit() + "',Seuil_ReapproviProduit = '" + this->getSeuil_ReapproviProduit() + "', TauxTVA = '" + this->getTauxTVA() + "', Qte_Commande  = '" + this->getQte_Commande() + "' " +
            "WHERE(Ref_Produit = " + this->getRef_Produit() + ");";
    }
    String^ Catalogue::DELETE(void)
    {
        return "DELETE FROM Catalogue " +
            "WHERE(Ref_Produit = " + this->getRef_Produit() + ");";
    }

    void Catalogue::setRef_Produit(int Ref_Produit)
    {
        if (Ref_Produit > 0)
        {
            this->Ref_produit = Ref_Produit;
        }
    }
    void Catalogue::setPrix_ProduitHT(int Prix_produitht)
    {
        if (Prix_produitht > 0)
        {
            this->Prix_produitht = Prix_produitht;
        }​​​​​​
    }​​​​

}


/*
       
       
       void Catalogue::setSeuil_ReapproviProduit(int Seuil_ReapproviProduit)
       {​​​​​​
           if (Seuil_ReapproviProduit > 0)
           {​​​​​​
               this->Seuil_ReapproviProduit = Seuil_ReapproviProduit;
           }​​​​​​
       }​​​​​​
       void Catalogue::setTauxTVA(int TauxTVA)
       {​​​​​​
           if (TauxTVA > 0)
           {​​​​​​
               this->TauxTVA = TauxTVA;
           }​​​​​​
       }​​​​​​
       void Catalogue::setQte_Commande(int Qte_Commande)
       {​​​​​​
           if (Qte_Commande > 0)
           {​​​​​​
               this->Qte_Commande = Qte_Commande;
           }​​​​​​
       void Catalogue::setDesign_Produit(String^ Design_Produit)
       {​​​​​​
           if (Design_Produit != "")
           {​​​​​​
               this->Design_Produit = Design_Produit;
           }​​​​​​
       }​​​​​​

       int Catalogue::getQte_stockProduit(void)
      {​​​​​​
          return this->Qte_stockProduit;

       int Catalogue::getSeuil_ReapproviProduit(void)
      {​​​​​​
          return this->Seuil_ReapproviProduit;

        int Catalogue::getProduitHT(void)
      {​​​​​​
          return this->ProduitHT;

           int Catalogue::getRef_Produit(void)
      {​​​​​​
          return this->Ref_Produit;


      int Catalogue::getTauxTVA(void)
      {​​​​​​
          return this->TauxTVA;

      }​​​​​​
      int Catalogue::getQte_Commande(void)
      {​​​​​​
          return this->Qte_Commande;

      }​​​​​​
      String^ Catalogue::getDesign_Produit(void)
      {​​​​​​
          return this->Design_Produit;

      }​​​​​​

}​​​​​​*/