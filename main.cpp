#include "gmock/gmock.h"
#include "similaritycheck.cpp"

TEST(SimilarityCheck, Similar) {
	Account account;
	int actual = account.check();
	EXPECT_EQ(100, actual);

}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}


