#include "pch.h"
#include "../Project17/similarity.cpp"

class SimilarityFixture : public testing::Test {
public:
	Similar checkDiff;

	void assertIllegalArgument(string target1, string target2) {
		try {
			checkDiff.getLengthTestResult(target1, target2);
			FAIL();
		}
		catch (exception e) {
			// PASS
		}
	}
};

TEST_F(SimilarityFixture, StringLengthScore60) {
	int actual = checkDiff.getLengthTestResult("ABC", "BAC");
	int expected = 60;
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityFixture, StringLengthScore30) {
	int actual = checkDiff.getLengthTestResult("ABC", "BA");
	int expected = 30;
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityFixture, StringLengthScore0) {
	int actual = checkDiff.getLengthTestResult("ABCDEFGT", "BAC");
	int expected = 0;
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityFixture, StringLengthScorefloat) {
	int actual = checkDiff.getLengthTestResult("ABCDEFGT", "BACQZPD");
	int expected = 360 / 7;
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityFixture, StringLengthZero1) {
	int actual = checkDiff.getLengthTestResult("ABCDEFGT", "");
	int expected = 0;
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityFixture, StringLengthZero2) {
	assertIllegalArgument("", "");
}