#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<cmath>
using namespace std;

namespace Statistics {
    class Stats
    {
        public:
           const double average;
           const double max;
           const double min;
    };
    Stats ComputeStatistics(const std::vector<double>& vNumbers);
}
