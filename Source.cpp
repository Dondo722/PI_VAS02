#include <iostream>
#include <string>

using namespace std;

class Clothes
{
public:
	Clothes();
	virtual void show();
	void set(string brand,string color,string made_of);

	string brand;
	string color;
	string made_of;

};
Clothes::Clothes()
{
	cout << endl << "Clothes";
}

class On_body : virtual public Clothes
{
public:
	On_body();
	void show() override;
	void set(string brand, string color, string made_of,int chest_girth,int sleeve_length);

	int chest_girth;
	int sleeve_length;
};
On_body::On_body()
{
	cout << endl << "On_body";
}


class Jacket : protected On_body
{
public:
	Jacket();
	void show() override;
	void set(string brand, string color, string made_of,int chest_girth,int sleeve_length,string padding,string clasps,string pockets,string season);
	void define_brand(string brand);
	void define_color(string color);
	void define_compozition(string compozition);
	void define_chest_girth(int chest_girth);
	void define_sleeve_length(int sleeve_length);

	string padding;
	string clasps;
	string pockets;
	string season;
};
Jacket::Jacket()
{

}


class Blow_body : virtual public Clothes
{
public:
	Blow_body();
	void show() override;
	void set(string brand, string color, string made_of,int waist_size,int hip_girth);

	int waist_size;
	int hip_girth;
};
Blow_body::Blow_body()
{
	cout << endl << "Blow_body";
}
class Pants : public Blow_body
{
public:
	Pants();
	void show() override;
	void set(string brand, string color, string made_of, int waist_size, int hip_girth, string clasps, string pockets);

	string clasps;
	string pockets;
};
Pants::Pants()
{
	cout << endl << "Pants";
}


class Overals : public On_body, public Pants
{
public:
	Overals();
	void show() override;
	void set(string brand, string color, string made_of, int waist_size, int hip_girth, string clasps, string pockets, string purpose);

	string purpose;
};
Overals::Overals()
{
	cout << endl << "Overals";
}

class Kigurumi : private Overals
{
public:
	Kigurumi();
	void show() override;
	void set(string type, int height);

	int height;
	string type;
};
Kigurumi::Kigurumi()
{
	cout << endl << "Kigurumi";
}





int main()
{
	//Pants p;
	On_body o;
	Kigurumi k;
	Jacket j;
	cout << endl; system("pause");
	return 0;
}
