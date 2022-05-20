#include "stats.h"

namespace Statistics {
Stats ComputeStatistics(const std::vector<double>& vNumbers) {
    //Implement statistics here
    Stats vElements;
    if(vNumbers.size()==0)
    {
       vElements.average = NAN;
       vElements.max     = NAN;
       vElements.min     = NAN;
    }
    else
    {
       //double Sum        = accumulate(vNumbers.begin(), vNumbers.end() , 0.0);
       vElements.average = (accumulate(vNumbers.begin(), vNumbers.end() , 0.0) / vNumbers.size());
       vElements.max     = *max_element(vNumbers.begin(), vNumbers.end());
       vElements.min     = *min_element(vNumbers.begin(), vNumbers.end());
    }
    return vElements;
}
}
