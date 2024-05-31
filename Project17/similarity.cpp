#include <string>

using namespace std;

class Similar {
public:
	float lengthTest(string target1, string target2) {
		return getScore(target1.size(), target2.size());
	}

	float getScore(int val1, int val2) {
		int smallValue = (val1 > val2) ? val2 : val1;
		int diff = (val1 > val2) ? (val1 - val2) : (val2 - val1);

		if (diff / smallValue > 1) return 0;

		return (1 - float(diff) / float(smallValue)) * 60;

	}
};