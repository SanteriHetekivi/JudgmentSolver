#include "header.hpp"

/**
 * @brief Solves Judgments safe code.
 * 
 */
int main(int argc, char *argv[])
{
    try
    {
        // Getting values from command line arguments.
        if (argc != 5)
            throw INCORRECT_AMOUNT_OF_ARGUMENTS;
        int A = Tool::CharToInt(*argv[1]);
        int B = Tool::CharToInt(*argv[2]);
        int C = Tool::CharToInt(*argv[3]);
        int D = Tool::CharToInt(*argv[4]);
        // Running the solver.
        Solver mSolver = Solver(A, B, C, D);
        int *pointer = mSolver.run();
        // Printing correct safe code.
        std::cout << "The safe code is: ";
        for (int i = 0; i < 4; ++i)
            std::cout << pointer[i];
        std::cout << std::endl;
        return 0;
    }
    // If A, B, C and D values where incorrect.
    catch (Exception e)
    {
        if (e == (AAAA_TEST_FAILED))
            std::cout << "AAAA test failed!";
        else if (e == (BBBB_TEST_FAILED))
            std::cout << "BBBB test failed!";
        else if (e == (CCCC_TEST_FAILED))
            std::cout << "CCCC test failed!";
        else if (e == (DDDD_TEST_FAILED))
            std::cout << "DDDD test failed!";
        else if (e == (ACAC_TEST_FAILED))
            std::cout << "ACAC test failed!";
        else if (e == (ABCD_TEST_FAILED))
            std::cout << "ABCD test failed!";
        else if (e == (CHAR_NOT_INT) || e == (INCORRECT_AMOUNT_OF_ARGUMENTS))
        {
            std::cout << "Incorrect arguments!" << std::endl
                      << "Should be called like:" << std::endl
                      << "'executable A_INTEGER B_INTEGER C_INTEGER E_INTEGER'" << std::endl
                      << "=>" << std::endl
                      << "'executable 1 2 3 4'";
        }
        else
            std::cout << "Unknown error " << e << "!";
        std::cout << std::endl;
    }
    return 1;
}