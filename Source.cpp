#include"Clothes.h"

using namespace clt;


int main()
{
	Jacket j;
	Overals o;
	Kigurumi k;
	T_shirt t;
	Pants p;
	int stch;
	while (true)
	{
		system("cls");
		cout << "1 - Jacket\n2 - Overals\n3 - Kigurumi\n4 - T_shirt\n5 - Pants\n";
		cin >> stch;
		switch (stch)
		{
		case 0:
			cout << endl; system("pause");
			return 0;
		case 1:
			system("cls");
			j.show();
			cout << endl; system("pause");
			break;
		case 2:
			system("cls");
			o.show();
			cout << endl; system("pause");
			break;
		case 3:
			system("cls");
			k.show();
			cout << endl; system("pause");
			break;
		case 4:
			system("cls");
			t.show();
			cout << endl; system("pause");
			break;
		case 5:
			system("cls");
			p.show();
			cout << endl; system("pause");
			break;
		}
	}
}
