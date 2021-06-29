#ifndef GPIO_MOCKS_INPUT_HPP_
#define GPIO_MOCKS_INPUT_HPP_

#include "tareeq/gpio/input.h"

namespace tareeq {
namespace mocks {
class MockInput : public tareeq::gpio::Input {
 public:
  MOCK_METHOD0(WaitForEdge, void());
  MOCK_METHOD0(GetTotalCount, const int64&());
};
}  // end namespace mocks
}  // end namespace tareeq

#endif  // GPIO_MOCKS_INPUT_HPP_
