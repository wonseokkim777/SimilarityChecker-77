#include <string>

using std::string;

class LengthChecker {
public:
    int getLengthPoint(string input1, string input2) {
        int A = std::max(input1.length(), input2.length());
        int B = std::min(input1.length(), input2.length());

        if (isSameLength(A, B)) return MAX_LENGTH_POINT;
        if (isDoubleLength(A, B)) return MIN_LENGTH_POINT;
        return getPartialLengthPoint(A, B);
    }

private:
    int getPartialLengthPoint(int A, int B) {
        int Gap = A - B;
        return (B - Gap) * MAX_LENGTH_POINT / B;
    }

    bool isDoubleLength(int A, int B) {
        return A >= B * 2;
    }

    bool isSameLength(int A, int B) {
        return A == B;
    }

    const static int MAX_LENGTH_POINT = 60;
    const static int MIN_LENGTH_POINT = 0;
};