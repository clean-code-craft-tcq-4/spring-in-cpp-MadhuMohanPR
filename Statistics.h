#ifndef STATISTICS_H
#define STATISTICS_H

#include "stats.h"
#include<iostream>
#include <string>
#include <vector>

class stats;
template <class T1, class T2>
namespace Statistics{
  stats<T1> ComputeStatistics(const std::vector<T2>& vectorElements);
}
#endif
