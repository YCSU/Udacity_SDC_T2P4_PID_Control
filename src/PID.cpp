#include "PID.h"
#include <iostream>
#include <cmath>
using namespace std;


PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this -> Kp = Kp;
  this -> Ki = Ki;
  this -> Kd = Kd;
  
  this -> p_error = 0.;
  this -> i_error = 0.;
  this -> d_error = 0.;
  this -> prev_cte = 0.;
}

void PID::set(double Kp, double Ki, double Kd) {
  this -> Kp = Kp;
  this -> Ki = Ki;
  this -> Kd = Kd;
}


double PID::steer(){
  
   return -tanh(this->Kp * this->p_error 
                + this->Ki * this->i_error
                + this->Kd * this->d_error);
}

void PID::UpdateError(double cte) {
  this->p_error = cte;
  
  this->i_error = cte - this->prev_cte;
  this->prev_cte = cte;
  
  this->d_error += cte;
  
}



