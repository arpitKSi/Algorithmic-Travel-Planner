#ifndef ROUTE_H
#define ROUTE_H

#include <string>

class Location;

const float MULTI = 3;

class Route {
public:
    Location* origin;
    Location* destination;

    std::string originS;
    std::string destinationS;
    std::string transport;
    float time;
    float cost;
    std::string note;

    Route();
    ~Route();
    Route(Location* org, Location* dest);
    Route(Location* org, Location* dest, std::string trans, float tim, float cst, std::string notee);

    bool doesConnect(Location* start, Location* end);
};

#endif // ROUTE_H
