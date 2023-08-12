#include "recipiente.h"
#include "bidon.h"
#include "vaso.h"

Vaso::Vaso(){
    _codigo;
}

int Vaso::getCodigo(){
    return _codigo;
}

void Vaso::setCodigo(int codigo){
    _codigo=codigo;
}
