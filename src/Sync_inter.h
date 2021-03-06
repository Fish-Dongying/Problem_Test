#ifndef _SYNC_INTER_H_
#define _SYNC_INTER_H_

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>

#define FREQ_CAM 30
#define FREQ_IMU 100
#define T0_CAM 0.0
#define T0_IMU 0.42
#define DURATION 5

const int N = 999;

struct Q
{
    double x;
    double y;
    double z;
    double w;
};

struct Q NLerp(const Q& q1, const Q& q2, const double& t);

void GenTimestampQuaternion(std::vector<double>& cam_t, std::vector<double>& imu_t, std::vector<Q>& imu_q);

bool CalImuPose(const double &tc, const std::vector<double>& imu_t, const std::vector<Q>& imu_q, Q& qc);



#endif