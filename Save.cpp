

#define _CRT_SECURE_NO_WARNINGS
#include "Save.h"
void Save::SaveData()
{
    cout << "请输入六位用户卡号" << endl;
    int code;
    cin >> code;
    if (code<0||code<=99999||code>999999||code==000000)
    {
        cout << "当前卡号不符合要求，请按任意键重试" << endl;
        system("pause>nul");
        SaveData();
        return;

    }
    
    cout << "请选择您的机号，选择范围是0到30" << endl;
    int num;
    cin >> num;
    
   if(num<=0||num>30)
    {
        cout << "当前机号不符合要求，请按任意键重试" << endl;
        system("pause>nul");
        SaveData();
        return;
       
    }


    ofstream outfile("f1.txt");
    
    outfile << "当前的卡号为" << endl;
    outfile << code << endl;
    
     outfile << "当前的机号为" << endl;
     outfile << num << endl;

       
   
    time_t result = time(NULL);
    string buffer;
    buffer=ctime(&result);
    //获得本地时间
    
    outfile << "当前时间为" << endl;
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

