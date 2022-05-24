#include "testColorCodePair.h"

//function to test pair number with color code pair.
void UnitTest::testNumberToPair(int pairNumber,
    telecomColorCoder::MajorColor expectedMajorColor,
    telecomColorCoder::MinorColor expectedMinorColor)
{
    telecomColorCoder::ColorPair colorPair =
        telecomColorCoder::fetchColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.toColorPairString() << std::endl;
    assert(colorPair.fetchMajorColor() == expectedMajorColor);
    assert(colorPair.fetchMinorColor() == expectedMinorColor);
}

//function to test pair number with reference manual color-code pair.
void UnitTest::testNumberToColorPairRefManual(int pairNumber,
    telecomColorCoder::MajorColor expectedMajorColor,
    telecomColorCoder::MinorColor expectedMinorColor)
{
    telecomColorCoder::ColorPair colorPair =
        telecomColorCoder::fetchColorFromPairNumber(pairNumber);
    std::cout << "Pair " << pairNumber << " also called " 
	<< colorPair.toColorPairReferenceManual() << " pair" << std::endl;
    assert(colorPair.fetchMajorColor() == expectedMajorColor);
    assert(colorPair.fetchMinorColor() == expectedMinorColor);
}


//function to test color code pair with pair number.
void UnitTest::testPairToNumber(
    telecomColorCoder::MajorColor expectedMajorColor,
    telecomColorCoder::MinorColor expectedMinorColor,
    int expectedPairNumber)
{
    int pairNumber = telecomColorCoder::fetchPairNumberFromColor(expectedMajorColor, expectedMinorColor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
