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
			s[i] += 32;//ת��ΪСд
					   //s[i] = s[i] - 'A' + 'a'; ͬ��
		}
	}
}
void ConversionUpper(string& s) {
	int len = s.size();
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'a'&& s[i] <= 'z')
		{
			s[i] -= 32;//ת��Ϊ��д
					   //s[i] = s[i] - 'a' + 'A'; ͬ��
		}
	}
}

int main() {
	bool flag = true;
	while (true)
	{
		cout << "������һ���ַ���" << endl;
		string str;
		//vector<string> str;
		cin >> str;
		ConversionLower(str);
		cout << "ת��ȫΪСд��Ϊ��\n\n" << str << endl;
		ConversionUpper(str);
		cout << "\nת��ȫΪ��д��Ϊ��\n\n" << str << endl;
		cout << "\n\n �Ƿ����? ��Ҫ�������밴y" << endl;
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