// gtest
#include <gtest/gtest.h>

// Run all the tests that were declared with TEST()
int main(int argc, char **argv) {
  // 分析gtest程序的命令行参数
  testing::InitGoogleTest(&argc, argv);
  // 调用RUN_ALL_TESTS()运行所有测试用例
  return RUN_ALL_TESTS();
}