#include "Ticket.h"

using namespace std;

Ticket::Ticket() : uniqueID(0) {}

Ticket::Ticket(const string& ticketType, int uniqueID) : ticketType(ticketType), uniqueID(uniqueID) {}

const string& Ticket::getTicketType() const {
    return ticketType;
}

int Ticket::getUniqueID() const {
    return uniqueID;
}

void Ticket::setTicketType(const string& ticketType) {
    this->ticketType = ticketType;
}

void Ticket::setUniqueID(int uniqueID) {
    this->uniqueID = uniqueID;
}
