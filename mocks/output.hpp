#ifndef GPIO_MOCKS_OUTPUT_HPP_
#define GPIO_MOCKS_OUTPUT_HPP_

#include "tareeq/gpio/output.h"

namespace tareeq {
namespace mocks {
class MockOutput : public tareeq::gpio::Output {
 public:
  MOCK_METHOD0(On, void());
  MOCK_METHOD0(Off, void());
};
}  // end namespace mocks
}  // end namespace tareeq

#endif  // GPIO_MOCKS_OUTPUT_HPP_
