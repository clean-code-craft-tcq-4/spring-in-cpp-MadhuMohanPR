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

    /*class Stats
    {
        public:
           float Average;
           float Maximum;
           float Minimum;
           Stats();
           Stats(float avrg, float max, float min);
    };*/
    template<class T1>
    Stats<T1> ComputeStatistics(const std::vector<T>& vectorElements);
}
