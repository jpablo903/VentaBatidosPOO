#include "bidon.h"

BidonDeBatido::BidonDeBatido(){

    _sabor;
    _capacidad;
    _cantidad;
}

string BidonDeBatido::getSabor(){
    return _sabor;
}


void BidonDeBatido::setSabor(string sabor){
    _sabor = sabor;
}

void BidonDeBatido::recargar(float recargar){
    if(recargar<_capacidad) _cantidad = recargar;
}
void BidonDeBatido::servir(float cantidadAservir){
    _cantidad -= cantidadAservir;
}



