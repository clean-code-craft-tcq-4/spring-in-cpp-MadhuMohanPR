#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

namespace Statistics 
{
    template <typename T=double>
    class Stats
    {
        public:
           T Average;
           T Maximum;
           T Minimum;
           const std::vector<T>& vNumb;
           Stats();
           Stats(const std::vector<T>& vectorElements);
           Stats(T avrg, T max, T min);
    };

    template<class T1>
    template <typename T=double>
    Stats<T1> ComputeStatistics(const std::vector<T>& vectorElements);
}
