#include "OtherFile/OtherFile.hpp"

namespace OtherFile {

std::vector<int> getValue() {
  int aaa = getAnotherValue();
      std::vector<int> bbb = {aaa,aaa,aaa};
        return bbb;
    }
} // namespace answer
