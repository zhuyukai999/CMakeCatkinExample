#include "example_head_file/ExampleOne.h"
#include "example_head_file/ExampleTwo.h"
// gtest
#include <gtest/gtest.h>
// STD
#include <vector>

using namespace example_a;
using namespace example_b;

TEST(testcase1, testA) {
  ClassA *class_a = new ClassA();
  EXPECT_EQ(60, class_a->testResult());
}

TEST(testcase1, testB) {
  ClassB *class_b = new ClassB();
  EXPECT_NEAR(100, class_b->testResult(),1);
}

TEST(testcase2, testA) {
  ClassA *class_a = new ClassA();
  EXPECT_EQ(100, class_a->testResult());
}

TEST(testcase2, testB) {
  ClassB *class_b = new ClassB();
  EXPECT_NEAR(100, class_b->testResult(),1);
}