#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <string>

class Event {
private:
    std::string name;
    

public:
    Event();
    Event(const std::string& name);
    
    bool operator<(const Event& other) const;
    bool operator>(const Event& other) const;
    Event& operator=(const Event& other);
    explicit operator bool() const;

    friend std::ostream& operator<<(std::ostream& os, const Event& event);
    friend std::istream& operator>>(std::istream& is, Event& event);
};

#endif

