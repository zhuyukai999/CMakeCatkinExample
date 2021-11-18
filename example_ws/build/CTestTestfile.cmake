# CMake generated Testfile for 
# Source directory: /home/zyk/all_example/example_ws/src/rm_template
# Build directory: /home/zyk/all_example/example_ws/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_ros_package_template_gtest_ros_package_template-test "/home/zyk/all_example/example_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/zyk/all_example/example_ws/build/test_results/ros_package_template/gtest-ros_package_template-test.xml" "--return-code" "/home/zyk/all_example/example_ws/build/devel/lib/ros_package_template/ros_package_template-test --gtest_output=xml:/home/zyk/all_example/example_ws/build/test_results/ros_package_template/gtest-ros_package_template-test.xml")
set_tests_properties(_ctest_ros_package_template_gtest_ros_package_template-test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/melodic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/zyk/all_example/example_ws/src/rm_template/CMakeLists.txt;131;catkin_add_gtest;/home/zyk/all_example/example_ws/src/rm_template/CMakeLists.txt;0;")
subdirs("gtest")
