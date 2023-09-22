#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;


class Lego
{
    private:
        string size; //tamaño del lego y grosor 
        int cantidad; //Cantidad de legos que se ocupan
        string figura; //si tiene forma especial como escalera, pieza de puerta, pieza de ventana o bloque normal

    public:

    Lego(string pSize, int pCantidad, string pFigura)
        {
            this->size = pSize;
            this->cantidad = pCantidad;
            this->figura = pFigura;
        }

        string getNombreFigura() //Retorna el nombre de las figura que se quiere utilizar
        {
            return figura;
        }

        int getCanidadLegos() //Retorna la cantidad de legos
        {
            return cantidad;
        }
        string getSizeLego() //Retorna el precio del producto
        {
            return size;
        }

};

class PartsCasa
{
    private:
        string nomParte; //si se quiere especificamente: una pared, un piso, terraza, piscina, pared con ventana o pared con puerta


    public:

    PartsCasa(string pNomParte)
        {
            this->nomParte = pNomParte;
        }

        string getNombreParteCasa() //Retorna el nombre de la parte de la casa que se quiere construir
        {
            return nomParte;
        }
};

class PartsCasa : public Lego
{

};