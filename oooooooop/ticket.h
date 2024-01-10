#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <vector>

class Ticket {
private:
    static int nextId;
    int ticketId;
    std::string type;
    

public:
    Ticket();
    Ticket(const std::string& type);
    
    bool operator<=(const Ticket& other) const;
    bool operator>=(const Ticket& other) const;
    Ticket operator+(const Ticket& other) const;
    Ticket& operator--(); 

    friend std::ostream& operator<<(std::ostream& os, const Ticket& ticket);
    friend std::istream& operator>>(std::istream& is, Ticket& ticket);
};

#endif
