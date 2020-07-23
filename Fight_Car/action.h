#pragma once
#include <RoboClaw.h>
#include <Arduino.h>



enum Action_Direction {
	straight =0 ,
	left =1 ,
	right =-1
};


/// <summary>
/// ������ǰ������
/// </summary>
/// <param name="speed">�ٶ�</param>
/// <param name="direction">����ֻ�����֣�ǰ��=straight����ת=left����ת=right</param>
/// <param name="turn_speed">ת���ٶ�</param>
/// <param name="accel">���ٶ�</param>
/// <returns>һ��ֻ����true����ʾ����</returns>
bool goFront(int speed, Action_Direction direction, int turn_speed, int accel);
bool goFront(int speed);
bool goFront(int speed, Action_Direction direction, int turn_speed);
bool goFront();

/// <summary>
/// �����Ǻ��˺���
/// </summary>
/// <param name="speed">�ٶ�</param>
/// <param name="direction">����ֻ�����֣�ǰ��=straight����ת=left����ת=right</param>
/// <param name="turn_speed">ת���ٶ�</param>
/// <param name="accel">���ٶ�</param>
/// <returns>һ��ֻ����true����ʾ����</returns>
bool goBack(int speed, Action_Direction direction, int turn_speed, int accel);
bool goBack(int speed);
bool goBack(int speed, Action_Direction direction, int turn_speed);
bool goBack();

/// <summary>
/// ������ԭ����ת������ע�⣬��������ָ���Ȼ����ֹͣ
/// </summary>
/// <param name="speed">ԭ��ת���ٶ�</param>
/// <param name="direction">����</param>
/// <param name="accel">���ٶ�</param>
/// <returns>Ĭ�Ϸ���true</returns>
bool turn(int speed, Action_Direction direction, int accel);
bool turn(int speed, Action_Direction direction);

/// <summary>
/// ���麯������ת�̶��Ƕ�
/// </summary>
/// <param name="speed">��ת�ٶ�</param>
/// <param name="direction">����</param>
/// <param name="accel">���ٶ�</param>
/// <param name="position">�Ƕȣ��Ƕ��ƣ�</param>
/// <returns>Ĭ��true</returns>
bool turnPosition(int speed, Action_Direction direction, int accel, int position);
bool turnPosition(int speed, Action_Direction direction, int position);
bool turnPosition(Action_Direction direction, int position);

/// <summary>
/// �����Ǳ�����λ�ö�ȡ����Ҫ�Լ����Ƶ���Ҫ�ĵط����޸ġ�������Ϊ�Լ��Ķ���
/// </summary>
/// <param name="address">��ַ�����ø�</param>
/// <param name="status">Ĭ��</param>
/// <param name="valid">Ĭ��</param>
/// <returns>uint32_t�������ݣ�������int����</returns>

//���� = roboclaw.ReadEncM2(address);
//���� = roboclaw.ReadEncM1(address);
//roboclaw.ResetEncoders(address);

