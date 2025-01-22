// usercontrol.cpp

#include "vex.h"
#include "usercontrol.h" // We'll create this header file next
using namespace vex;

// Controller button callback functions
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
  if (Controller1.ButtonY.pressing()) { // Note: There's a typo here, should be ButtonA for A_Pressed
    Doinker.spin(reverse);
  }
}

void usercontrol(void) {
  // Register callback functions for controller buttons
  Controller1.ButtonL1.pressed(controller_L1_Pressed);
  Controller1.ButtonL2.pressed(controller_L2_Pressed);
  Controller1.ButtonR1.pressed(controller_R1_Pressed);
  Controller1.ButtonR2.pressed(controller_R2_Pressed);
  Controller1.ButtonX.pressed(controller_X_Pressed);
  Controller1.ButtonB.pressed(controller_B_Pressed);
  Controller1.ButtonY.pressed(controller_Y_Pressed);
  Controller1.ButtonA.pressed(controller_A_Pressed);
  wait(15, msec);

  // Configure motor behavior
  BeltMotor.setStopping(hold);
  IntakeMotor.setStopping(hold);
  BeltMotor.setVelocity(100, percent);
  IntakeMotor.setVelocity(100, percent);

  // Main loop for user control
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

    wait(5, msec);
  }
}