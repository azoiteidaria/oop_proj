#include "extendedlocation.h"
#include <iostream>


ExtendedLocation::ExtendedLocation() : maxSeats(0), numRows(0) {
    
}

ExtendedLocation::ExtendedLocation(int maxSeats, int numRows) : maxSeats(maxSeats), numRows(numRows) {
   
}

void ExtendedLocation::printLocationDetails() const {
    std::cout << "Extended Location Details - Max Seats: " << maxSeats << ", Num Rows: " << numRows << std::endl;
}