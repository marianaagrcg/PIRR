#ifndef VUELO_H
#define VUELO_H

#include <string>
#include <vector>
using namespace std;

class Vuelo {
private:
    int numeroVuelo;
    string nombre;
    string destino;
    double precio;
    int duracion;
    int kilometros;
    string fecha;
    vector<string> pasajeros; 

public:
    Vuelo(int numeroVuelo, string nombre, string destino, double precio, int duracion, int kilometros);
    Vuelo();
    void setNumeroVuelo(int nv);
    void setNombre(string name);
    void setDestino(string d);
    void setPrecio(double p);
    void setDuracion(int du);
    void setKilometros(int k);
    void cancelarReservacion(const string& nombrePasajero);
    void setFecha(const std::string& fecha);


    int getNumeroVuelo() const;
    string getNombre() const;
    string getDestino() const;
    double getPrecio() const;
    int getDuracion() const;
    int getKilometros() const;
    const vector<string>& getPasajeros() const; 
    int getCapacidad() const; 
    string getFecha() const;
    bool coincideConDestinoFecha(string destino, string fecha) const;
    string obtenerDatosParaGuardar() const;
    virtual ~Vuelo();
};

#endif
