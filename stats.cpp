#include "stats.h"

namespace Statistics {
Stats ComputeStatistics(const std::vector<float>& vNumbers) {
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
       vElements.average = (accumulate(vNumbers.begin(), vNumbers.end() , 0.000) / vNumbers.size());
       vElements.max     = *max_element(vNumbers.begin(), vNumbers.end());
       vElements.min     = *min_element(vNumbers.begin(), vNumbers.end());
    }
    return vElements;
}
}
