#include "example_head_file/ExampleOne.h"
#include "example_head_file/ExampleTwo.h"
// gtest
#include <gtest/gtest.h>

// STD
#include <vector>

#include <Eigen/Core>

using namespace example_a;
using namespace example_b;

TEST(aaaa, ccc
) {
  ClassA *class_a = new ClassA();
  std::cout<<"aaaa"<<std::endl;
  EXPECT_EQ(100, class_a->testResult());
}

TEST(aaaa, ddd) {
  ClassB *class_b = new ClassB();
  std::cout<<"aaaa"<<std::endl;
  EXPECT_NEAR(98, class_b->testResult(),1);
}
