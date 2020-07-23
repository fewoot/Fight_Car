#pragma once
#include <RoboClaw.h>
#include <Arduino.h>



enum Action_Direction {
	straight =0 ,
	left =1 ,
	right =-1
};


/// <summary>
/// 这组是前进函数
/// </summary>
/// <param name="speed">速度</param>
/// <param name="direction">方向：只有三种，前进=straight，左转=left，右转=right</param>
/// <param name="turn_speed">转向速度</param>
/// <param name="accel">加速度</param>
/// <returns>一般只返回true，表示正常</returns>
bool goFront(int speed, Action_Direction direction, int turn_speed, int accel);
bool goFront(int speed);
bool goFront(int speed, Action_Direction direction, int turn_speed);
bool goFront();

/// <summary>
/// 这组是后退函数
/// </summary>
/// <param name="speed">速度</param>
/// <param name="direction">方向：只有三种，前进=straight，左转=left，右转=right</param>
/// <param name="turn_speed">转向速度</param>
/// <param name="accel">加速度</param>
/// <returns>一般只返回true，表示正常</returns>
bool goBack(int speed, Action_Direction direction, int turn_speed, int accel);
bool goBack(int speed);
bool goBack(int speed, Action_Direction direction, int turn_speed);
bool goBack();

/// <summary>
/// 这组是原地旋转函数，注意，除非另外指令，不然不会停止
/// </summary>
/// <param name="speed">原地转身速度</param>
/// <param name="direction">方向</param>
/// <param name="accel">加速度</param>
/// <returns>默认返回true</returns>
bool turn(int speed, Action_Direction direction, int accel);
bool turn(int speed, Action_Direction direction);

/// <summary>
/// 这组函数是旋转固定角度
/// </summary>
/// <param name="speed">旋转速度</param>
/// <param name="direction">方向</param>
/// <param name="accel">加速度</param>
/// <param name="position">角度（角度制）</param>
/// <returns>默认true</returns>
bool turnPosition(int speed, Action_Direction direction, int accel, int position);
bool turnPosition(int speed, Action_Direction direction, int position);
bool turnPosition(Action_Direction direction, int position);

/// <summary>
/// 这组是编码器位置读取，需要自己复制到需要的地方，修改‘变量’为自己的定义
/// </summary>
/// <param name="address">地址，不用改</param>
/// <param name="status">默认</param>
/// <param name="valid">默认</param>
/// <returns>uint32_t类型数据，可以用int接受</returns>

//变量 = roboclaw.ReadEncM2(address);
//变量 = roboclaw.ReadEncM1(address);
//roboclaw.ResetEncoders(address);

