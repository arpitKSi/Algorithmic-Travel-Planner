#include "Route.h"
#include "Location.h"

Route::Route() {
    origin = nullptr;
    destination = nullptr;
    transport = "";
    time = 0;
    cost = 0;
    note = "";
}

Route::~Route() {}

Route::Route(Location* org, Location* dest) {
    origin = org;
    destination = dest;
    transport = "";
    time = 0;
    cost = 0;
    note = "";
}

Route::Route(Location* org, Location* dest, std::string trans, float tim, float cst, std::string notee) {
    origin = org;
    destination = dest;
    transport = trans;
    time = tim;
    cost = cst;
    note = notee;

    if (trans == "plane") {
        cost = cst * MULTI;
    }
}

bool Route::doesConnect(Location* start, Location* end) {
    return (start == origin && end == destination);
}
