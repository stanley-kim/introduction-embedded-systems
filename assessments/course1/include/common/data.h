
#include <stdint.h>

/**
 * @brief Convert data from a standard integer type into an ASCII string.
 *
 *@param data The number you wish to convert 
 *@param ptr  Pointer to Destination Array 
 *@param base The integer value of the base you wish to convert to 
 * 
 *@return The length of the converted data (including a negative sign).
 */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
 * @brief Convert data from an ASCII represented string into an integer type.
 *
 *@param ptr  Pointer to Destination Array 
 *@param data The number you wish to convert 
 *@param base The integer value of the base you wish to convert to 
 * 
 *@return  The converted 32-bit signed integer.
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);