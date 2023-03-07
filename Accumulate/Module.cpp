#include "Module.h"
#include <ctype.h>

bool isAlphaCharacter(char c)
{
    if (c == '-' || c == '/')
        return true;

    if (isalpha(c) != 0)
        return true;

    return false;
}
