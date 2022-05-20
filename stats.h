#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<cmath>
using namespace std;

namespace Statistics {
    class Stats
    {
        public:
           float average;
           float max;
           float min;
    };
    Stats ComputeStatistics(const std::vector<float>& vNumbers);
}
