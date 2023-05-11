// State Transition Testing
#include <iostream>
using namespace std;

enum class FanState {
    Off,
    Low,
    Medium,
    High
};

class Fan {
public:
    Fan() {
        currentState = FanState::Off;
    }

    void setState(FanState newState) {
        currentState = newState;
    }

    FanState getState() {
        return currentState;
    }

private:
    FanState currentState;
};

void testFan() {
    Fan fan;

    // Test transitions from Off state
    fan.setState(FanState::Low);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    fan.setState(FanState::Medium);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    fan.setState(FanState::High);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    // Test transitions from Low state
    fan.setState(FanState::Off);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    fan.setState(FanState::Medium);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    fan.setState(FanState::High);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    // Test transitions from Medium state
    fan.setState(FanState::Off);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    fan.setState(FanState::Low);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    fan.setState(FanState::High);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    // Test transitions from High state
    fan.setState(FanState::Off);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    fan.setState(FanState::Low);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;

    fan.setState(FanState::Medium);
    cout << "Fan state: " << static_cast<int>(fan.getState()) << endl;
}

int main() {
    testFan();
    return 0;
}
