#include "header.hpp"

/**
 * @brief Solves Judgments safe code.
 * 
 */
int main(int argc, char *argv[])
{
    try
    {
        int *pointer;
        if (argc == 1)
        {
            // Running the solver.
            pointer = Solver2().run();
            std::cout << "For safe #2";
        }
        else if (argc == 5)
        {
            // Getting values from command line arguments.
            int A = Tool::CharToInt(*argv[1]);
            int B = Tool::CharToInt(*argv[2]);
            int C = Tool::CharToInt(*argv[3]);
            int D = Tool::CharToInt(*argv[4]);
            // Running the solver.
            pointer = Solver(A, B, C, D).run();
            std::cout << "For safe #1";
        }
        else
            throw INCORRECT_AMOUNT_OF_ARGUMENTS;
        // Printing correct safe code.
        std::cout << " the code is: ";
        for (int i = 0; i < 4; ++i)
            std::cout << pointer[i];
        std::cout << std::endl;
        return 0;
    }
    // If A, B, C and D values where incorrect.
    catch (Exception e)
    {
        if (e == (TEST_AAAA_FAILED))
            std::cout << "AAAA test failed!";
        else if (e == (TEST_BBBB_FAILED))
            std::cout << "BBBB test failed!";
        else if (e == (TEST_CCCC_FAILED))
            std::cout << "CCCC test failed!";
        else if (e == (TEST_DDDD_FAILED))
            std::cout << "DDDD test failed!";
        else if (e == (TEST_ACAC_FAILED))
            std::cout << "ACAC test failed!";
        else if (e == (TEST_ABCD_FAILED))
            std::cout << "ABCD test failed!";
        else if (e == (TEST_111_2_3_FAILED))
            std::cout << "111x2=3 test failed!";
        else if (e == (TEST_222_0_1_FAILED))
            std::cout << "222x0=1 test failed!";
        else if (e == (TEST_11_99_4_FAILED))
            std::cout << "11x99=4 test failed!";
        else if (e == (TEST_3_4_2_FAILED))
            std::cout << "3x4=2 test failed!";
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