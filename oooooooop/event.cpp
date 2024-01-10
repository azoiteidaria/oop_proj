#include "event.h"

Event::Event() : name("") {
   
}

Event::Event(const std::string& name) : name(name) {
   
}

bool Event::operator<(const Event& other) const {
  
    return name < other.name;
}

bool Event::operator>(const Event& other) const {
   
    return name > other.name;
}

Event& Event::operator=(const Event& other) {
    
    if (this != &other) {
        name = other.name;
       
    }
    return *this;
}

Event::operator bool() const {
      return !name.empty();
}

std::ostream& operator<<(std::ostream& os, const Event& event) {
    os << "Event Name: " << event.name;  
    return os;
}

std::istream& operator>>(std::istream& is, Event& event) {
    is >> event.name;
    return is;
}