#include "stats.h"
#include<bits/stdc++.h>

using namespace Statistics;

Statistics::Stats::Stats()
{
}

Statistics::Stats::Stats(float avrg, float max, float min) : Average(avrg), Maximum(max), Minimum(min)
{
}

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& vectorElements)
{
    //Implement statistics here
    Statistics::Stats vElements;
    if(vectorElements.size()==0)
    {
       vElements.Average = NAN;
       vElements.Maximum = NAN;
       vElements.Minimum = NAN;
    }
    else
    {
       vElements.Maximum = *max_element(vectorElements.begin(), vectorElements.end());
       vElements.Minimum = *min_element(vectorElements.begin(), vectorElements.end());
       float Add         = accumulate(vectorElements.begin(), vectorElements.end() , 0);
       vElements.Average = (Add/vectorElements.size());
    }
    return vElements;
}
