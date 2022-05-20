#include "stats.h"

template <class T1, class T2>
namespace Statistics {
   stats<T1>::stats()
   {
   }

   stats<T1>::stats(const std::vector<T2>& vectorElements) : vNumb({})
   {
      vNumb.assign(vectorElements.begin(), vectorElements.end());
      Statistics::ComputeStatistics(vectorElements);
   }

   stats<T1>::stats(T2 avrg, T2 max, T2 min) : Average(avrg), Maximum(max), Minimum(min)
   {
   }

   stats<T1> Statistics::ComputeStatistics(const std::vector<T2>& vectorElements)
   {
       //Implement statistics here
       Statistics::stats<T1> vElements;
       if(vectorElements.size()==0)
       {
          vElements.Average = NAN;
          vElements.Maximum = NAN;
          vElements.Minimum = NAN;
       }
       else
       {
          vElements.Maximum = *max_element(vectorElements.begin(), vectorElements.end());
          vElements.Minimum = *min_element(vectorElements.begin(), vectorElements.end());
          T2 Add             = accumulate(vectorElements.begin(), vectorElements.end() , 0);
          vElements.Average = (Add/vectorElements.size());
       }
       return vElements;
   }
}
