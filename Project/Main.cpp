// Main.cpp
#include <iostream>
#include "Location.h"
#include "Event.h"
using namespace std;

Location::Location() : maxSeats(0), numRows(0), numZones(0), seatsPerRow(0) {}

Location::Location(int maxSeats, int numRows, int numZones, int seatsPerRow)
    : maxSeats(maxSeats), numRows(numRows), numZones(numZones), seatsPerRow(seatsPerRow) {}

int Location::getMaxSeats() const {
    return maxSeats;
}

int Location::getNumRows() const {
    return numRows;
}

int Location::getNumZones() const {
    return numZones;
}

int Location::getSeatsPerRow() const {
    return seatsPerRow;
}

void Location::setMaxSeats(int maxSeats) {

    this->maxSeats = maxSeats;
}

void Location::setNumRows(int numRows) {

    this->numRows = numRows;
}

void Location::setNumZones(int numZones) {

    this->numZones = numZones;
}

void Location::setSeatsPerRow(int seatsPerRow) {
    this->seatsPerRow = seatsPerRow;
}

Event::Event() {}

Event::Event(const string& name, const string& date, const string& time)
    : name(name), date(date), time(time) {}

const string& Event::getName() const {
    return name;
}

const string& Event::getDate() const {
    return date;
}

const string& Event::getTime() const {
    return time;
}

void Event::setName(const string& name) {
    
    this->name = name;
}

void Event::setDate(const string& date) {
    
    this->date = date;
}

void Event::setTime(const string& time) {
   
    this->time = time;
}

int main() {
  
    Location eventLocation;
    eventLocation.setMaxSeats(50000);
    eventLocation.setNumRows(50);
    eventLocation.setNumZones(3);
    eventLocation.setSeatsPerRow(300);

    
    Event event("Concert Coldplay", "2024-06-13", "19:00");

   
    cout << "Event Location Details:\n";
    cout << "Max Seats: " << eventLocation.getMaxSeats() << "\n";
    cout << "Number of Rows: " << eventLocation.getNumRows() << "\n";
    cout << "Number of Zones: " << eventLocation.getNumZones() << "\n";
    cout << "Seats per Row: " << eventLocation.getSeatsPerRow() << "\n\n";

    cout << "Event Details:\n";
    cout << "Name: " << event.getName() << "\n";
    cout << "Date: " << event.getDate() << "\n";
    cout << "Time: " << event.getTime() << "\n\n";

    return 0;
}
