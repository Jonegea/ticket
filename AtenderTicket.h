// ticket.h
#ifndef TICKET_H
#define TICKET_H

#include <queue>
#include <list>
#include "AtenderTicket.h"
#include "Representante.h"

void atenderTicket(std::queue<Ticket>& cola, Representante* representante, std::list<Ticket>& ticketsAtendidos);

#endif
