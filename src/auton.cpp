// autonomous.cpp

#include "vex.h"
using namespace vex;

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
  RightMotor1.spin(forward);
  RightMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor1.spin(reverse);
  LeftMotor2.spin(reverse);
  LeftMotor3.spin(forward);
  wait(500, msec);
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
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
  RightMotor1.spin(reverse);  // turn left
  LeftMotor1.spin(forward);
  RightMotor2.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(500, msec);
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
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
  RightMotor1.spin(reverse);  // turn left
  LeftMotor1.spin(forward);
  RightMotor2.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(1, sec);
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
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
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
  wait(250, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(200, msec);
  RightMotor1.spin(forward);  // turn right
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(550, msec);
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
  wait(200, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  RightMotor1.stop();  // top left
  LeftMotor1.stop();
  RightMotor2.stop();
  LeftMotor2.stop();
  LeftMotor3.stop();
  RightMotor3.stop();
  IntakeMotor.stop();
  BeltMotor.stop();
  wait(500, msec);
  LeftMotor1.spin(forward);
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(500, msec);
  Piston1 = false;
  Piston2 = false;
  // top left done
  wait(500, msec);
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
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
  RightMotor1.spin(reverse);  // turn left
  LeftMotor1.spin(forward);
  RightMotor2.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(700, msec);
  LeftMotor1.spin(forward);  // back
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(3, sec);
  Piston1 = true;
  Piston2 = true;
  wait(100, msec);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  RightMotor1.spin(reverse);  // turn left
  LeftMotor1.spin(forward);
  RightMotor2.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(70, msec);
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
  wait(250, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(100, msec);
  RightMotor1.spin(forward);  // turn right
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(250, msec);
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
  wait(250, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  RightMotor1.spin(reverse);  // turn left
  LeftMotor1.spin(forward);
  RightMotor2.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(750, msec);
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
  wait(2, sec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  RightMotor1.spin(reverse);  // turn left
  LeftMotor1.spin(forward);
  RightMotor2.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(650, msec);
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
  wait(500, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  RightMotor1.spin(forward);  // turn right
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(700, msec);
  RightMotor1.spin(reverse);  // straight
  LeftMotor1.spin(reverse);
  RightMotor2.spin(forward);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(forward);
  wait(500, msec);
  IntakeMotor.setVelocity(100, percent);
  IntakeMotor.spin(reverse);
  BeltMotor.setVelocity(100, percent);
  BeltMotor.spin(forward);
  wait(500, msec);
  RightMotor1.spin(forward);  // turn right
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(1, sec);
  LeftMotor1.spin(forward);  // back
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(400, msec);
  RightMotor1.spin(forward);  // turn right
  LeftMotor1.spin(reverse);
  RightMotor2.spin(reverse);
  LeftMotor2.spin(reverse);
  RightMotor3.spin(forward);
  LeftMotor3.spin(forward);
  wait(500, msec);
  LeftMotor1.spin(forward);  // back
  RightMotor1.spin(reverse);
  LeftMotor2.spin(forward);
  RightMotor2.spin(forward);
  RightMotor3.spin(reverse);
  LeftMotor3.spin(reverse);
  wait(3500, msec);
  Piston1 = false;
  Piston2 = false;
}