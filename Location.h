#ifndef LOCATION_H
#define LOCATION_H

#include <string>
#include <vector>

#include "Route.h"
class Route;

using namespace std;

class Location {
public:
    string country;
    string capital;
    float lat;
    float lon;

    vector<Route*> routes;

    bool exists;
    Location* previous;
    float lengthFromStart;

    Location();
    ~Location();
    Location(string count, string cap);
    Location(string count, string cap, float lt, float lg);

    float getWeight(Location* start, Location* end);

    bool operator== (const Location &rhs) const;
    bool operator< (const Location &rhs) const;
    bool operator> (const Location &rhs) const;
};

class compareLocation {
public:
    bool operator()(const Location* l1, const Location* l2) const {
        return l1->lengthFromStart > l2->lengthFromStart;
    }
};

#endif
