#ifndef GPIO_INCLUDE_OUTPUT_IMPL_HPP_
#define GPIO_INCLUDE_OUTPUT_IMPL_HPP_

#include "gpio.h"
#include "output.h"

namespace tareeq {
namespace gpio {
template <typename TChip, typename TLine, typename TLineRequest>
class OutputImpl : public Output, public Gpio<TChip, TLine, TLineRequest> {
  const std::string direction_ = std::string("output");
 public:
  explicit OutputImpl(const int& line_number):
  Gpio<TChip, TLine, TLineRequest>(line_number, direction_) {}

  virtual const std::string &GetDirection() {
    return direction_;
  }

  virtual void On() {
    this->GpioOutput(1);
  }

  virtual void Off() {
    this->GpioOutput(0);
  }
}
}  // namespace gpio
}  // namespace tareeq

#endif // GPIO_INCLUDE_OUTPUT_IMPL_HPP_
