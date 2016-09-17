#include <iostream>
#include <map>

using namespace std;

class Utility {

public:
    static map<string, int> periodToDaysMap()
    {
        static map<string, int> y;
        // 1) Assignment using array index notation
        y["1W"] = 7;
        y["1M"] = 30;
        y["2M"] = 60;
        y["3M"] = 90;
        return y;
    }
};
