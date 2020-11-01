#include <iostream>


using namespace std;

class Clothes
{
protected:
	void show();
	void set(string type,string brand, string consist,string color, string size, string sex, string model);
private:
	string clothes_type;
	string brand;
	string model;
	string consist;
	string size;
	string sex;
	string color;
};
void Clothes::show()
{
	cout << endl << clothes_type << " / " << brand << " / " << model;
	cout << endl << "Consist: \t" << consist;
	cout << endl << "Color: \t" << color;
	cout << endl << "Size: \t" << size;
	cout << endl << "Sex: \t" << sex;
}
void Clothes::set(string type, string brand, string consist, string color, string size, string sex, string model)
{
	this->clothes_type = type;
	this->brand = brand;
	this->model = model;
	this->color = color;
	this->consist = consist;
	this->size = size;
	this->sex = sex;
}

class Pants : virtual protected Clothes
{
public:
	Pants();
	Pants(string brand, string consist, string color, string size, string sex, string model, string clasp, string pockets, string landing_type);
	void show();
protected:
	void set(string clothes_type,string brand, string consist, string color, string size, string sex, string model, string clasp, string pockets, string landing_type);
	string clasp;
	string pockets;
	string landing_type;
};
Pants::Pants()
{
	this->set("Pants", "Gucci", "100% cotton","Red", "S", "Unisex", "2020 autumn collection", "Lacing", "Slotted", "Middle");
}
Pants::Pants(string brand, string consist,string color, string size, string sex, string model, string clasp, string pockets, string landing_type)
{
	this->set("Pants",brand, consist, color, size, sex, model, clasp, pockets, landing_type);
}
void Pants::show()
{
	Clothes::show();
	cout << endl << "Clasp kind: \t" << clasp;
	cout << endl << "Pockets type: \t" << pockets;
	cout << endl << "Landing type: \t" << landing_type;
}
void Pants::set(string clothes_type,string brand,string consist,string color,string size,string sex,string model,string clasp,string pockets,string landing_type)
{
	Clothes::set(clothes_type, brand, consist, color, size, sex, model);
	this->clasp = clasp;
	this->pockets = pockets;
	this->landing_type = landing_type;
}

class Pajama_pants : virtual public Pants
{
public:
	Pajama_pants();
	Pajama_pants(string brand, string consist,string color, string size, string sex, string model, string clasp, string pockets, string landing_type, string length);
	void show();
};
Pajama_pants::Pajama_pants()
{
	Pants::set("Pajama_pants","Jack&Jones","100% cotton","Purple","XL","Women","Body love","laces","Slotted","High landing");
}
Pajama_pants::Pajama_pants(string brand, string consist,string color, string size, string sex, string model, string clasp, string pockets, string landing_type, string length)
{
	Pants::set("Pajama_pants", brand, consist,color, size, sex, model, clasp, pockets, landing_type);
}
void Pajama_pants::show()
{
	Pants::show();
}

//class Suit : protected Clothes
//{
//public:
//	Suit();
//	Suit(string brand, string consist, string size, string sex, string model, string clasp, string pockets, string sleeve_type);
//	void show();
//protected:
//	string clasp;
//	string pockets;
//	string sleeve_type;
//};
//Suit::Suit()
//{
//	Clothes::set("Suit", "Johnstons of Elgin","100% wool", "L", "Men", "JoE 2020 collection for business");
//	this->clasp = "Buttons";
//	this->pockets = "Slotted";
//	this->sleeve_type = "Long";
//}
//Suit::Suit(string brand, string consist, string size, string sex, string model, string clasp, string pockets, string sleeve_type)
//{
//	Clothes::set("Suit", brand, consist, size, sex, model);
//	this->clasp = clasp;
//	this->pockets = pockets;
//	this->sleeve_type = sleeve_type;
//}
//void Suit::show()
//{
//	Clothes::show();
//	cout << endl << "Clasp kind: \t" << clasp;
//	cout << endl << "Pockets type: \t" << pockets;
//	cout << endl << "Sleeve type: \t" << sleeve_type;
//}

