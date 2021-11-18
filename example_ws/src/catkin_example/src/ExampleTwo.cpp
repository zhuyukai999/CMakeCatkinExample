//
// Created by zyk on 2021/11/16.
//
#include "example_head_file/ExampleTwo.h"

namespace example_b{

cv::Mat ClassB::binaryPicture(cv::Mat gray){
       cv::Mat binary;
       threshold(gray,binary,50,100,CV_THRESH_BINARY);
       return binary;
     }

int ClassB::testResult(){
  return 100;
}

}