#include <iostream>
#include <string> // библиотека, позволяющая работать со строковыми переменными
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

	// Задача 1.
	/*cout << "Задача 1.\nВведите строку: ";
	getline(cin, str);
	cout << "Введите колличество повторений: ";
	cin >> n;
	cin.ignore();
	cout << mulstr(str, n) << "\n\n";*/

	// Задача 2.
	cout << "Задача 2\nВведите сообщение:\n";
	getline(cin, str);
	if (checkSpam(str))
		cout << "Обнаружен спам!\n";
	else
		cout << "Спам не обнаружен!\n";



	// Методы - это фунекции, применяемые к объектам класса с помощью специального синтаксиса
	//string str; // объявление строковой переменной
	
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
	//cout << "Введите подстроку: ";
	//getline(cin, newStr);
	//cout << "Индекс первого вхождения = " << str.find(newStr);
	/*int index;
	cout << "Введите позицию: ";
	cin >> index;
	cin.ignore();
	cout << "Подстрока: " << str.substr(index, 4) << endl;*/

	/*cout << "Введите строку: ";
	cin >> str;
	cin.ignore();
	int num = stoi(str);
	cout << num << endl;*/

	// Методы Length and Size
	/*cout << "Size = " << str.size() << endl;
	cout << "Length = " << str.length() << endl;
	for (int i = 0; i < str.length(); i++)
		cout << str[i] << " ";
	cout << endl;*/

	/*cout << str << endl; // Вывод пустой строки
	str = "Hello world!"; // Инициализация строковой переменной
	cout << str << endl;
	str = "Oranges"; // Меняем значение переменной
	cout << str << endl;
	string str2 = "Apples";
	string str3 = str + " and " + str2; // Используем конкатенацию строк для создания новой строки
	str3 += '!'; // Добавление символа вконец строки
	cout << str3 << endl;
	str3 = " "; // Обнуление строки
	cout << str3 << endl;
	cout << str[0] << str[1] << endl;*/ // Обращение котдельным элементам строки, используя синтаксис массивов

	/*str = "Oranges\nApples\t\"WOW!\""; // escape-последовательности в строке
	cout << str << endl;

	string word1 = "Hello";
	string word2 = "Hello";
	if (word1 == word2) // сравнеие строк
		cout << "TRUE\n";
	else
		cout << "FALSE\n";*/

	/*string name;
	cout << "Введите своё имя: ";
	//cin >> name; // cчитывание до первого пробела или enter
	getline(cin, name);
	cout << "Привет, " << name << "!\n";
	unsigned int age;
	cout << "Введите свой возраст: ";
	cin >> age;
	cin.ignore();
	cout << "Тебе " << age << " лет, ого!\n";
	string address;
	cout << "Введите свой адрес: ";
	getline(cin, address);
	cout << "Вы живёте на: " << address << ".\n";*/


	// Символьные массивы
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