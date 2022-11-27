#include "calculator.hpp" 
#include <gtest/gtest.h>  
// Demonstrate some basic assertions. 
TEST(AddTest, BasicAdd) { 
    const Calculator calc;   
    EXPECT_EQ(calc.add(1, 2), 3); 
}