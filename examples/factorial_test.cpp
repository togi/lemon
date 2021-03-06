///////////////////////////////////////////////////////////////////////////////
// factorial_test.cpp - A simple factorial example
//
// Time-stamp: <Last modified 2010-03-03 01:29:58 by Eric Scrivner>
//
// Description:
//   Provides a set of unit-tests using Lemon for a simple factorial function.
///////////////////////////////////////////////////////////////////////////////
#include "../lemon.h"

///////////////////////////////////////////////////////////////////////////////
// Function: factorial
//
// Computes the factorial of the given number
int factorial(int n) {
  if (n <= 0) return 1;

  int result = 1;
  while (n > 1) {
    result *= n;
    --n;
  }

  return result;
}

int main(int argc, char* argv[]) {
  // Setup lemon for 4 tests
  lemon::test<> lemon;

  // Test 1: Factorial of zero is one
  lemon.is(factorial(0), 1, "0! = 1");

  // Test 2: 3! = 3 * 2 * 1
  lemon.is(factorial(3), 3 * 2 * 1, "3! = 3 * 2 * 1");

  // Test 3: (-5)! = 1
  lemon.is(factorial(-5), 1, "(-5)! = 1");

  // Test 4: 5! = 120
  lemon.is(factorial(5), 120, "5! = 120");

  // End testing
  lemon.done();

  return 0;
}
