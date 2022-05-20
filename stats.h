#ifndef STATS_H
#define STATS_H

#include<iostream>
#include <vector>
#include<cmath>
#include<bits/stdc++.h>
#include<numeric>

using namespace std;
using namespace Statistics;

template <class T2>
namespace Statistics {
    class stats
    {
        public:
           T2 Average;
           T2 Maximum;
           T2 Minimum;
           const std::vector<T2>& vNumb;
           stats();
           stats(const std::vector<T2>& vectorElements);
           stats(T2 avrg, T2 max, T2 min);
    };

}
#endif
