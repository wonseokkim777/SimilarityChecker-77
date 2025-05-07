#include "gmock/gmock.h"
#include "similaritycheck.cpp"

using namespace testing;

class LengthFixture : public Test {
public:
    LengthChecker app;

    void lengthCheck(int expected, string input1, string input2) {
        int ret = app.getLengthPoint(input1, input2);
        EXPECT_EQ(expected, ret);
    }
};

TEST_F(LengthFixture, MaxLengthPoint) {
    lengthCheck(60, "ABC", "TER");
    lengthCheck(60, "SDFEW", "DFEWQ");
    lengthCheck(60, "WERWQQW", "GCFAERQ");
}

TEST_F(LengthFixture, MinLengthPoint) {
    lengthCheck(0, "ABCRITUEIR", "TER");
    lengthCheck(0, "AR", "TEWERR");
    lengthCheck(0, "A", "TE");
    lengthCheck(0, "AR", "T");
}

TEST_F(LengthFixture, BiggerThenAToB) {
    lengthCheck(20, "ABCRE", "TER");
    lengthCheck(48, "TEQYVR", "ABCRE");
}

TEST_F(LengthFixture, BiggerThenBToA) {
    lengthCheck(48, "ABCRE", "TEQYVR");
    lengthCheck(20, "TER", "ABCRE");
}

int main() {
    testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}