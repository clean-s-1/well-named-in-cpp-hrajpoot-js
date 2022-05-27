#include <iostream>
#include <assert.h>
#include "colorCodePair.h"

class UnitTest
{
    public:
    void testNumberToPair(int pairNumber, telecomColorCoder::MajorColor expectedMajorColor,
            telecomColorCoder::MinorColor expectedMinorColor);
    
    void testNumberToColorPairRefManual(int pairNumber, telecomColorCoder::MajorColor expectedMajorColor,
            telecomColorCoder::MinorColor expectedMinorColor);

    void testPairToNumber(telecomColorCoder::MajorColor expectedMajorColor,
            telecomColorCoder::MinorColor expectedMinorColor,int expectedPairNumber);
};
