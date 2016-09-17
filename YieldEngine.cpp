
#include <iostream>
#include <map>

using namespace std;

double timeInYears(const string period);

double cashDiscountValue(const string period, double rate);

int main()
{
    map<string, double> yields;
    // 1) Assignment using array index notation
    yields["1W"] = 0.445060000;
    yields["1M"] = 0.526890000;
    yields["2M"] = 0.669670000;
    yields["3M"] = 0.852220000;

    cout << "Map size: " << yields.size() << endl;

    for( map<string,double >::iterator ii=yields.begin(); ii!=yields.end(); ++ii)
    {

        cout << (*ii).first << ": " << (*ii).second << " ==== " << (cashDiscountValue((*ii).first, (*ii).second)) << endl;
    }
}

double cashDiscountValue(const string period, double rate) { return 1 / (1 + timeInYears(period) * rate / 100); }


double timeInYears(const string period)
{
    double businessDaysInYear = 360.0;
    if(period == "1W")
    {
        return 7.0 / businessDaysInYear;
    }
    if(period == "1M")
    {
        return 30.0 / businessDaysInYear;
    }
    if(period == "2M")
    {
        return 60.0 / businessDaysInYear;
    }
    if(period =="3M" ||period =="3M-6M" || period =="6M-9M" || period =="9M-12M" ||
       period =="12M-15M" || period =="15M-18M" || period =="18M-21M")
    {
        return 90.0 / businessDaysInYear;
    }
    return 0;
}