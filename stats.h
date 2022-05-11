#include <vector>

namespace Statistics
{
    template <typename T=double>
    class Stats
    {
      public:
         T Average;
         T Max;
         T Min;
        Stats();
        Stats(T average, T max, T min);
    }
    Stats ComputeStatistics(const std::vector<T>& VectorElements);
}
