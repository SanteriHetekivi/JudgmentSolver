#ifndef SOLVER_HPP
#define SOLVER_HPP
#include "Exeption.hpp"

class Solver
{
public:
    Solver(int A, int B, int C, int D);
    int *run();

private:
    int A_, B_, C_, D_;
    bool test(int, int, int, int, int);
    int solve(int, int, int, int);
    int getNumber();
};
#endif