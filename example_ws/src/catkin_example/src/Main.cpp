//
// Created by zyk on 2021/11/16.
//
#include "example_head_file/ExampleOne.h"
#include "example_head_file/ExampleTwo.h"
#include<image_transport/image_transport.h>
#include<cv_bridge/cv_bridge.h>
#include <opencv2/imgcodecs.hpp>
#include <cv.hpp>

int main(int argc, const char *argv[]) {
  cv::Mat img;
  img = cv::imread("/home/zyk/timg.jpg");
  if(!img.empty()){
    cv::imshow("image", img);
  }
  cv::Mat gray = example_a::ClassA::grayscalePicture(img);
  cv::Mat binary = example_b::ClassB::binaryPicture(gray);
  cv::imshow("gray", gray);
  cv::imshow("binary", binary);
  cv::waitKey(0);
  return 0;

}
