#include <iostream>
using namespace std;

class ParkingSystem {
private:
    int big, medium, small; // Variables para almacenar la cantidad de espacios disponibles

public:
    // Constructor que inicializa los espacios disponibles para cada tipo de vehículo
    ParkingSystem(int b, int m, int s) {
        big = b;
        medium = m;
        small = s;
    }

    // Método para intentar agregar un coche al estacionamiento.
    // Cada condicional siguiente revisa si un auto es de el tamaño especificado y si hay espacio disponible
    //Si lo hago reduce el numero de espacios e indica si puede estacionar o no.
    bool addCar(int carType) {
        if (carType == 1 && big > 0) { 
            big--; 
            return true; 
        } else if (carType == 2 && medium > 0) { 
            medium--; 
            return true;
        } else if (carType == 3 && small > 0) { 
            small--; 
            return true; 
        }
        return false; // No hay espacio disponible para este tipo de coche
    }
};