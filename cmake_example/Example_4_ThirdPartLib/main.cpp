#include <iostream>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/sum.hpp>

int main(int argc, const char *argv[]) {
  //创建一个累加器
  boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::sum>> accumulator;
  //添加数据
  accumulator(6);
  accumulator(60);
  accumulator(600);
  //打印信息
  std::cout << "dynamicX:" << boost::accumulators::sum(accumulator) << std::endl;
  return 0;
}
