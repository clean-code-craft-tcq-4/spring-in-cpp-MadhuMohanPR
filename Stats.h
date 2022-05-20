#ifndef STATS_H
#define STATS_H

#include<iostream>
#include <vector>
#include<cmath>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

template <class T2>
namespace Statistics {
    class Stats
    {
        public:
           T2 Average;
           T2 Maximum;
           T2 Minimum;
           const std::vector<T2>& vNumb;
           Stats();
           Stats(const std::vector<T2>& vectorElements);
           Stats(T2 avrg, T2 max, T2 min);
    };

}
#endif
