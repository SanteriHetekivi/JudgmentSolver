#include "Solver2.hpp"

// public:

/**
 * @brief Initialize solver with integer values for A, B, C and D.
 * 
 */
Solver2::Solver2()
{
}

/**
 * @brief Running solver and returning pointer to correct result.
 * 
 */
int *Solver2::run()
{
    // Running all the tests.
    if (!this->test(111, 2, 3))
        throw TEST_111_2_3_FAILED;
    if (!this->test(222, 0, 1))
        throw TEST_222_0_1_FAILED;
    if (!this->test(11, 99, 4))
        throw TEST_11_99_4_FAILED;
    if (!this->test(3, 4, 2))
        throw TEST_3_4_2_FAILED;
    // Solving safe numbers.
    int *result = new int[4];
    result[0] = this->solve(111, 3);
    result[1] = this->solve(12, 99);
    result[2] = this->solve(333, 0);
    result[3] = this->solve(5, 6);
    return result;
}

// private:
/**
 * @brief Testing if given integer inputs give the given result.
 * 
 */
bool Solver2::test(int int1, int int2, int result)
{
    int solve_result = this->solve(int1, int2);
    return solve_result == result;
}

/**
 * @brief Solve number with given input numbers.
 * 
 */
int Solver2::solve(int int1, int int2)
{
    int result = 0;
    int n = (int1 * int2);
    do
    {
        ++result;
        n /= 10;
    } while (n);
    return result;
}
