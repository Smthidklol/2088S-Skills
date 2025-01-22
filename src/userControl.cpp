// main.cpp

#include "vex.h"
#include "auton.h"
#include "usercontrol.h" // Include the newly created usercontrol header

using namespace vex;

// defines all the motors/Pistons
brain Brain;
competition Competition;
motor IntakeMotor = motor(PORT20, ratio18_1, false);
motor BeltMotor = motor(PORT1, ratio18_1, false);
motor LeftMotor1 = motor(PORT7, ratio18_1, false);
motor LeftMotor2 = motor(PORT6, ratio18_1, false);
motor LeftMotor3 = motor(PORT8, ratio18_1, false);
motor RightMotor1 = motor(PORT2, ratio18_1, false);
motor RightMotor2 = motor(PORT9, ratio18_1, false);
motor RightMotor3 = motor(PORT4, ratio18_1, false);
motor Doinker = motor(PORT10, ratio18_1, false);
controller Controller1 = controller(primary);
digital_out Piston1 = digital_out(Brain.ThreeWirePort.G);
digital_out Piston2 = digital_out(Brain.ThreeWirePort.G);

int main() {
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Set up callbacks for autonomous and driver control periods.
}