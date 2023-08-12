#include <iostream>
#include <string.h>

#include "recipiente.h"
#include "bidon.h"
#include "vaso.h"
using namespace std;

int main(){
    BidonDeBatido b[3];

    b[0].setCapacidad(20);
    b[0].setCantidad(20);
    b[0].setSabor("Banana");

    b[1].setCapacidad(35);
    b[1].setCantidad(35);
    b[1].setSabor("Anana");

    b[2].setCapacidad(44);
    b[2].setCantidad(44);
    b[2].setSabor("Sandia");

    Vaso v[3];
    v[0].setCodigo(1);
    v[1].setCodigo(2);
    v[2].setCodigo(3);

    v[0].setCapacidad(0.150);
    v[1].setCapacidad(0.200);
    v[2].setCapacidad(0.300);

    v[0].setCantidad(0.150);
    v[1].setCantidad(0.200);
    v[2].setCantidad(0.300);


    int opc, opc2;
    float descontar{0};

        cout << ">>SISTEMA DE VENTA DE BATIDOS<<" << endl;
        cout << "Seleccione el sabor del batido: " <<endl;
        cout << "1. Batido de Banana" << endl;
        cout << "2. Batido de Anana" << endl;
        cout << "3. Batido de Sandia" << endl;
        cout << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >>opc;

    while(opc!=0){

        cout << "Seleccione el tamanio del batido: "<<endl;
        cout << "1. Batido de 150ml" << endl;
        cout << "2. Batido de 200ml" << endl;
        cout << "3. Batido de 300ml" << endl;
        cout << "Opcion: ";
        cin >>opc2;

        cout << opc2 << endl;

        descontar = v[opc2-1].getCantidad();
        b[opc-1].servir(descontar);

        system("cls");

        cout << ">>SISTEMA DE VENTA DE BATIDOS<<" << endl;
        cout << "Seleccione el sabor del batido: " <<endl;
        cout << "1. Batido de Banana" << endl;
        cout << "2. Batido de Anana" << endl;
        cout << "3. Batido de Sandia" << endl;
        cout << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >>opc;

    }

    system("cls");

    cout << "SISTEMA DE BATIDOS: INFORMES DE SOBRANTES" << endl;
    cout << "-----------------------------------------" << endl;
    for(int i=0; i<3; i++){
        cout << "El bidon de sabor " << b[i].getSabor() << " le quedo una cantidad de: " << b[i].getCantidad() << endl;
    }


return 0;}
