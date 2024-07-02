#pragma once
#include"UserType.h"
#include"Inspection.h"
class BaseUser
{
private:
	//int id;//卡号
	//int num;
	//int code;//密码
	//Character userType;
public:

	
	void Registry();//登录（用户登录）
	void Verify();//验证输入ID和密码是否符合
	void Save();//如果不符合，则写入新的ID和密码
	
};