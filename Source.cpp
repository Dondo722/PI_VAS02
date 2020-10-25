#include <iostream>


using namespace std;

class Clothes
{
public:
	void set(string brand);
	void show();
	string brand = "cucci";
};
void Clothes::set(string brand)
{
	this->brand = brand;
}
void Clothes:: show()
{
	cout << endl << "Brand: "<< brand;
}

class Women_clothes : public Clothes
{
public:
	void show();
protected:
	string size = "xz";
};
void Women_clothes::show()
{
	cout << endl << "Women size: "<< size;
}

class Men_clothes : public Clothes
{
public:
	void show();
protected:
	string size = "xy";
};
void Men_clothes::show()
{
	cout << endl<<"Men size: " << size;
}

class Outerwear : public Clothes,public Men_clothes,public Women_clothes
{
public:
	//Outerwear(string brand, string sex, string size, string model_name);
	void show();
	string model_name = "trussi";
	string model_sex = "w";
};

/*
Outerwear::Outerwear(string brand, string sex, string size, string model_name)
{
	this->brand
	
}*/
void Outerwear::show()
{
	cout << endl << "Brand: " <<Clothes::brand;
	cout << endl << "Outerwear model name: " << model_name;
	cout << endl << "Outerwear model sex: " << model_sex;
	cout << endl << "Men size: " << Men_clothes::size;
}
int main()
{
	string str1, str2, str3, str4;
	str1 = "Abibas";
	str2 = "w";
	str3 = "s";
	str4 = "winter jacket x2020 edit.";
	Outerwear o;
	//Clothes c;
	o.show();
	
	return 0;
}