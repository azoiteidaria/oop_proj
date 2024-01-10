#ifndef EXTENDEDLOCATION_H
#define EXTENDEDLOCATION_H

#include "abstractlocation.h"

class ExtendedLocation : public AbstractLocation {
private:
    int maxSeats;
    int numRows;

public:
    ExtendedLocation();
    ExtendedLocation(int maxSeats, int numRows);

    void printLocationDetails() const override;
};

#endif
