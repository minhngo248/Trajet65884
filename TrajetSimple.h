#if ! defined ( TRAJET_SIMPLE_H )
#define TRAJET_SIMPLE_H
#include "Trajet.h"


class TrajetSimple : public Trajet {

public:
	void SetTrajet(const char* ,const char* , const char* );
    TrajetSimple (const TrajetSimple&);
    TrajetSimple();
	TrajetSimple (const char* ,const char* ,const char*);
    
    void afficher() const;
    ~TrajetSimple();


protected:

	char moyTrans[50];
};

#endif 


