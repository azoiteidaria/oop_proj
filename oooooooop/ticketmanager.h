
#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <stdexcept>
#include "abstractlocation.h"
#include "event.h"
#include "ticket.h"

class TicketManager {
private:
    std::vector<AbstractLocation*> locations;
    std::vector<Event> events;
    std::vector<Ticket> tickets;

public:
    TicketManager();
    ~TicketManager();

    void generateTickets(AbstractLocation* location, const Event& event, const std::string& type, int quantity);
    void validateTickets();
    void saveData(const std::string& filename) const;
    void loadData(const std::string& filename);

    void displayMenu();
    void processCommand(int choice);
    void runCommandLineMode(const std::string& filename);
};

#endif
