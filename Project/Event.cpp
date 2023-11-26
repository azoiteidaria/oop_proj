#include "Event.h"

using namespace std;

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
