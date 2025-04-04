#include "Location.h"

Location::Location() {
    country = "";
    capital = "";
    lat = 0;
    lon = 0;

    lengthFromStart = 999999;
    exists = true;
    previous = nullptr;
}

Location::~Location() {}

Location::Location(string count, string cap) {
    country = count;
    capital = cap;
    lat = 0;
    lon = 0;

    lengthFromStart = 999999;
    exists = true;
    previous = nullptr;
}

Location::Location(string count, string cap, float lt, float lg) {
    country = count;
    capital = cap;
    lat = lt;
    lon = lg;

    lengthFromStart = 999999;
    exists = true;
    previous = nullptr;
}

bool Location::operator== (const Location &rhs) const {
    return this->capital == rhs.capital;
}

bool Location::operator< (const Location &rhs) const {
    return this->lengthFromStart < rhs.lengthFromStart;
}

bool Location::operator> (const Location &rhs) const {
    return this->lengthFromStart > rhs.lengthFromStart;
}
