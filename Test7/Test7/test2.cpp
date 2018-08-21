#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

void ConversionLower(string& s) {
	int len = s.size();
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'A'&& s[i] <= 'Z')
		{
			s[i] += 32;//转化为小写
					   //s[i] = s[i] - 'A' + 'a'; 同上
		}
	}
}
void ConversionUpper(string& s) {
	int len = s.size();
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'a'&& s[i] <= 'z')
		{
			s[i] -= 32;//转化为大写
					   //s[i] = s[i] - 'a' + 'A'; 同上
		}
	}
}

int main() {
	bool flag = true;
	while (true)
	{
		cout << "请输入一组字符串" << endl;
		string str;
		//vector<string> str;
		cin >> str;
		ConversionLower(str);
		cout << "转化全为小写后为：\n\n" << str << endl;
		ConversionUpper(str);
		cout << "\n转化全为大写后为：\n\n" << str << endl;
		cout << "\n\n 是否继续? 若要继续，请按y" << endl;
		char k;
		cin >> k;
		if (k == 'y')
			continue;
		else
		{
			flag = false; 
			break;
		}	 

	}
	
	return 0;


}