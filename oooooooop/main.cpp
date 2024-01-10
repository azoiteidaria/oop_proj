// main.cpp
#include "ticketmanager.h"

int main(int argc, char* argv[]) {
    TicketManager ticketManager;

    if (argc > 1) {
        ticketManager.runCommandLineMode(argv[1]);
    }
    else {
        int choice;
        do {
            ticketManager.displayMenu();
            std::cin >> choice;
            ticketManager.processCommand(choice);
        } while (choice != 5);
    }

    return 0;
}