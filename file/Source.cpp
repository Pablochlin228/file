#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student
{
	string name;
	string surname;
	int age;
public:
	Student(string n, string s, int a)
	{
		name = n;
		surname = s;
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << "Surname: " << surname << "\tAge: " << age << endl;
	}
	void Input()
	{
		cout << "Enter Name: ";
		cin >> name;

		cout << "Enter Surname: ";
		cin >> surname;

		cout << "Enter Age: ";
		cin >> age;
	}

	//------------- HW
	void SaveFile() 
	{
		ofstream out("Text.txt");

		if (out.is_open())
		{
			out << name << ' ' << surname << ' ' << age << endl;
			out.close();
		}
		else
		{
			cout << "Could not open the file" << endl;
		}

	} 
	void LoadFile() 
	{
		ifstream in("Text.txt");
		string n;
		string s;
		int a;

		if (in.is_open())
		{
			in >> n >> s >> a;

			cout << n << endl;
			cout << s << endl;
			cout << a << endl;

			in.close();
		}
		else
		{
		      cout << "Could not open the file" << endl;
		}
	} 

};

int main()
{
	Student obj1("Ivan", "Ivanov", 19);

	obj1.SaveFile();
	obj1.LoadFile();

}

//cout << "1. Write" << endl;
//cout << "2. Read" << endl;
//
//int choice = 0;
//cin >> choice;
//
//switch (choice)
//{
//case 1:
//{
//    // Создание выходного файлового потока и связывание с ним файла, который открывается на запись в 
//    // текстовом режиме.
//    ofstream out("Text.txt");
//
//    // Если файл удалось открыть.
//    if (out.is_open())
//    {
//        // Сохранение данных в файл.
//        out << 10 << ' ' << 123.5 << endl;
//        out << "This is text file";
//
//        // Закрытие файлового потока.
//        out.close();
//    }
//    else
//    {
//        cout << "Could not open the file" << endl;
//    }
//}
//break;
//case 2:
//{
//    int integerValue = 0;
//    double doubleValue = 0.0;
//    char string[10] = {};
//
//    // Создание выходного файлового потока и связывание с ним файла, который открывается на чтение в 
//    // текстовом режиме.
//    ifstream in("Text.txt");
//
//    // Если файл удалось открыть.
//    if (in.is_open())
//    {
//        // Считывание данных из файла в переменные.
//        in >> integerValue >> doubleValue;
//
//        cout << integerValue << endl;
//        cout << doubleValue << endl;
//
//        // Цикл продолжается до тех пор, пока не наступит конец файла.
//        while (!in.eof())
//        {
//            // Считывание строки из файла по одному слову за одну итерацию цикла.
//            in >> string;
//            cout << string << ' ';
//        }
//
//        // Закрытие файлового потока.
//        in.close();
//    }
//    else
//    {
//        cout << "Could not open the file" << endl;
//    }
//}
//break;
//default:
//    cout << "Invalid action" << endl;
//    break;
//}