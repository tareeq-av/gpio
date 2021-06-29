#ifndef GPIO_INCLUDE_INPUT_HPP_
#define GPIO_INCLUDE_INPUT_HPP_

#include <memory>

namespace tareeq {
namespace gpio {
class Input {
 public:
  virtual ~Input() = default;
  //
  virtual void WaitForEdge() = 0;
  virtual const long& GetTotalCount() = 0;    
};

  // simple factor method
  std::unique_ptr<Input> MakeInputPin();
}  // namespace gpio
}  // namespace tareeq
#endif  // GPIO_INCLUDE_INPUT_HPP_
