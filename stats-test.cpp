#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include <cmath>
using std::make_pair;

TEST_CASE("reports average, minimum and maximum") {
    std::vector<float> computedvalues;
    computedvalues.assign({1.525, 8.925, 3.125, 4.525});
    Statistics::Stats computedStats = Statistics::ComputeStatistics(computedvalues);
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.max - 8.925) < epsilon);
    REQUIRE(std::abs(computedStats.min - 1.525) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h

    //Design the REQUIRE statement here.
    std::vector<float> vNumbers;
    Statistics::Stats computedStats = Statistics::ComputeStatistics(vNumbers);
    REQUIRE(isnan(computedStats.average));
    REQUIRE(isnan(computedStats.max));
    REQUIRE(isnan(computedStats.min));
    //Use http://www.cplusplus.com/reference/cmath/isnan/
}

TEST_CASE("raises alerts when max is greater than threshold") {
    EmailAlert emailAlert;
    LEDAlert ledAlert;
    std::vector<IAlerter*> alerters({&emailAlert, &ledAlert});
    //std::vector<IAlerter*> alerters;
    //alerters.push_back(make_pair(&emailAlert,&ledAlert));
    const float maxThreshold = 10.2;
    StatsAlerter statsAlerter(maxThreshold, alerters);
    statsAlerter.checkAndAlert({99.8, 34.2, 4.5, 6.7});

    REQUIRE(emailAlert.emailSent);
    REQUIRE(ledAlert.ledGlows);
}
