#include "stats.h"
#include <numeric>
#include<algorithm>

namespace Statistics
{
Stats ComputeStatistics(const std::vector<float>& vNumbers)
{
    Stats vElements;
    if(vNumbers.size()==0)
    {
       vElements.average = NAN;
       vElements.max     = NAN;
       vElements.min     = NAN;
    }
    else
    {
       vElements.average = (accumulate(vNumbers.begin(), vNumbers.end() , 0.0) / vNumbers.size());
       vElements.max     = *max_element(vNumbers.begin(), vNumbers.end());
       vElements.min     = *min_element(vNumbers.begin(), vNumbers.end());
    }
    return vElements;
}
} // namespace Statistics

EmailAlert::EmailAlert():emailSent(false)
{
}

LEDAlert::LEDAlert():ledGlows(false)
{
}

IAlerter::IAlerter():emailAlert(NULL), ledAlert(NULL)
{
}

StatsAlerter::StatsAlerter(float MaxThreshold, std::vector<IAlerter*> Alerters): IAlertPTR(NULL)
{
    maxThreshold = MaxThreshold;
    IAlertPTR = Alerters.begin();
}

void StatsAlerter::checkAndAlert(const std::vector<float>& VctrNumbers)
{
    float max     = *max_element(VctrNumbers.begin(), VctrNumbers.end());
    if(max > maxThreshold)
    {
        IAlertPTR->emailAlert->emailSent = true;
        IAlertPTR->ledAlert->ledGlows = true;
    }
    else
    {
        cout << "max is less than Threshold" <<endl;
    }
}
