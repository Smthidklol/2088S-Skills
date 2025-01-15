#include "vex.h"

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

void autonomous(void) {
  ;

  // step1: drive to mogo
  LeftMotor1.spin(forward);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(2, sec);
  RightMotor1.stop();
  RightMotor2.stop();
  LeftMotor1.stop();
  LeftMotor2.stop();
  RightMotor3.stop();
  LeftMotor3.stop();
  wait(30, msec);
  Piston1 = true;
  Piston2 = true;
  wait(1, sec);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(3, sec);
  BeltMotor.stop();
  RightMotor1.spin(reverse);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor1.spin(reverse);
  LeftMotor2.spin(reverse);
  LeftMotor3.spin(forward);
  wait(500, msec);
  RightMotor1.spin(reverse);
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(500, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  RightMotor1.stop();
  LeftMotor1.stop();
  RightMotor2.stop();
  LeftMotor2.stop();
  LeftMotor3.stop();
  RightMotor3.stop();
  IntakeMotor.stop();
  BeltMotor.stop();
  wait(500, msec);
  RightMotor1.spin(forward);
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(500, msec);
  RightMotor1.spin(reverse);
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(250, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  RightMotor1.stop();
  LeftMotor1.stop();
  RightMotor2.stop();
  LeftMotor2.stop();
  LeftMotor3.stop();
  RightMotor3.stop();
  IntakeMotor.stop();
  BeltMotor.stop();
  wait(500, msec);
  RightMotor1.spin(forward);
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(1, sec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(1, sec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  RightMotor1.stop();
  LeftMotor1.stop();
  RightMotor2.stop();
  LeftMotor2.stop();
  LeftMotor3.stop();
  RightMotor3.stop();
  IntakeMotor.stop();
  BeltMotor.stop();
  wait(500, msec);
  RightMotor1.spin(forward);
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(1, sec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(1, sec);
  RightMotor1.stop();
  LeftMotor1.stop();
  RightMotor2.stop();
  LeftMotor2.stop();
  LeftMotor3.stop();
  RightMotor3.stop();
  IntakeMotor.stop();
  BeltMotor.stop();
  wait(500, msec);
  RightMotor1.spin(forward);
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(1, sec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(1500, msec);
  RightMotor1.stop();
  LeftMotor1.stop();
  RightMotor2.stop();
  LeftMotor2.stop();
  LeftMotor3.stop();
  RightMotor3.stop();
  IntakeMotor.stop();
  BeltMotor.stop();
  wait(500, msec);
  RightMotor1.spin(reverse);
  LeftMotor1.spin(forward);
  RightMotor2.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(500, msec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(250, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(250, msec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(reverse);
  wait(250, msec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(1, sec);
  RightMotor1.stop();
  LeftMotor1.stop();
  RightMotor2.stop();
  LeftMotor2.stop();
  LeftMotor3.stop();
  RightMotor3.stop();
  Piston1 = false;
  Piston2 = false;
  wait(500, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(4, sec);
  LeftMotor1.spin(reverse);  // turn left
  RightMotor1.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(forward);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(2, sec);
  Piston1 = true;
  Piston2 = true;
  wait(100, msec);
  LeftMotor1.spin(forward);  // turn right
  RightMotor1.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(reverse);
  wait(500, msec);
  LeftMotor1.spin(reverse);  // forward
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(500, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
  wait(400, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(400, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(400, msec);
  wait(500, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
  wait(400, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(400, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(400, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(100, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  LeftMotor1.spin(forward);  // turn right
  RightMotor1.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(reverse);
  wait(500, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(500, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  LeftMotor1.spin(forward);  // turn right
  RightMotor1.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(reverse);
  wait(500, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(500, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  LeftMotor1.spin(forward);  // turn right
  RightMotor1.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(reverse);
  wait(500, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(3, sec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(3500, msec);
  Piston1 = false;
  Piston2 = false;
  wait(250, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(6, sec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(reverse);
  wait(400, msec);
  LeftMotor1.spin(reverse);
  RightMotor1.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(4500, msec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(reverse);
  wait(500, msec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(500, msec);
  Piston1 = true;
  Piston2 = true;
}

// Autonomous code

void controller_L1_Pressed() {
  while (Controller1.ButtonL1.pressing()) {
    BeltMotor.spin(forward);
    wait(5, msec);
  }
  BeltMotor.stop();
}

void controller_L2_Pressed() {
  while (Controller1.ButtonL2.pressing()) {
    BeltMotor.spin(reverse);
    wait(5, msec);
  }
  BeltMotor.stop();
}

void controller_X_Pressed() {
  Piston1.set(true);
  Piston2.set(true);
  while (Controller1.ButtonX.pressing()) {
    wait(5, msec);
  }
}

void controller_B_Pressed() {
  if (Controller1.ButtonB.pressing()) {
    Piston1.set(false);
    Piston2.set(false);
  }
}

void controller_R1_Pressed() {
  while (Controller1.ButtonR1.pressing()) {
    IntakeMotor.spin(reverse);
    wait(5, msec);
  }
  IntakeMotor.stop();
}

void controller_R2_Pressed() {
  while (Controller1.ButtonR2.pressing()) {
    IntakeMotor.spin(forward);
    wait(5, msec);
  }
  IntakeMotor.stop();
}

void controller_Y_Pressed() {
  if (Controller1.ButtonY.pressing()) {
    Doinker.spin(forward);
  }
}
void controller_A_Pressed() {
  if (Controller1.ButtonY.pressing()) {
    Doinker.spin(reverse);
  }
}
// sets callback functions for the doinker, intake, belt, and the pistons
void usercontrol(void) {
  Controller1.ButtonL1.pressed(controller_L1_Pressed);
  Controller1.ButtonL2.pressed(controller_L2_Pressed);
  Controller1.ButtonR1.pressed(controller_R1_Pressed);
  Controller1.ButtonR2.pressed(controller_R2_Pressed);
  Controller1.ButtonX.pressed(controller_X_Pressed);
  Controller1.ButtonB.pressed(controller_B_Pressed);
  Controller1.ButtonY.pressed(controller_Y_Pressed);
  Controller1.ButtonA.pressed(controller_A_Pressed);
  wait(15, msec);

  // sets velocity and configures hold settings of belt and intake motors
  BeltMotor.setStopping(hold);
  IntakeMotor.setStopping(hold);
  BeltMotor.setVelocity(100, percent);
  IntakeMotor.setVelocity(100, percent);

  // sets motor velocity depending on the position the joysticks are in
  while (true) {
    LeftMotor1.setVelocity(Controller1.Axis3.position(), percent);
    RightMotor1.setVelocity(Controller1.Axis2.position(), percent);
    LeftMotor2.setVelocity(Controller1.Axis3.position(), percent);
    RightMotor2.setVelocity(Controller1.Axis2.position(), percent);
    LeftMotor3.setVelocity(Controller1.Axis3.position(), percent);
    RightMotor3.setVelocity(Controller1.Axis2.position(), percent);

    LeftMotor1.spin(reverse);
    RightMotor1.spin(forward);
    LeftMotor2.spin(reverse);
    RightMotor2.spin(reverse);
    RightMotor3.spin(forward);
    LeftMotor3.spin(forward);

    // uwu nya~ :3 nuh uh
    wait(5, msec);
  }
}
int main() {
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Set up callbacks for autonomous and driver control periods.
}
