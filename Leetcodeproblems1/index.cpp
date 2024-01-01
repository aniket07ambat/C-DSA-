#include <iostream>
#include <math.h>
using namespace std;

// https://leetcode.com/problems/reverse-integer/description/

// https://leetcode.com/problems/complement-of-base-10-integer/

// https://leetcode.com/problems/power-of-two/

//Let me explain the improved version of the `isPowerOfTwo` function.

//In the improved version, the key idea is to use bitwise operations to check if a number is a power of two. Here's a step-by-step explanation:


bool isPowerOfTwo(int n) {
    // Check if n is non-positive (negative or zero)
    if (n <= 0) {
        return false;
    }

    // Check if n is a power of two using bitwise AND operation
    return (n & (n - 1)) == 0;
}

/*

1. **Non-Positive Check:**
   - The `if (n <= 0)` condition is used to handle the case where `n` is non-positive (negative or zero). Numbers less than or equal to zero are not powers of two, so the function returns `false` in such cases.

2. **Power of Two Check:**
   - The key check is done with the expression `(n & (n - 1)) == 0`. This checks whether `n` and `n - 1` have no common '1' bit. If this condition is true, then `n` is a power of two.

   - This bitwise AND operation essentially checks that there is only one '1' bit in the binary representation of `n`. If there's more than one '1' bit, subtracting 1 from `n` will result in a binary number with a '0' in the same position as the rightmost '1' in `n`. The AND operation will then be non-zero.

   - For example, let's consider the binary representation:
     - `n = 8` (1000 in binary)
     - `n - 1 = 7` (0111 in binary)
     - The bitwise AND operation `(8 & 7)` is `0`, indicating that `8` is a power of two.

   - Another example:
     - `n = 6` (110 in binary)
     - `n - 1 = 5` (101 in binary)
     - The bitwise AND operation `(6 & 5)` is non-zero, indicating that `6` is not a power of two.

This bitwise approach is more efficient than using a loop and the `pow` function, making the code simpler and faster for checking whether a given number is a power of two.
*/

