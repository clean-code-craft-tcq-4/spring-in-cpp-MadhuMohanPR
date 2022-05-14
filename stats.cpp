#include "stats.h"
#include<cmath>
#include<bits/stdc++.h>

template<typename T> Statistics::Stats<>::Stats()
{
}

template<typename T> Statistics::Stats<T, T, T>::Stats(T avrg, T max, T min) : Average(avrg), Maximum(max), Minimum(min)
{
}

template<typename T> Statistics::Stats<T> Statistics::ComputeStatistics(const std::vector<T>& vectorElements)
{
    //Implement statistics here
    Statistics::Stats<T> vElements;
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
       T Add             = accumulate(vectorElements.begin(), vectorElements.end() , 0);
       vElements.Average = (Add/vectorElements.size());
    }
    return vElements;
}
