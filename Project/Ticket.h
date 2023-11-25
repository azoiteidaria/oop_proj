#pragma once
#include <iostream>
#include <string>
using namespace std;

class Ticket {
private:
    string ticketType;
    int uniqueID;

public:
    Ticket();
    Ticket(const string& ticketType, int uniqueID);

    // Accessor methods
    const string& getTicketType() const;
    int getUniqueID() const;

    // Setter methods with validation
    void setTicketType(const string& ticketType);
    void setUniqueID(int uniqueID);
};
