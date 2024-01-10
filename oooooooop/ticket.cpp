#include "ticket.h"

int Ticket::nextId = 1;

Ticket::Ticket() : ticketId(nextId++), type("") {
}

Ticket::Ticket(const std::string& type) : ticketId(nextId++), type(type) {
}

bool Ticket::operator<=(const Ticket& other) const {
    return ticketId <= other.ticketId;
}

bool Ticket::operator>=(const Ticket& other) const {
    return ticketId >= other.ticketId;
}

Ticket Ticket::operator+(const Ticket& other) const {
    return Ticket(type + other.type);
}

Ticket& Ticket::operator--() {
    --nextId;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Ticket& ticket) {
    os << "Ticket ID: " << ticket.ticketId << ", Type: " << ticket.type;
    return os;
}

std::istream& operator>>(std::istream& is, Ticket& ticket) {
    is >> ticket.type;
    return is;
}
