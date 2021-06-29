#ifndef GPIO_MOCKS_GPIO_HPP_
#define GPIO_MOCKS_GPIO_HPP_

#include <string>

namespace tareeq {
namespace mocks {

struct MockLineRequest {
 public:
  enum {
    DIRECTION_AS_IS = 1, DIRECTION_INPUT, DIRECTION_OUTPUT, EVENT_FALLING_EDGE,
    EVENT_RISING_EDGE, EVENT_BOTH_EDGES
  };
  std::string consumer;
  int request_type;
};

class MockLine {
 public:
  enum { DIRECTION_INPUT = 1, DIRECTION_OUTPUT };
  enum { ACTIVE_LOW = 1, ACTIVE_HIGH };

  MockLine()  = default;
  ~MockLine() = default;

  void request(MockLineRequest request) {
    // do nothing for now
  }

  void set_value(int value) {
    // do nothing for now
  }

  MockLineRequest request_;
};

class MockChip {
 public:
  enum  {
    OPEN_LOOKUP = 1, OPEN_BY_PATH, OPEN_BY_NAME, OPEN_BY_LABEL,
    OPEN_BY_NUMBER
  };

  MockChip() = default;
  ~MockChip() = default;
  MockChip(std::string chipnumber, int openby) {}
  MockLine get_line(int linenumber) {
    return line_;
  }

  MockLine line_;
};
}  // end namespace mocks
}  // end namespace tareeq

#endif  // GPIO_MOCKS_GPIO_HPP_
