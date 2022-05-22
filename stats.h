#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<cmath>
using namespace std;

namespace Statistics
{
    class Stats
    {
        public:
           float average;
           float max;
           float min;
    };
    Stats ComputeStatistics(const std::vector<float>& vNumbers);
}

struct EmailAlert
{
    EmailAlert();
    bool emailSent;
};

struct LEDAlert
{
    LEDAlert();
    bool ledGlows;
};

struct IAlerter
{
   IAlerter();
   EmailAlert* emailAlert;
   LEDAlert* ledAlert;
};

class StatsAlerter
{
    public:
       float maxThreshold;
       IAlerter* IAlertPTR;

       StatsAlerter(float MaxThreshold, std::vector<IAlerter*> Alerters);
       void checkAndAlert(const std::vector<float>& VctrNumbers);
};
