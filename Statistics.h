#ifndef STATISTICS_H
#define STATISTICS_H

#include "stats.h"
#include<iostream>
#include <string>
#include <vector>
namespace Statistics{
template <class T1, class T2>
class stats;
  stats<T1> ComputeStatistics(const std::vector<T2>& vectorElements);
}
#endif
