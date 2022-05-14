#include "stats.h"
#include<cmath>
#include<bits/stdc++.h>

namespace Statistics {

Stats::Stats()
{
}

Stats::Stats(float avrg,float max,float min):Average(avrg),Maximum(max),Minimum(min)
{
}

Stats Stats::ComputeStatistics(const std::vector<float>& vectorElements)
{
    //Implement statistics here
    Stats vElements;
    if(vectorElements.size()==0)
    {
       vElements.Average=NAN;
       vElements.Maximum=NAN;
       vElements.Minimum=NAN;
    }

    float Add         = accumulate(vectorElements.begin(), vectorElements.end() , 0);
    vElements.Average = (Add/vectorElements.size());
    vElements.Maximum = *max_element(vectorElements.begin(),vectorElements.end());
    vElements.Minimum = *min_element(vectorElements.begin(),vectorElements.end());

    return vElements;
}

}
