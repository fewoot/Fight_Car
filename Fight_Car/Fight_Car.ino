/*
 名称 :		Fight_Car.ino
 创建日期 :	2020/7/23 10:46:23
 作者 :		steve
*/

#include "action.h"
#include "RoboClaw.h"

RoboClaw roboclaw(&Serial3, 10000);


// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	roboclaw.begin(38400);//初始化电机
	//turnPosition(300, left, 600, 720);
}

// the loop function runs over and over again until power down or reset
void loop() {
	

}


void test() {
	
}
