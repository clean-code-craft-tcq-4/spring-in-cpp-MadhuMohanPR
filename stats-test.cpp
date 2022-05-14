#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include <cmath>

TEST_CASE("reports average, minimum and maximum")
{
    /*Statistics::Stats computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.Average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.Maximum - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.Minimum - 1.5) < epsilon);*/
    
    Statistics::Stat<float> computedvalues;
    Statistics::Stat<float> computedstats = Statistics::ComputeStatistics(computedvalues{1.5, 8.9, 3.1, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedstats.average - 4.525) < epsilon);
    REQUIRE(std::abs(computedstats.Max - 8.9) < epsilon);
    REQUIRE(std::abs(computedstats.Min - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array")
{
    //Statistics::Stats computedStats = Statistics::ComputeStatistics({});
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h
    
    //Design the REQUIRE statement here.
    std::vector<float> vElements{};
    auto computedStats = Statistics::ComputeStatistics(vElements);
    REQUIRE(isnan(computedStats.Average));
    REQUIRE(isnan(computedStats.Maximum));
    REQUIRE(isnan(computedStats.Minimum));
    //Use http://www.cplusplus.com/reference/cmath/isnan/
}

/*TEST_CASE("raises alerts when max is greater than threshold")
{
    EmailAlert emailAlert;
    LEDAlert ledAlert;
    std::vector<IAlerter*> alerters = {&emailAlert, &ledAlert};
    
    const float maxThreshold = 10.2;
    StatsAlerter statsAlerter(maxThreshold, alerters);
    statsAlerter.checkAndAlert({99.8, 34.2, 4.5, 6.7});

    REQUIRE(emailAlert.emailSent);
    REQUIRE(ledAlert.ledGlows);
}*/
