#include "testPairColorCode.h"

int main() {
    UnitTest testObj;

    testObj.testNumberToPair(4, telecomColorCoder::WHITE, telecomColorCoder::BROWN);
    testObj.testNumberToPair(5, telecomColorCoder::WHITE, telecomColorCoder::SLATE);

    testObj.testNumberToColorPairRefManual(4, telecomColorCoder::WHITE, telecomColorCoder::BROWN);
    testObj.testNumberToColorPairRefManual(5, telecomColorCoder::WHITE, telecomColorCoder::SLATE);

    testObj.testPairToNumber(telecomColorCoder::BLACK, telecomColorCoder::ORANGE, 12);
    testObj.testPairToNumber(telecomColorCoder::VIOLET, telecomColorCoder::SLATE, 25);

    return 0;
}
