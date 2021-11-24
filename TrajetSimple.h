
#if ! defined ( TRAJET_SIMPLE_H )
#define TRAJET_SIMPLE_H
#include "Trajet.h"


class TrajetSimple : public Trajet {

public:

    TrajetSimple (const TrajetSimple&);
    TrajetSimple();
	TrajetSimple (const char* ,const char* ,const char*);
    
    void afficher() const;
    ~TrajetSimple();


protected:

	char* moyTrans;
};

#endif 


