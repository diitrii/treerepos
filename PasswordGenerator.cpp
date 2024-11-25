#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
	//Variable declaration
	srand(time(0));
	int PassLength;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string capslock = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char nums[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	vector<char> passwords;

	 //Input
	cout << "How many letters/numbers should be in your password?";
	cin >> PassLength;
	//For loops
	for (int i = 0; i < PassLength; i++) {
		int evenodd = rand() % 2;
		int capsnocaps = rand() % 4;
		int randnums = rand() % (9 + 1 - 0) + 0;
		int randchars = rand() % (25 + 1 - 0) + 0;
		if (evenodd == 0) {
			passwords.push_back(nums[randnums]);
		}
		else {
			if (capsnocaps == 0) {
				passwords.push_back(capslock[randchars]);
			}
			else {
				passwords.push_back(alphabet[randchars]);
			}
		}
	}
	for (int j = 0; j < passwords.size(); j++) {
		cout << passwords[j];
	}
}