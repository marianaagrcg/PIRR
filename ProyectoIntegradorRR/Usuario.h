#pragma once
#ifndef USUARIO_H
#define USUARIO_H
using namespace std;
#include <string>

class Usuario {
private:
    string nombre;
    string apellido;
    string usuario;
    int kilometrosAcumulados;

public:
    Usuario(string nombre, string apellido, string usuario, int kilometrosAcumulados);
    Usuario();
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setUsuario(string usuario);
    void setKilometrosAcumulados(int kmA);

    string getNombre();
    string getApellido();
    string getUsuario() const;
    int getKilometrosAcumulados() const;
    void acumularKilometros(int cantidad);
    string obtenerDatosParaGuardar() const;
    Usuario withKilometrosAcumulados(int kmA) const;

};

#endif

