#ifndef SOLVER2_HPP
#define SOLVER2_HPP
#include "Exeption.hpp"

class Solver2
{
public:
    Solver2();
    int *run();

private:
    bool test(int, int, int);
    int solve(int, int);
};
#endif