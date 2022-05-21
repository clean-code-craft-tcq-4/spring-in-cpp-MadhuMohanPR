#include "stats.h"
#include <numeric>
#include<algorithm>

namespace Statistics {
Stats ComputeStatistics(const std::vector<float>& vNumbers) {
    //Implement statistics here
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
{}
LEDAlert::LEDAlert():ledGlows(false)
{}
StatsAlerter::StatsAlerter(float MaxThreshold, std::vector<IAlerter*> Alerters)/*: IAlertPTR(NULL)*/ :emailAlertPTR(NULL), ledAlertPTR(NULL)
{
    maxThreshold = MaxThreshold;
    //IAlertPTR->first = Alerters[0]->first;
    //IAlertPTR->second = Alerters[0]->second;
    emailAlertPTR = Alerters.at(0);
    ledAlertPTR   = Alerters.at(1);
    
    //alerters.assign(Alerters.begin(), Alerters.end());
}
void StatsAlerter::checkAndAlert(const std::vector<float>& VctrNumbers)
{
    float max     = *max_element(VctrNumbers.begin(), VctrNumbers.end());
    if(max > maxThreshold)
    {
        //IAlertPTR->first->emailSent = true;
        //IAlertPTR->second->ledGlows = true;
        //this->*emailAlertPTR.emailSent = true;
        //(*ledAlertPTR).ledGlows    = true;
    }
    else
    {
        cout << "max is less than Threshold" <<endl;
    }
}
