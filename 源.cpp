#include<iostream>
#include"Save.h"
#include"Draw.h"
#include<windows.h>
#include <time.h> 
using namespace std;
int main()
{//要求用文件保存当前用户的用户卡号、计算机号、上网开始的时间，并在退出时计算上网的费用
	time_t first, second;
	first = time(NULL);
	//获得日历时间
	Save saveManager;
	Draw menuManager;	
	
		    menuManager.DrawMenu();
		    system("pause>nul");
			cout << "开始上网" << endl;
			saveManager.SaveData();
			saveManager.GetData();
			cout << "正在上网，开始计费" << endl;
			cout << "按任意键退出上网" << endl;
			system("pause>nul");
			second = time(NULL);
			cout << endl;
			cout << endl;


			cout << "您上网的时间为" << difftime(second, first) / 3600 << "小时" << endl;
			cout << "您的上网费用为" << difftime(second, first) / 3600 * 5 << "元" << endl;
				return 0;
}