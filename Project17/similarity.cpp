#include <string>

using namespace std;

class Similar {
public:
	float lengthTest(string target1, string target2) {
		return getScore(target1.size(), target2.size());
	}

	float getScore(int val1, int val2) {
		int smallValue = (val1 > val2) ? val2 : val1;
		int bigValue = smallValue == val1 ? val2 : val1;

		if (bigValue > smallValue * 2) return 0;

		return (((smallValue * 2) - bigValue) * 60) / smallValue;
	}
};