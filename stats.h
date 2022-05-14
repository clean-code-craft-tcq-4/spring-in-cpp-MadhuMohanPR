#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

namespace Statistics 
{
   /* template <typename T=double>
    class Stats
    {
        public:
           T Average;
           T Max;
           T Min;
           Stats();
           Stats(T average, T max, T min);
    };*/

    class Stats
    {
        public:
           float Average;
           float Maximum;
           float Minimum;
           Stats();
           Stats(float avrg, float max, float min);
    };
    Stats ComputeStatistics(const std::vector<float>& vectorElements);
}
