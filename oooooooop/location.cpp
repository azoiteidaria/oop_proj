#include "location.h"

Location::Location() : maxSeats(0), numRows(0) {

}

Location::Location(int maxSeats, int numRows) : maxSeats(maxSeats), numRows(numRows) {

}

Location Location::operator+(const Location& other) const {
    return Location(maxSeats + other.maxSeats, numRows + other.numRows);
}

Location Location::operator-(const Location& other) const {
    return Location(maxSeats - other.maxSeats, numRows - other.numRows);
}

Location Location::operator*(int multiplier) const {
    return Location(maxSeats * multiplier, numRows * multiplier);
}

bool Location::operator==(const Location& other) const {
    return (maxSeats == other.maxSeats) && (numRows == other.numRows);
}

int Location::operator[](int index) const {
    if (index == 0) {
        return maxSeats;
    }
    else if (index == 1) {
        return numRows;
    }
    else {
        throw std::out_of_range("Invalid index for Location");
    }
}

Location& Location::operator++() {
    ++maxSeats;
    ++numRows;
    return *this;
}

Location Location::operator++(int) {
    Location temp = *this;
    ++(*this);
    return temp;
}

Location& Location::operator--() {
    if (maxSeats > 0 && numRows > 0) {
        --maxSeats;
        --numRows;
    }
    return *this;
}

Location Location::operator--(int) {
    Location temp = *this;
    --(*this);
    return temp;
}

std::ostream& operator<<(std::ostream& os, const Location& location) {
    os << "Max Seats: " << location.maxSeats << ", Num Rows: " << location.numRows;
    return os;
}

std::istream& operator>>(std::istream& is, Location& location) {
    is >> location.maxSeats >> location.numRows;
    return is;
}