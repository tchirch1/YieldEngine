#include <iostream>
#include <map>

using namespace std;
class Security {
public:
    Security(double rate, double yearsToMaturity, char *type);

public:
    double rate;
    double yearsToMaturity;
    char * type;
};
