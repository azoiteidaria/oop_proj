
#include <iostream>
#include <string>
using namespace std;

class Location {
private:

    int maxSeats;
    int numRows;
    int numZones;
    int seatsPerRow;

public:
    Location();
    Location(int maxSeats, int numRows, int numZones, int seatsPerRow);

    // Accessor methods
    int getMaxSeats() const;
    int getNumRows() const;
    int getNumZones() const;
    int getSeatsPerRow() const;

    // Setter methods with validation
    void setMaxSeats(int maxSeats);
    void setNumRows(int numRows);
    void setNumZones(int numZones);
    void setSeatsPerRow(int seatsPerRow);
};

