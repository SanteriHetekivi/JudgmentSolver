#include "Solver.hpp"

// public:

/**
 * @brief Initialize solver with integer values for A, B, C and D.
 * 
 */
Solver::Solver(int A, int B, int C, int D) : A_(A), B_(B), C_(C), D_(D)
{
}

/**
 * @brief Running solver and returning pointer to correct result.
 * 
 */
int *Solver::run()
{
    // Running all the tests.
    if (!this->test(A_, A_, A_, A_, 4))
        throw TEST_AAAA_FAILED;
    if (!this->test(B_, B_, B_, B_, 8))
        throw TEST_BBBB_FAILED;
    if (!this->test(C_, C_, C_, C_, 0))
        throw TEST_CCCC_FAILED;
    if (!this->test(D_, D_, D_, D_, 4))
        throw TEST_DDDD_FAILED;
    if (!this->test(A_, C_, A_, C_, 2))
        throw TEST_ACAC_FAILED;
    if (!this->test(A_, B_, C_, D_, 4))
        throw TEST_ABCD_FAILED;
    // Solving safe numbers.
    int *result = new int[4];
    result[0] = this->solve(C_, B_, D_, A_);
    result[1] = this->solve(C_, C_, C_, A_);
    result[2] = this->solve(B_, A_, C_, C_);
    result[3] = this->solve(A_, A_, B_, C_);
    return result;
}

// private:
/**
 * @brief Testing if given integer inputs give the given result.
 * 
 */
bool Solver::test(int int1, int int2, int int3, int int4, int result)
{
    int solve_result = this->solve(int1, int2, int3, int4);
    return solve_result == result;
}

/**
 * @brief Solve number with given input numbers.
 * 
 */
int Solver::solve(int int1, int int2, int int3, int int4)
{
    return int1 + int2 + int3 + int4;
}