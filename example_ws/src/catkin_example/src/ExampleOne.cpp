//
// Created by zyk on 2021/11/16.
//
#include "example_head_file/ExampleOne.h"

namespace example_a{

cv::Mat ClassA::grayscalePicture(cv::Mat src){
        cv::Mat gray;
        cv::cvtColor(src, gray,CV_BGR2GRAY);
        return gray;
      }

int ClassA::testResult(){
  return 100;
}
}