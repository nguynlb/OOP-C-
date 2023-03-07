#include <iostream>
#include <numeric>
#include "LongestWordAccumulate.h"
#define MAX 100

int main() {
	std::string str;
	std::cout << "Input your string: "; std::cin >> str;
	const LongestWordAccumulate result = std::accumulate(str.begin(), str.end(), LongestWordAccumulate());

	const std::string longestString = str.substr(result.Begin(), result.Size());

	std::cout << longestString << std::endl;

}
