#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <vector>

class Location {
private:
    int maxSeats;
    int numRows;
  

public:
    Location();
    Location(int maxSeats, int numRows);
    
   
    Location operator+(const Location& other) const;
    Location operator-(const Location& other) const;
    Location operator*(int multiplier) const;
    bool operator==(const Location& other) const;
    int operator[](int index) const;
    Location& operator++(); 
    Location operator++(int); 
    Location& operator--(); 
    Location operator--(int); 

    friend std::ostream& operator<<(std::ostream& os, const Location& location);
    friend std::istream& operator>>(std::istream& is, Location& location);
};

#endif

