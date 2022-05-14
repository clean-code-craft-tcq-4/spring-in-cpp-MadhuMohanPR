#include "stats.h"
#include<cmath>
#include<bits/stdc++.h>
using namespace Statistics;

template <class T'>
template <typename T=double>
Statistics::Stats<T>::Stats()
{
}

Statistics::Stats<T'>::Stats(const std::vector<T>& vectorElements) : vNumb({})
{
    vNumb.assign(vectorElements.begin(), vectorElements.end());
    Statistics::ComputeStatistics(vectorElements);
}

Statistics::Stats<T'>::Stats(T avrg, T max, T min) : Average(avrg), Maximum(max), Minimum(min)
{
}

Statistics::Stats<T'> Statistics::ComputeStatistics(const std::vector<T>& vectorElements)
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
