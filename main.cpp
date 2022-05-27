#include "testColorCodePair.h"

int main() {
    UnitTest testObj;
    
    testObj.testNumberToPair(4, telecomColorCoder::WHITE, telecomColorCoder::BROWN);
    testObj.testNumberToPair(5, telecomColorCoder::WHITE, telecomColorCoder::SLATE);

    testObj.testNumberToColorPairRefManual(1, telecomColorCoder::WHITE, telecomColorCoder::BLUE);
    testObj.testNumberToColorPairRefManual(5, telecomColorCoder::WHITE, telecomColorCoder::SLATE);
    
    testObj.testPairToNumber(telecomColorCoder::BLACK, telecomColorCoder::ORANGE, 12);
    testObj.testPairToNumber(telecomColorCoder::VIOLET, telecomColorCoder::SLATE, 25);

    return 0;
}
