#include "stats.h"
#include<cmath>
#include<bits/stdc++.h>

namespace Statistics
{
   Stats<T1>::Stats()
   {
   }

   Stats<T1>::Stats(const std::vector<T2>& vectorElements) : vNumb({})
   {
      vNumb.assign(vectorElements.begin(), vectorElements.end());
      Statistics::ComputeStatistics(vectorElements);
   }

   Stats<T1>::Stats(T2 avrg, T2 max, T2 min) : Average(avrg), Maximum(max), Minimum(min)
   {
   }

   Stats<T1> Statistics::ComputeStatistics(const std::vector<T2>& vectorElements)
   {
       //Implement statistics here
       Statistics::Stats<T1> vElements;
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
