#ifndef BIDON_H_INCLUDED
#define BIDON_H_INCLUDED
#include <string>
#include "recipiente.h"
using namespace std;

class BidonDeBatido:public Recipiente{
    protected:
        string _sabor;

    public:
        string getSabor();

        void setSabor(string);

        void servir(float servir);
        void recargar(float recargar);

        BidonDeBatido();
};

#endif // BIDON_H_INCLUDED
