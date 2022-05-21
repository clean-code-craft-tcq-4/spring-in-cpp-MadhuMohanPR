#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<cmath>
using namespace std;

typedef int IAlerter;

namespace Statistics {
    class Stats
    {
        public:
           float average;
           float max;
           float min;
    };
    Stats ComputeStatistics(const std::vector<float>& vNumbers);
}

class EmailAlert
{
    public:
       EmailAlert();
       bool emailSent;
};
class LEDAlert
{
    public:
       LEDAlert();
       bool ledGlows;
};
class StatsAlerter
{
    public:
       float maxThreshold;
       //IAlerter* emailAlertPTR;
       //IAlerter* ledAlertPTR;
       std::vector<IAlerter*> alerters;
       StatsAlerter(float MaxThreshold, std::vector<IAlerter*> Alerters);
       void checkAndAlert(const std::vector<float>& VctrNumbers);
};
