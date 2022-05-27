#include "colorCodePair.h"

const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
const int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

telecomColorCoder::MajorColor telecomColorCoder::ColorPair::fetchMajorColor() {
    return _majorColor;
}

telecomColorCoder::MinorColor telecomColorCoder::ColorPair::fetchMinorColor() {
    return _minorColor;
}

std::string telecomColorCoder::ColorPair::toColorPairString() {
    std::string colorPairStr = MajorColorNames[_majorColor];
    colorPairStr += " ";
    colorPairStr += MinorColorNames[_minorColor];
    return colorPairStr;
}

std::string telecomColorCoder::ColorPair::toColorPairReferenceManual(){
    std::string colorPairStr = MajorColorNames[_majorColor];
    colorPairStr += "-";
    colorPairStr += MinorColorNames[_minorColor];
    _refrenceManual = colorPairStr;
    return colorPairStr;
}

telecomColorCoder::ColorPair telecomColorCoder::fetchColorFromPairNumber(const int pairNumber) {
    const int zeroBasedPairNumber = pairNumber - 1;
    MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return ColorPair(majorColor, minorColor);
}

int telecomColorCoder::fetchPairNumberFromColor(MajorColor majorColor, MinorColor minorColor) {
    return majorColor * numberOfMinorColors + minorColor + 1;
}

std::string telecomColorCoder::ColorPair::fetchReferenceManual(){
    return _refrenceManual;
}

