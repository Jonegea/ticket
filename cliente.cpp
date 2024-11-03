// cliente.cpp
#include <iostream>
#include <queue>
#include "cliente.h"
#include "Ticket.h"

using namespace std;

void agregarClienteACola(queue<Ticket>& cola, Cliente* cliente) {
    Incidente incidente = Incidente();
    Ticket nuevoTicket = Ticket(incidente, cliente); 
    cola.push(nuevoTicket);
    cout << "Ticket creado y añadido a la cola." << endl;
}
