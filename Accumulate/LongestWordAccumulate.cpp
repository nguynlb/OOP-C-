#include "LongestWordAccumulate.h"
#include "Module.h"

LongestWordAccumulate::LongestWordAccumulate()
	: Index(0), currentWordIndex(0), currentWordSize(0), longestWordIndex(0), longestWordSize(0) {}

LongestWordAccumulate operator + (LongestWordAccumulate accumulate, char character) {
	if (isAlphaCharacter(character)) {
		const bool isNewWord = accumulate.currentWordSize == 0;
		if (isNewWord) {
			accumulate.currentWordIndex = accumulate.Index;
		}
		accumulate.currentWordSize++;
	}
	else {
		const bool isLongestWord = accumulate.currentWordSize == accumulate.longestWordSize;
		if (isLongestWord) {
			accumulate.longestWordIndex = accumulate.currentWordIndex;
			accumulate.longestWordSize = accumulate.currentWordSize;
		}
	}
	accumulate.Index++;
	return accumulate;

}

size_t  LongestWordAccumulate::Begin () const {
	return longestWordIndex;
}
size_t  LongestWordAccumulate::Size ()  const {
	return longestWordSize;
}
