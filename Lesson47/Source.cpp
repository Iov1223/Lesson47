#include <iostream>
#include <string> // ����������, ����������� �������� �� ���������� �����������
using namespace std;

string mulstr(string str, int num){
	string res;
	for (int i = 0; i < num; i++)
		res += str;
	return res;
}
bool checkSpam(string str) {
	for (int i = 0; i < str.size(); i++)
		str[i] = tolower(str[i]);
	if (str.find("100% free") < str.size())
		return true;
	if (str.find("sales increase") < str.size())
		return true;
	if (str.find("only today") < str.size())
		return true;
	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");
	string str;
	int n;

	// ������ 1.
	/*cout << "������ 1.\n������� ������: ";
	getline(cin, str);
	cout << "������� ����������� ����������: ";
	cin >> n;
	cin.ignore();
	cout << mulstr(str, n) << "\n\n";*/

	// ������ 2.
	cout << "������ 2\n������� ���������:\n";
	getline(cin, str);
	if (checkSpam(str))
		cout << "��������� ����!\n";
	else
		cout << "���� �� ���������!\n";



	// ������ - ��� ��������, ����������� � �������� ������ � ������� ������������ ����������
	//string str; // ���������� ��������� ����������
	
	/*str = "Hello world!";
	cout << str << endl;
	str = "Hello!";
	for (int i = 0; i < str.size(); i++)
		str[i] = tolower(str[i]);
	cout << str << endl;*/


	/*str = "Hello world!";
	cout << str << endl;
	string  newStr = "12345";*/
	//str.insert(6, newStr/*, 2*/);
	//str.replace(1, 3, newStr);
	//cout << str << endl;
	//cout << "������� ���������: ";
	//getline(cin, newStr);
	//cout << "������ ������� ��������� = " << str.find(newStr);
	/*int index;
	cout << "������� �������: ";
	cin >> index;
	cin.ignore();
	cout << "���������: " << str.substr(index, 4) << endl;*/

	/*cout << "������� ������: ";
	cin >> str;
	cin.ignore();
	int num = stoi(str);
	cout << num << endl;*/

	// ������ Length and Size
	/*cout << "Size = " << str.size() << endl;
	cout << "Length = " << str.length() << endl;
	for (int i = 0; i < str.length(); i++)
		cout << str[i] << " ";
	cout << endl;*/

	/*cout << str << endl; // ����� ������ ������
	str = "Hello world!"; // ������������� ��������� ����������
	cout << str << endl;
	str = "Oranges"; // ������ �������� ����������
	cout << str << endl;
	string str2 = "Apples";
	string str3 = str + " and " + str2; // ���������� ������������ ����� ��� �������� ����� ������
	str3 += '!'; // ���������� ������� ������ ������
	cout << str3 << endl;
	str3 = " "; // ��������� ������
	cout << str3 << endl;
	cout << str[0] << str[1] << endl;*/ // ��������� ���������� ��������� ������, ��������� ��������� ��������

	/*str = "Oranges\nApples\t\"WOW!\""; // escape-������������������ � ������
	cout << str << endl;

	string word1 = "Hello";
	string word2 = "Hello";
	if (word1 == word2) // �������� �����
		cout << "TRUE\n";
	else
		cout << "FALSE\n";*/

	/*string name;
	cout << "������� ��� ���: ";
	//cin >> name; // c��������� �� ������� ������� ��� enter
	getline(cin, name);
	cout << "������, " << name << "!\n";
	unsigned int age;
	cout << "������� ���� �������: ";
	cin >> age;
	cin.ignore();
	cout << "���� " << age << " ���, ���!\n";
	string address;
	cout << "������� ���� �����: ";
	getline(cin, address);
	cout << "�� ����� ��: " << address << ".\n";*/


	// ���������� �������
	/*char word[4] = {'H', 'e', 'y', '\0'};
	for (int i = 0; i < 4; i++)
		cout << word[i];
	cout << endl;

	char moreWords[] = "Hello world!";
	cout << moreWords << endl;

	cout << moreWords[1] << moreWords[2] << endl;
	char*/
	

	return 0;
}