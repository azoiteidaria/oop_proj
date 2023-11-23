// Main.cpp
#include <iostream>
#include <cstdlib> // For rand() function
#include "Location.h"


using namespace std;

int main() {
    // Create a Location
    Location eventLocation;
    eventLocation.setMaxSeats(1000);
    eventLocation.setNumRows(20);
    eventLocation.setNumZones(3);
    eventLocation.setSeatsPerRow(50);


    // Display Location and Event details
    cout << "Event Location Details:\n";
    cout << "Max Seats: " << eventLocation.getMaxSeats() << "\n";
    cout << "Number of Rows: " << eventLocation.getNumRows() << "\n";
    cout << "Number of Zones: " << eventLocation.getNumZones() << "\n";
    cout << "Seats per Row: " << eventLocation.getSeatsPerRow() << "\n\n";
}