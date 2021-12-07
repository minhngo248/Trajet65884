/*************************************************************************
                           Trajet  - definition d'un trajet
                             -------------------
    d�but                : 23 novembre 2021
    copyright            : (C) 2021 par NGO Ngoc Minh, PHAM Quoc Viet
*************************************************************************/

//---------- Interface de la <Trajet> (fichier Trajet.h) ------
#if ! defined TRAJET_H
#define TRAJET_H
// R�le de la classe <Trajet>
//
//
//------------------------------------------------------------------------
class Trajet {
//----------------------------------------------------------------- PUBLIC
public:
//----------------------------------------------------- M�thodes publiques
  
	virtual char* GetVille(int) const;
	// Mode d'emploi : 
    //	
	virtual void GetTrajet( char* , char* ) const;
	// Mode d'emploi : prendre la Ville Depart et la Ville Arrivee d'un Trajet
    //	
    virtual void Afficher(const int) const;
	// Mode d'emploi : afficher les caracteristique d'un Trajet : la Ville Depart, 
	// la Ville Arrivee et le Moyen de Transport
	//
//-------------------------------------------- Constructeurs - destructeur	
	Trajet ( const char* uneVilleDepart = "\0" , const char* uneVilleArrivee = "\0");
	// Mode d'emploi (constructeur) : Cr�er un trajet � partir d'une ville de d�part et
	// une ville d'arriv�e
	//     
    Trajet (const Trajet&);
    // Mode d'emploi (constructeur de copie) : Cr�er une copie d'un Trajet
    //
    //
	virtual ~Trajet();
	// Mode d'emploi (destructeur) : liberer les memoires de la VilleDepart et villeArrivee
	//
protected:
//----------------------------------------------------- Attributs prot�g�s	
	char* villeDepart;
	char* villeArrivee;
};
#endif // ! defined (TRAJET_H)
