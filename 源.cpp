#include<iostream>
#include"Save.h"
#include"Draw.h"
#include<windows.h>
#include <time.h> 
using namespace std;
int main()
{//Ҫ�����ļ����浱ǰ�û����û����š�������š�������ʼ��ʱ�䣬�����˳�ʱ���������ķ���
	time_t first, second;
	first = time(NULL);
	//�������ʱ��
	Save saveManager;
	Draw menuManager;	
	
		    menuManager.DrawMenu();
		    system("pause>nul");
			cout << "��ʼ����" << endl;
			saveManager.SaveData();
			saveManager.GetData();
			cout << "������������ʼ�Ʒ�" << endl;
			cout << "��������˳�����" << endl;
			system("pause>nul");
			second = time(NULL);
			cout << endl;
			cout << endl;


			cout << "��������ʱ��Ϊ" << difftime(second, first) / 3600 << "Сʱ" << endl;
			cout << "������������Ϊ" << difftime(second, first) / 3600 * 5 << "Ԫ" << endl;
				return 0;
}