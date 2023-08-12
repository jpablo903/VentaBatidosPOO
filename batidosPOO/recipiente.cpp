#include "recipiente.h"

Recipiente::Recipiente(){

    _capacidad;
    _cantidad;

}

float Recipiente::getCapacidad(){
    return _capacidad;
}

float Recipiente::getCantidad(){
    return _cantidad;
}

void  Recipiente::setCapacidad(float capacidad){
    _capacidad = capacidad;
}

void Recipiente::setCantidad(float cantidad){
    if(cantidad <= _capacidad){
        _cantidad = cantidad;
    }else{
        _cantidad == _capacidad;
    }
}
