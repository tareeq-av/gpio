#ifndef GPIO_INCLUDE_PWM_HPP_
#define GPIO_INCLUDE_PWM_HPP_

#include <memory>

namespace tareeq {
namespace gpio {
class Pwm {
 public:
  virtual ~Pwm() = default;

  //
  virtual void Pulse() = 0;
  virtual void Start() = 0;
  virtual void Stop() = 0;
  virtual void SetSpeed(double speed) = 0;
  // virtual const double &GetDutyCycle() = 0;
  virtual void SetFrequency(double freq) = 0;
  virtual inline void CalculateDuration() = 0;
};

  // simple factory method
  std::unique_ptr<Pwm> MakePwmPin();
}  // namespace gpio
}  // namespace tareeq

#endif  // GPIO_INCLUDE_PWM_HPP_
