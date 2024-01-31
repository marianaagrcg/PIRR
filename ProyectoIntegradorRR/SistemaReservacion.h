#pragma once
#ifndef SISTEMARESERVACION_H
#define SISTEMARESERVACION_H

#include "Usuario.h"
#include "Vuelo.h"
#include <vector>

class SistemaReservacion {
private:
    vector<Usuario> listaUsuarios;
    vector<Vuelo> listaVuelos;

public:
    // SETTERS
    void setAgregarUsuario(const Usuario& nuevoUsuario);
    void setAgregarVuelo(const Vuelo& nuevoVuelo);
    void setBuscarVueloPorDestinoFecha(string destino, string fecha);
    void setElegirVuelo(int numeroVuelo);
    void setMostrarDetallesVuelo(int numeroVuelo);
    void setContarKilometrosAcumulados(Usuario& usuario);
    void setCancelarReservacion(Usuario& usuario, int numeroVuelo);
    void setGuardarDatosEnArchivo();
    void setCargarDatosDesdeArchivo();

    // GETTERS
    const vector<Usuario>& getListaUsuarios() const;
    const vector<Vuelo>& getListaVuelos() const;
    const vector<Usuario>& getAgregarUsuario() const;
    const vector<Vuelo>& getAgregarVuelo() const;
    const vector<Vuelo>& getBuscarVueloPorDestinoFecha() const;
    const vector<Vuelo>& getElegirVuelo() const;
    const vector<Vuelo>& getMostrarDetallesVuelo() const;
    vector<Usuario>& getContarKilometrosAcumulados();
    void getCancelarReservacion(Usuario& usuario, int numeroVuelo);
    int getCargarDatosDesdeArchivo();
    int getGuardarDatosDesdeArchivo();


};

#endif
