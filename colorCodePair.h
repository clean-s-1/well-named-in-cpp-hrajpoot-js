#include <string>
namespace telecomColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    class ColorPair {
        private:
            MajorColor _majorColor;
            MinorColor _minorColor;
        public:
            ColorPair(MajorColor majorColor, MinorColor minorColor): 
		_majorColor(majorColor), _minorColor(minorColor) {}
            MajorColor fetchMajorColor();
            MinorColor fetchMinorColor();
            std::string toColorPairString();
            std::string toColorPairReferenceManual();
    };

    ColorPair fetchColorFromPairNumber(const int pairNumber);
    int fetchPairNumberFromColor(MajorColor majorColor, MinorColor minorColor);
}

