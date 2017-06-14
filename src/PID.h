#ifndef PID_H
#define PID_H

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;

  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;
  
  double prev_cte;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);
  
  /*
   * Set PID 
   */
  void set(double Kp, double Ki, double Kd);
  
  /*
   * Calculate steering angle from PID 
   */
  double steer();

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  
};

#endif /* PID_H */
