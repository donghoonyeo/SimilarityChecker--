#include "pch.h"
#include "../Project17/similarity.cpp"

TEST(SimilarityChecker, StringLengthScore60) {
	Similar checkDiff;
	int actual = checkDiff.lengthTest("ABC", "BAC");
	int expected = 60;
	EXPECT_EQ(actual, expected);
}