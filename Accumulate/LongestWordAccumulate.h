#pragma once

class LongestWordAccumulate {
	private:
		size_t Index;
		size_t currentWordIndex;
		size_t currentWordSize;
		size_t longestWordIndex;
		size_t longestWordSize;
	public:
		LongestWordAccumulate();

		friend LongestWordAccumulate operator + (LongestWordAccumulate accumulate, char character);
		size_t  Begin () const;
		size_t  Size () const;
};