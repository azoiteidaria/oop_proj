#ifndef ABSTRACTLOCATION_H
#define ABSTRACTLOCATION_H

#include <iostream>

class AbstractLocation {
public:
    virtual void printLocationDetails() const = 0;
    virtual ~AbstractLocation() = default;
};

#endif
