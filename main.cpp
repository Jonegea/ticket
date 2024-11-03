// main.cpp
#include <iostream>
#include <queue>
#include <list>
#include "./include/AtenderTicket.h" 
#include "./include/entidades.h"
#include "menu.h" 
#include "cliente.h" 
#include "AtenderTicket.h"  

using namespace std;

int main() {
    list<Representante> representantes; // Crear una lista de representantes
    list<Cliente> clientes; // Crear una lista de clientes
    queue<Ticket> colaMostrador;
    queue<Ticket> colaLlamadas;
    list<Ticket> ticketsAtendidos;

    bool salir = false;
    while (!salir) {
        int opcion = menu(); // Llamar a la función `menu`
        switch (opcion) {
            case 1: {
                Cliente* nuevoCliente = new Cliente();
                cout << "Ingrese su nombre: ";
                getline(cin, nuevoCliente->nombre);

                Cuenta nuevaCuenta;
                string direccion;

                cout << "Email: ";
                cin >> direccion;
                cin.ignore();
                if (!direccion.empty()) {
                    nuevaCuenta.sender = new Email();
                    nuevaCuenta.direccion = direccion;
                    nuevoCliente->cuentas.push_back(nuevaCuenta);
                }

                cout << "Instagram: ";
                cin >> direccion;
                cin.ignore();
                if (!direccion.empty()) {
                    nuevaCuenta.sender = new Instagram();
                    nuevaCuenta.direccion = direccion;
                    nuevoCliente->cuentas.push_back(nuevaCuenta);
                }

                cout << "Facebook: ";
                cin >> direccion;
                cin.ignore();
                if (!direccion.empty()) {
                    nuevaCuenta.sender = new Facebook();
                    nuevaCuenta.direccion = direccion;
                    nuevoCliente->cuentas.push_back(nuevaCuenta);
                }

                cout << "Whatsapp: ";
                cin >> direccion;
                cin.ignore();
                if (!direccion.empty()) {
                    nuevaCuenta.sender = new Whatsapp();
                    nuevaCuenta.direccion = direccion;
                    nuevoCliente->cuentas.push_back(nuevaCuenta);
                }

                int tipoIngreso;
                cout << "Tipo de ingreso: 1 para mostrador, 2 para llamada: ";
                cin >> tipoIngreso;

                if (tipoIngreso == 1) {
                    agregarClienteACola(colaMostrador, nuevoCliente);
                } else if (tipoIngreso == 2) {
                    agregarClienteACola(colaLlamadas, nuevoCliente);
                }
                break;
            }
            case 2: {
                // Implementar lógica para cliente existente
                break;
            }
            case 3: {
                // Implementar lógica para representante
                break;
            }
            case 4:
                salir = true;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    }

    cout << "Programa finalizado." << endl;
    return 0;
}
