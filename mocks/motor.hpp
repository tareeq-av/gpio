#ifndef GPIO_MOCKS_MOTOR_HPP_
#define GPIO_MOCKS_MOTOR_HPP_

#include "tareeq/mocks/pwm.h"
#include "tareeq/mocks/output.h"
#include "tareeq/control/motor.h"

namespace tareeq {
namespace mocks {
class MockMotor : public tareeq::control::Motor {
 public:
  MockMotor() : tareeq::control::Motor(
    std::make_unique<MockPwm>(),
    std::make_unique<MockOutput>(),
    std::make_unique<MockOutput>()) {}

    MOCK_METHOD0(Start, bool());
    MOCK_METHOD0(Stop, bool());
    MOCK_METHOD0(SpinForward, bool());
    MOCK_METHOD0(SpinBackward, bool());
}
}  // end namespace mocks
}  // end namespace tareeq

#endif  // GPIO_MOCKS_MOTOR_HPP_