class T_shirt : protected Clothes
{
public:
	T_shirt();
	T_shirt(string brand, string consist,string color, string size, string sex, string model, string sleeve_length);
	void show();
protected:
	void set(string type,string brand, string consist,string color, string size, string sex, string model, string sleeve_length);
	string sleeve_length;
};
T_shirt::T_shirt()
{
	this->set("T-shirt", "Ripndip", "100% cotton","White", "L", "Unisex", "F*** collection", "Long sleeve");
}
T_shirt::T_shirt(string brand, string consist,string color, string size, string sex, string model, string sleeve_length)
{
	this->set("T-shirt", brand, consist,color, size, sex, model,sleeve_length);
}
void T_shirt::show()
{
	Clothes::show();
	cout << endl << "Sleeve length: \t" << sleeve_length;
}
void T_shirt::set(string type, string brand, string consist,string color, string size, string sex, string model, string sleeve_length)
{
	Clothes::set(type, brand, consist, color, size, sex, model);
	this->sleeve_length = sleeve_length;
}

class Sweatshirt : protected Clothes
{
public:
	Sweatshirt();
	Sweatshirt(string brand, string consist,string color, string size, string sex, string model);
	void show();
protected:
	void set(string type, string brand, string consist,string color, string size, string sex, string model);
};
Sweatshirt::Sweatshirt()
{
	this->set("Sweatshirt", "Ripndip", "100% cotton","Pink", "L", "Unisex", "F*** collection");
}
Sweatshirt::Sweatshirt(string brand, string consist,string color, string size, string sex, string model)
{
	this->set("Sweatshirt", brand, consist,color, size, sex, model);
}
void Sweatshirt::show()
{
	Clothes::show();
}
void Sweatshirt::set(string type, string brand, string consist,string color, string size, string sex, string model)
{
	Clothes::set(type, brand, consist, color, size, sex, model);
}

class Hoodie : virtual protected Clothes
{
public:
	Hoodie();
	Hoodie(string brand, string consist, string color, string size, string sex, string model);
	void show();
protected:
	void set(string type, string brand, string consist, string color, string size, string sex, string model);
};
Hoodie::Hoodie()
{
	Clothes::set("Hoodie", "Adidas", "100% wool", "Gray", "XXL", "Men", "Palace");
}
Hoodie::Hoodie( string brand, string consist, string color, string size, string sex, string model)
{
	Clothes::set("Hoodie", brand, consist, color, size, sex, model);
}
void Hoodie::show()
{
	Clothes::show();
}
void Hoodie::set(string type, string brand, string consist, string color, string size, string sex, string model)
{
	Clothes::set(type, brand, consist, color, size, sex, model);
}


class Kigurumi : protected Hoodie, protected Sweatshirt
{
public:
	Kigurumi();
	Kigurumi(string brand, string consist, string color, string size, string sex, string model);
	void show();
private:
	void set(string type,string brand, string consist, string color, string size, string sex, string model);
};
Kigurumi::Kigurumi()
{
	Hoodie::set("Kigurumi", "Diaona", "100% wool", "Tiger", "S", "Women", "-");
}
Kigurumi::Kigurumi(string brand, string consist, string color, string size, string sex, string model)
{
	Clothes::set("Kigurumi", brand, consist, color, size, sex, model);
}
void Kigurumi::show()
{
	Hoodie::show();
}
void Kigurumi::set(string type, string brand, string consist, string color, string size, string sex, string model)
{
	Hoodie::set(type, brand, consist, color, size, sex, model);

}





int main()
{
	string str1, str2, str3, str4;
	str1 = "Abibas";
	str2 = "w";
	str3 = "s";
	str4 = "winter jacket x2020 edit.";
	Pants p;
	p.show();
	cout << endl << "==========================" << endl;
	T_shirt t;
	t.show();
	cout << endl;
	cout << endl << "==========================" << endl;
	Sweatshirt sw;
	sw.show();
	cout << endl;
	cout << endl << "==========================" << endl;
	Hoodie hdie;
	hdie.show();
	cout << endl;
	cout << endl << "==========================" << endl;
	Pajama_pants pp;
	pp.show();
	cout << endl;
	cout << endl << "==========================" << endl;
	Kigurumi kig;
	kig.show();
	cout << endl;
	cout << endl << "==========================" << endl;
	cout << endl;
	system("pause");
	return 0;
}