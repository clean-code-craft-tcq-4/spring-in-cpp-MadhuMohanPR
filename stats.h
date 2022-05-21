#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<cmath>
using namespace std;

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

struct EmailAlert
{
    public:
       EmailAlert();
       //bool emailSent;
       unsigned int emailSent:1 ;
};
struct LEDAlert
{
    public:
       LEDAlert();
       //bool ledGlows;
       unsigned int ledGlows:1 ;
};

typedef unsigned int IAlerter;
//typedef pair<EmailAlert*, LEDAlert*> IAlerter;

class StatsAlerter
{
    public:
       float maxThreshold;
       //IAlerter* IAlertPTR;
       IAlerter* emailAlertPTR;
       IAlerter* ledAlertPTR;
       //std::vector<IAlerter*> alerters;
       StatsAlerter(float MaxThreshold, std::vector<IAlerter*> Alerters);
       void checkAndAlert(const std::vector<float>& VctrNumbers);
};
