//
// Created by zyk on 2021/11/16.
//
#include <opencv2/imgcodecs.hpp>
#include <cv.hpp>

#ifndef ROS_PACKAGE_TEMPLATE_SRC_CATKIN_EXAMPLE1_INCLUDE_EXAMPLE_HEAD_FILE_EXAMPLEONE_H_
#define ROS_PACKAGE_TEMPLATE_SRC_CATKIN_EXAMPLE1_INCLUDE_EXAMPLE_HEAD_FILE_EXAMPLEONE_H_


namespace example_a{
  class ClassA{
   public:
    static cv::Mat grayscalePicture(cv::Mat src);
    int testResult();
  };
}

#endif //ROS_PACKAGE_TEMPLATE_SRC_CATKIN_EXAMPLE1_INCLUDE_EXAMPLE_HEAD_FILE_EXAMPLEONE_H_