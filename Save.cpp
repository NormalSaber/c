

#define _CRT_SECURE_NO_WARNINGS
#include "Save.h"
void Save::SaveData()
{
    cout << "��������λ�û�����" << endl;
    int code;
    cin >> code;
    if (code<0||code<=99999||code>999999||code==000000)
    {
        cout << "��ǰ���Ų�����Ҫ���밴���������" << endl;
        system("pause>nul");
        SaveData();
        return;

    }
    
    cout << "��ѡ�����Ļ��ţ�ѡ��Χ��0��30" << endl;
    int num;
    cin >> num;
    
   if(num<=0||num>30)
    {
        cout << "��ǰ���Ų�����Ҫ���밴���������" << endl;
        system("pause>nul");
        SaveData();
        return;
       
    }


    ofstream outfile("f1.txt");
    
    outfile << "��ǰ�Ŀ���Ϊ" << endl;
    outfile << code << endl;
    
     outfile << "��ǰ�Ļ���Ϊ" << endl;
     outfile << num << endl;

       
   
    time_t result = time(NULL);
    string buffer;
    buffer=ctime(&result);
    //��ñ���ʱ��
    
    outfile << "��ǰʱ��Ϊ" << endl;
    outfile << buffer;
    outfile.close();



}
void Save::GetData()
{
    
    ifstream infile("f1.txt",ios::in);
    string data;   
    while (getline(infile,  data))
    {
       cout <<data<< endl;  
    }
    infile.close();
    
   
}

