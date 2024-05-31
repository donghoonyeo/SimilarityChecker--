#include "pch.h"
#include "../Project17/similarity.cpp"

class SimilarityFixture : public testing::Test {
public:
	Similar checkDiff;
};

TEST_F(SimilarityFixture, StringLengthScore60) {
	int actual = checkDiff.lengthTest("ABC", "BAC");
	int expected = 60;
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityFixture, StringLengthScore30) {
	int actual = checkDiff.lengthTest("ABC", "BA");
	int expected = 30;
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityFixture, StringLengthScorefloat) {
	int actual = checkDiff.lengthTest("ABCDEFGT", "BACQZPD");
	int expected = 360 / 7;
	EXPECT_EQ(actual, expected);
}