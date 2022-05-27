#include "testColorCodePair.h"

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

void UnitTest::testNumberToColorPairRefManual(int pairNumber,
    telecomColorCoder::MajorColor expectedMajorColor,
    telecomColorCoder::MinorColor expectedMinorColor)
{
    telecomColorCoder::ColorPair colorPair =
        telecomColorCoder::fetchColorFromPairNumber(pairNumber);
    std::string fetchedReferenceManual = colorPair.toColorPairReferenceManual();
    std::cout << "Pair " << pairNumber << " also called " 
	<< fetchedReferenceManual << " pair" << std::endl;
    assert(colorPair.fetchReferenceManual() == fetchedReferenceManual);
    assert(colorPair.fetchMajorColor() == expectedMajorColor);
    assert(colorPair.fetchMinorColor() == expectedMinorColor);
}

void UnitTest::testPairToNumber(
    telecomColorCoder::MajorColor expectedMajorColor,
    telecomColorCoder::MinorColor expectedMinorColor,
    int expectedPairNumber)
{
    int pairNumber = telecomColorCoder::fetchPairNumberFromColor(expectedMajorColor, expectedMinorColor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
