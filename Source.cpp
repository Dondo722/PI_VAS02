#include <iostream>


using namespace std;

class Clothes
{
public:
	void show();
protected:
	void set(string type,string brand, string consist, string description, string size, string sex, string model);
	string clothes_type;
	string brand;
	string model;
	string consist;
	string description;
	string size;
	string sex;
};
void Clothes:: show()
{
	cout << endl << clothes_type << " / " << brand << " / " << model;
	cout << endl << "Consist: \t" << consist;
	cout << endl << "Description: \n" << description;
	cout << endl << "Size: \t" << size;
	cout << endl << "Sex: \t" << sex;
}
void Clothes::set(string type,string brand, string consist, string description, string size, string sex, string model)
{
	this->clothes_type = type;
	this->brand = brand;
	this->model = model;
	this->consist = consist;
	this->description = description;
	this->size = size;
	this->sex = sex;
}

class Pants : public Clothes
{
public:
	Pants();
	Pants(string brand, string consist,	string description,	string size, string sex, string model, string clasp, string pockets, string landing_type);
	void show();
protected:
	string clasp;
	string pockets;
	string landing_type;
};
Pants::Pants()
{
	Clothes::set("Pants", "Gucci", "100% cotton", "Universal pants for everything in your life :)", "s", "unisex", "2020 autumn collection");
	this->clasp = "elastic; lacing";
	this->pockets = "in the seam; slotted";
	this->landing_type = "middle";
}
Pants::Pants(string brand, string consist, string description, string size, string sex, string model, string clasp, string pockets, string landing_type)
{
	Clothes::set("Pants", brand, consist, description, size, sex, model);
	this->clasp = clasp;
	this->pockets = pockets;
	this->landing_type = landing_type;
}
void Pants::show()
{
	Clothes::show();
	cout << endl << "Clasp kind: \t" << clasp;
	cout << endl << "Pockets type: \t" << pockets;
	cout << endl << "Landing type: \t" << landing_type;
}

class Suit : public Clothes
{
public:
	Suit();
	Suit(string brand, string consist, string description, string size, string sex, string model, string clasp, string pockets, string sleeve_type);
	void show();
private:
	string clasp;
	string pockets;
	string sleeve_type;
};
Suit::Suit()
{
	Clothes::set("Suit", "Johnstons of Elgin","100% wool", "For business meetings", "L", "men", "JoE 2020 collection for business");
	this->clasp = "Buttons";
	this->pockets = "Slotted";
	this->sleeve_type = "Long";
}
Suit::Suit(string brand, string consist, string description, string size, string sex, string model, string clasp, string pockets, string sleeve_type)
{
	Clothes::set("Suit", brand, consist, description, size, sex, model);
	this->clasp = clasp;
	this->pockets = pockets;
	this->sleeve_type = sleeve_type;
}
void Suit::show()
{
	Clothes::show();
	cout << endl << "Clasp kind: \t" << clasp;
	cout << endl << "Pockets type: \t" << pockets;
	cout << endl << "Sleeve type: \t" << sleeve_type;
}

int main()
{
	string str1, str2, str3, str4;
	str1 = "Abibas";
	str2 = "w";
	str3 = "s";
	str4 = "winter jacket x2020 edit.";
	Pants p;
	Suit s;
	//Clothes c;
	p.show();
	cout << endl << "==========================" << endl;
	s.show();
	cout << endl;
	system("pause");
	return 0;
}