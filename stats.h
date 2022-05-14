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
           Stats();
           Stats(T avrg, T max, T min);
    };

    /*class Stats
    {
        public:
           float Average;
           float Maximum;
           float Minimum;
           Stats();
           Stats(float avrg, float max, float min);
    };*/
    template<typename T=double>
    Stats<T> ComputeStatistics(const std::vector<T>& vectorElements);
}
