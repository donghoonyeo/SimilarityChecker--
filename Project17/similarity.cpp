#include <string>
#include <stdexcept>
using namespace std;

class Similar {
public:
	int getLengthTestResult(string target1, string target2) {
		return getScore(target1.size(), target2.size());
	}

	int getScore(int val1, int val2) {
		if (val1 == 0 && val2 == 0)
			assertIllegalArgument();
		int smallValue = (val1 > val2) ? val2 : val1;
		int bigValue = smallValue == val1 ? val2 : val1;

		if (bigValue > smallValue * 2) return 0;

		return (((smallValue * 2) - bigValue) * 60) / smallValue;
	}

private:
	void assertIllegalArgument() {
		throw invalid_argument("Both string size must be more than 0");
	}
};