#include "gmock/gmock.h"
#include "similaritycheck.cpp"

TEST(SimilarityCheck, Similar) {
	Account account;
	int actual = account.check();
	EXPECT_EQ(100, actual);

	EXPECT_EQ(1000, 1000);

}


TEST(SimilarityCheck, Similar2) {
	EXPECT_EQ(1000, 1000);
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}


