//
// Created by zyk on 2021/11/16.
//
#include <opencv2/imgcodecs.hpp>
#include <cv.hpp>

#ifndef ROS_PACKAGE_TEMPLATE_SRC_CATKIN_EXAMPLE1_SRC_EXAMPLETWO_H_
#define ROS_PACKAGE_TEMPLATE_SRC_CATKIN_EXAMPLE1_SRC_EXAMPLETWO_H_


namespace example_b{
  class ClassB {
   public:
    static cv::Mat binaryPicture(cv::Mat gray);
    int testResult();
  };

}

#endif //ROS_PACKAGE_TEMPLATE_SRC_CATKIN_EXAMPLE1_SRC_EXAMPLETWO_H_
