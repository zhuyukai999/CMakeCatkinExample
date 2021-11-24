#include "OtherFile/OtherFile.h"

namespace OtherFile {

std::vector<int> getValue() {
  auto value1 = getAnotherValue();
      std::vector<int> value2 = {value1, value1, value1};
        return value2;
    }
} // namespace answer
