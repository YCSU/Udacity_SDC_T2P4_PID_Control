# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

[//]: # (Image References)
[image1]: ./img/CTE_0_0_0.png
[image2]: ./img/CTE_0.09_0_0.png
[image3]: ./img/CTE_0.09_1.3_0.png
[image4]: ./img/CTE_0.09_1.3_0.003.png


---

## Dependencies

* cmake >= 3.5
* make >= 4.1
* gcc/g++ >= 5.4
* [uWebSockets](https://github.com/uWebSockets/uWebSockets) == 0.13, but the master branch will probably work just fine
  
## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

## The effect of PID components
The value of K<sub>p</sub>, K<sub>i</sub>, and K<sub>d</sub> was chosen by manually tuning. The tuning process is similar to twiddle but mixed with the human intelligence :D

The effect of the PID component is demonstrated by the following examples. The car drove on the same path with different coefficients.

### K<sub>p</sub>=0, K<sub>d</sub>=0, K<sub>i</sub>=0
When all the coefficients are zeros, the CTE increased indefinitely.
![][image1]

### K<sub>p</sub>=0.09, K<sub>d</sub>=0, K<sub>i</sub>=0
As we increased K<sub>p</sub>, the CTE initially decreased. However, the car overshot the ideal trajectory and started to oscillate
![][image2]

### K<sub>p</sub>=0.09, K<sub>d</sub>=1.3, K<sub>i</sub>=0
 We also increased K<sub>d</sub>. The car was able to stay on the track. Notice that there is a spike.
![][image3]

### K<sub>p</sub>=0.09, K<sub>d</sub>=1.3, K<sub>i</sub>=0.003
We also increased K<sub>i</sub>. The CTE becamce a bit smoother. There is no steady state error in this case. However, if there was, I component would help correct this error
![][image4]
