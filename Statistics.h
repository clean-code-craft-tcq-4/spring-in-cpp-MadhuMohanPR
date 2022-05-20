#ifndef STATISTICS_H
#define STATISTICS_H

#include "Stats.h"
#include <vector>
namespace Statistics{
template <class T1, class T2>
  Stats<T1> ComputeStatistics(const std::vector<T2>& vectorElements);
}
#endif
