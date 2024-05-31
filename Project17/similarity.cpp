#include <string>
#include <stdexcept>
using namespace std;

class Similar {
public:
	int getLengthTestResult(string target1, string target2) {
		return getScore(target1.size(), target2.size());
	}

private:
	void assertIllegalArgument() {
		throw invalid_argument("Both string size must be more than 0");
	}

	int getScore(int size1, int size2) {
		if (size1 == 0 && size2 == 0)
			assertIllegalArgument();
		int smallValue = (size1 > size2) ? size2 : size1;
		int bigValue = smallValue == size1 ? size2 : size1;

		if (bigValue > smallValue * 2) return 0;

		return (((smallValue * 2) - bigValue) * 60) / smallValue;
	}
};
