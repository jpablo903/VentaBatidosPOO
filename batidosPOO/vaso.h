#ifndef VASO_H_INCLUDED
#define VASO_H_INCLUDED
#include "recipiente.h"
#include "bidon.h"
using namespace std;

class Vaso:public BidonDeBatido{

    private:
        int _codigo;

    public:

        int getCodigo();

        void setCodigo(int);

        Vaso();

};

#endif // VASO_H_INCLUDED
