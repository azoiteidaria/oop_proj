#include "Location.h"

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