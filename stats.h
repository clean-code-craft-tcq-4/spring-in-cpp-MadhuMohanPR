#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<cmath>
using namespace std;

template <typename T>
namespace Statistics {
    class Stats
    {
        public:
           T average;
           T max;
           T min;
    };
    Stats ComputeStatistics(const std::vector<T>& vNumbers);
}
