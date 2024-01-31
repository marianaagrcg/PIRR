#include <iostream>
#include "SistemaReservacion.h"

int main() {
    SistemaReservacion sistema;

    

    // Cargar datos desde el archivo
    sistema.getCargarDatosDesdeArchivo();

    // Añadir un nuevo usuario
    Usuario nuevoUsuario("Juan", "Teran", "juan123", 0);
    sistema.setAgregarUsuario(nuevoUsuario);

    // Buscar vuelos en una fecha específica y destino
    sistema.setBuscarVueloPorDestinoFecha("Paris", "2024-02-01");

    // Elegir un vuelo por número
    sistema.setElegirVuelo(101);

    // Mostrar detalles del vuelo elegido
    sistema.setMostrarDetallesVuelo(101);

    sistema.setContarKilometrosAcumulados(nuevoUsuario);
    if (nuevoUsuario.getKilometrosAcumulados() > 50000) {
        // Aplicar descuento del 40%
        std::cout << "Descuento aplicado.\n";
    }
    // Guardar datos en el archivo
    sistema.setGuardarDatosEnArchivo();

    // Cancelar una reservación
    sistema.setCancelarReservacion(nuevoUsuario, 101);

    // Guardar datos en el archivo
    sistema.setGuardarDatosEnArchivo();


    return 0;
}
