#ifndef STATISTICS_H
#define STATISTICS_H

#include "stats.h"
#include <vector>
namespace Statistics{
template <class T1, class T2>
  stats<T1> ComputeStatistics(const std::vector<T2>& vectorElements);
}
#endif
