#ifndef RECIPIENTE_H_INCLUDED
#define RECIPIENTE_H_INCLUDED

using namespace std;

class Recipiente{
    protected:
        float _capacidad;
        float _cantidad;

    public:
        float getCantidad();
        float getCapacidad();

        void setCapacidad(float);
        void setCantidad(float);

        Recipiente();
};

#endif // RECIPIENTE_H_INCLUDED
