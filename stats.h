#include <vector>

namespace Statistics {
    class Stats
    {
        double average;
        double max;
        double min;
    };
    Stats ComputeStatistics(const std::vector<double>& );
}
