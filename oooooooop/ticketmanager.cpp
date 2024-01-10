// ticketmanager.cpp
#include "ticketmanager.h"
#include "extendedlocation.h"

TicketManager::TicketManager() {
    locations.push_back(new ExtendedLocation(100, 10));
    loadData("tickets_data.bin");
}

TicketManager::~TicketManager() {
    for (auto loc : locations) {
        delete loc;
    }
}

void TicketManager::generateTickets(AbstractLocation* location, const Event& event, const std::string& type, int quantity) {
    for (int i = 0; i < quantity; ++i) {
        tickets.push_back(Ticket(type));
    }
}

void TicketManager::validateTickets() {
    // Implementation to validate tickets
    // ...
}

void TicketManager::saveData(const std::string& filename) const {
    std::ofstream file(filename, std::ios::binary | std::ios::out);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
        return;
    }

    size_t numLocations = locations.size();
    file.write(reinterpret_cast<const char*>(&numLocations), sizeof(size_t));

    for (const auto& loc : locations) {
        loc->printLocationDetails();
        file.write(reinterpret_cast<const char*>(loc), sizeof(ExtendedLocation));
    }

    size_t numEvents = events.size();
    file.write(reinterpret_cast<const char*>(&numEvents), sizeof(size_t));
    file.write(reinterpret_cast<const char*>(events.data()), numEvents * sizeof(Event));

    size_t numTickets = tickets.size();
    file.write(reinterpret_cast<const char*>(&numTickets), sizeof(size_t));
    file.write(reinterpret_cast<const char*>(tickets.data()), numTickets * sizeof(Ticket));

    file.close();
}

void TicketManager::loadData(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary | std::ios::in);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file for reading." << std::endl;
        return;
    }

    for (auto loc : locations) {
        delete loc;
    }
    locations.clear();
    events.clear();
    tickets.clear();

    size_t numLocations;
    file.read(reinterpret_cast<char*>(&numLocations), sizeof(size_t));

    for (size_t i = 0; i < numLocations; ++i) {
        ExtendedLocation loc;
        file.read(reinterpret_cast<char*>(&loc), sizeof(ExtendedLocation));
        locations.push_back(new ExtendedLocation(loc));
    }

    size_t numEvents;
    file.read(reinterpret_cast<char*>(&numEvents), sizeof(size_t));
    events.resize(numEvents);
    file.read(reinterpret_cast<char*>(events.data()), numEvents * sizeof(Event));

    size_t numTickets;
    file.read(reinterpret_cast<char*>(&numTickets), sizeof(size_t));


    file.close();
}



void TicketManager::displayMenu() {
    std::cout << "1. Generate Tickets\n";
    std::cout << "2. Validate Tickets\n";
    std::cout << "3. Save Data\n";
    std::cout << "4. Load Data\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

void TicketManager::processCommand(int choice) {
    switch (choice) {
    case 1: {
        AbstractLocation* loc = locations.back();
        Event ev;
        std::string type;
        int quantity;

        std::cout << "Enter event details:\n";
        std::cin >> ev;
        std::cout << "Enter ticket type: ";
        std::cin >> type;
        std::cout << "Enter quantity: ";
        std::cin >> quantity;

        generateTickets(loc, ev, type, quantity);
        break;
    }
    case 2:
        validateTickets();
        break;
    case 3:
        saveData("tickets_data.bin");
        std::cout << "Data saved successfully.\n";
        break;
    case 4:
        loadData("tickets_data.bin");
        std::cout << "Data loaded successfully.\n";
        break;
    case 5:
        std::cout << "Exiting program.\n";
        exit(0);
    default:
        std::cerr << "Invalid choice. Please try again.\n";
    }
}

void TicketManager::runCommandLineMode(const std::string& filename) {
    if (filename.empty()) {
        std::cerr << "Usage: oop.exe <data_file>\n";
        return;
    }

    loadData(filename);

    int choice;
    do {
        displayMenu();
        std::cin >> choice;
        processCommand(choice);
    } while (choice != 5);
}


