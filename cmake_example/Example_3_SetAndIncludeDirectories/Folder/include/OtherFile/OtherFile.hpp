#pragma once
#include <vector>

#ifndef EXAMPLE_3_FOLDER_INCLUDE_OTHERFILE_OTHERFILE
#define EXAMPLE_3_FOLDER_INCLUDE_OTHERFILE_OTHERFILE

namespace OtherFile {

std::vector<int> getValue();

inline int getAnotherValue(){
  return 6;
}
} // namespace answer
#endif //EXAMPLE_3_FOLDER_INCLUDE_OTHERFILE_OTHERFILE