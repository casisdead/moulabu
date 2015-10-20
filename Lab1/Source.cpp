#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>

using namespace std;

#define SIZEOFARRAY 5

class STRING
{
	string str;
	int sizeOfStr;
	int counter;
	int countSymbol;
public:
	STRING()
	{
		cout << "Work constructor without parameters" << endl;
	}

	STRING(string str)
	{
		this->str = str;
		cout << "Work constructor with parameters" << endl;
	}

	STRING(const STRING&A)
	{
		str = A.str;
		sizeOfStr = A.sizeOfStr;
		cout << " Working  copy contructor with parametrs" << endl;
	}

	

	~STRING()
	{
		cout << "Work destructor" << endl;
	}

	int checkStr(string str)
	{
		counter = str.length();
		for (int i = 0; counter > 0; i++, counter--)
		{
			if (str[i] == ' ') {}

			else if (str[i] < 'A' || str[i] > 'z')
			{
				return 0;
			}

			else
			{
				if (str[i] <= 'Z' || str[i] >= 'a')
				{
				}
				else
				{
					return 0;
				}

			}
		}
		return 1;
	}

	void setStr(string str)
	{
		if (checkStr(str))
		{
			this->str = str;
		}
		else
		{
			cout << "Error. String " << str << " bad" << endl;
		}
	}

	string getStr()
	{
		return str;
	}

	int getSizeOfStr()
	{
		return str.length();
	}

	void myOutStr()
	{
		cout << str << endl;
	}

	int myOutSize()
	{
		cout << str.length() << endl;
	}

	int checkSymbolInStr(char x)
	{
		counter = str.length();
		countSymbol = 0;
		for (int i = 0; counter > 0; i++, counter--)
		{
			if (str[i] == x)
			{
				countSymbol++;
			}
		}
		return countSymbol;
	}

	string changeSymbolsInStr(char x, char y)
	{
		counter = str.length();
		for (int i = 0; counter > 0; i++, counter--)
		{
			if (str[i] == x)
			{
				str[i] = y;
			}
		}
		return str;
	}

};

void stringOfSameSize(STRING *arrayOfStr, int x)
{
	for (int i = 0; i < SIZEOFARRAY; i++)
	{
		if (arrayOfStr[i].getSizeOfStr() == x)
		{
			cout << "String number " << i + 1 << " " << arrayOfStr[i].getStr() << endl;
		}
	}
}

void stringWithSameWord(STRING *arrayOfStr, string str)
{
	int count;
	int count1 = str.length();
	int count2 = 0;
	for (int i = 0; i < SIZEOFARRAY; i++)
	{
		count = arrayOfStr[i].getStr().length();
		if (count == count1)
		{
			for (int y = 0; count > 0; y++, count--)
			{
				if (arrayOfStr[i].getStr()[y] == str[y])
					count2++;
			}

			if (count2 == count1)
				cout << "String number " << i + 1 << " " << arrayOfStr[i].getStr() << endl;
			count2 = 0;
		}
	}
}

void menu()
{
	cout << endl << "Select operaitng with string" << endl;
	cout << "1. Show our string." << endl
		<< "2. Show size of our string." << endl
		<< "3. Count symbol per string." << endl
		<< "4. Change symbol per string." << endl << endl
		<< "Select operating with array" << endl
		<< "5. Count strings with same length" << endl
		<< "6. Count strings with same word" << endl << endl
		<< "7. Exit" << endl << endl;

}

void menu2()
{
	cout << endl << "Select string" << endl << endl
		<< "1. str1" << endl << "2. str2" << endl
		<< "3. str3" << endl << "4. str4" << endl
		<< "5. str5" << endl;
}

