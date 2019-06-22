#include "Tool.hpp"

// public:
/**
 * @brief Turning given char to integer value.
 * 
 */
int Tool::CharToInt(char c)
{
    if (!std::isdigit(c))
        throw CHAR_NOT_INT;
    return c - '0';
}
