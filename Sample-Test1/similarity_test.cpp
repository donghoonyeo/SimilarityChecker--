#include "pch.h"
#include "../Project17/similarity.cpp"

class SimilarityFixture : public testing::Test {
public:
	Similar checkDiff;
};

TEST_F(SimilarityFixture, StringLengthScore60) {
	float actual = checkDiff.lengthTest("ABC", "BAC");
	float expected = 60;
	EXPECT_EQ(actual, expected);
}