void main()
{
	STRING str1("good");
	STRING str2("well");
	STRING str3("mother");
	STRING str4("mother");
	STRING str5("father");
	STRING arrayOfStr[SIZEOFARRAY] = { str1, str2, str3, str4, str5 };
	int num = 4;
	char x = 'g';
	char y = 'w';
	string str = "mother";
	int key;
	int key2;
	int cicle = 1;

	while (cicle)
	{
		menu();
		cout << "Your choose: ";
		cin >> key;
		switch (key)
		{
		case 1:
			menu2();
			cout << "Your choose: ";
			cin >> key2;
			if (key2 == 1)
				cout << str1.getStr() << endl;
			if (key2 == 2)
				cout << str2.getStr() << endl;
			if (key2 == 3)
				cout << str3.getStr() << endl;
			if (key2 == 4)
				cout << str4.getStr() << endl;
			if (key2 == 5)
				cout << str5.getStr() << endl;
			_getch();
			key = 0;
			break;
		case 2:
			menu2();
			cout << "Your choose: ";
			cin >> key2;
			if (key2 == 1)
				cout << str1.getSizeOfStr() << " symbols in string (" << str1.getStr() << ")" << endl;
			if (key2 == 2)
				cout << str2.getSizeOfStr() << " symbols in string (" << str2.getStr() << ")" << endl;
			if (key2 == 3)
				cout << str3.getSizeOfStr() << " symbols in string (" << str3.getStr() << ")" << endl;
			if (key2 == 4)
				cout << str4.getSizeOfStr() << " symbols in string (" << str4.getStr() << ")" << endl;
			if (key2 == 5)
				cout << str5.getSizeOfStr() << " symbols in string (" << str5.getStr() << ")" << endl;
			key = 0;
			_getch();
			break;
		case 3:
			menu2();
			cout << "Your choose: ";
			cin >> key2;
			if (key2 == 1)
				cout << "Symbol " << x << " in string " << str1.getStr() << " contains ----- " << str1.checkSymbolInStr(x) << endl;
			if (key2 == 2)
				cout << "Symbol " << x << " in string " << str2.getStr() << " contains ----- " << str2.checkSymbolInStr(x) << endl;
			if (key2 == 3)
				cout << "Symbol " << x << " in string " << str3.getStr() << " contains ----- " << str3.checkSymbolInStr(x) << endl;
			if (key2 == 4)
				cout << "Symbol " << x << " in string " << str4.getStr() << " contains ----- " << str4.checkSymbolInStr(x) << endl;
			if (key2 == 5)
				cout << "Symbol " << x << " in string " << str5.getStr() << " contains ----- " << str5.checkSymbolInStr(x) << endl;
			key = 0;
			_getch();
			break;
		case 4:
			menu2();
			cout << "Your choose: ";
			cin >> key2;
			if (key2 == 1)
				cout << "Symbol " << x << " was changed in string on symbol " << y << " and string became ----- " << str1.changeSymbolsInStr(x, y) << endl;
			if (key2 == 2)
				cout << "Symbol " << x << " was changed in string on symbol " << y << " and string became ----- " << str2.changeSymbolsInStr(x, y) << endl;
			if (key2 == 3)
				cout << "Symbol " << x << " was changed in string on symbol " << y << " and string became ----- " << str3.changeSymbolsInStr(x, y) << endl;
			if (key2 == 4)
				cout << "Symbol " << x << " was changed in string on symbol " << y << " and string became ----- " << str4.changeSymbolsInStr(x, y) << endl;
			if (key2 == 5)
				cout << "Symbol " << x << " was changed in string on symbol " << y << " and string became ----- " << str5.changeSymbolsInStr(x, y) << endl;
			key = 0;
			_getch();
			break;
		case 5:
			cout << endl << "String with length " << num << endl;
			stringOfSameSize(arrayOfStr, num);
			key = 0;
			_getch();
			break;
		case 6:
			cout << endl << "String with word " << str << endl;
			stringWithSameWord(arrayOfStr, str);
			key = 0;
			_getch();
			break;
		case 7:
			cicle = 0;
			_getch();
		}
		system("cls");
	}
}