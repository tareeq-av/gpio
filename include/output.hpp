#ifndef GPIO_INCLUDE_OUTPUT_HPP_
#define GPIO_INCLUDE_OUTPUT_HPP_

#include <memory>

namespace tareeq {
namespace gpio {
class Output {
 public:
  virtual ~Output() = default;
  //
  virtual void On() = 0;
  virtual void Off() = 0;
};
  // simple factory method
  std::unique_ptr<Output> MakeOutputPin();
}  // namespace gpio
}  // namespace tareeq

#endif  // GPIO_INCLUDE_OUTPUT_HPP_
