#include "Clothes.h"

using namespace clt;


Clothes::Clothes()
{
	this->set("NULL", "NULL", "NULL");
}
void Clothes::show()
{
	cout << endl << "Brand:\t\t" << this->brand;
	cout << endl << "Made of:\t" << this->made_of;
	cout << endl << "Color:\t\t" << this->color;

}
void Clothes::set(string brand, string color, string made_of)
{
	this->brand = brand;
	this->color = color;
	this->made_of = made_of;
}


On_body::On_body()
{
	this->set("NULL", "NULL", "NULL", NULL, NULL);
}
void On_body::show()
{
	Clothes::show();
	cout << endl << "Chest girth:\t" << this->chest_girth << " cm.";
	cout << endl << "Sleeve length:\t" << this->sleeve_length << " cm.";
}
void On_body::set(string brand, string color, string made_of, int chest_girth, int sleeve_length)
{
	Clothes::set(brand, color, made_of);
	this->chest_girth = chest_girth;
	this->sleeve_length = sleeve_length;
}


Jacket::Jacket()
{
	this->set("Apollget", "Gray", "Neilon", 108, 90, "Poliester", "lightning", "slotted, 1 on chest & 2 on sleeves", "winter");
}
void Jacket::show()
{
	cout << endl << "Jacket";
	On_body::show();
	cout << endl << "Season:\t\t" << this->season;
	cout << endl << "Padding:\t" << this->padding;
	cout << endl << "Pockets:\t" << this->pockets;
	cout << endl << "Clasps:\t\t" << this->clasps;
}
void Jacket::set(string brand, string color, string made_of, int chest_girth, int sleeve_length, string padding, string clasps, string pockets, string season)
{
	On_body::set(brand, color, made_of, chest_girth, sleeve_length);
	this->padding = padding;
	this->clasps = clasps;
	this->pockets = pockets;
	this->season = season;
}
void Jacket::define_brand(string brand)
{
	Clothes::brand = brand;
}
void Jacket::define_color(string color)
{
	Clothes::color = color;
}
void Jacket::define_compozition(string compozition)
{
	Clothes::made_of = made_of;
}
void Jacket::define_chest_girth(int chest_girth)
{
	On_body::chest_girth = chest_girth;
}
void Jacket::define_sleeve_length(int sleeve_length)
{
	On_body::sleeve_length = sleeve_length;
}


T_shirt::T_shirt()
{
	this->set("Adidas Palace", "Red", "Cotton", 100, 25, "T-shirt with back print");
}
void T_shirt::show()
{
	cout << endl << "T-shirt";
	On_body::show();
	cout << endl << this->type;
}
void T_shirt::set(string brand, string color, string made_of, int chest_girth, int sleeve_length, string type)
{
	On_body::set(brand, color, made_of, chest_girth, sleeve_length);
	this->type = type;
}


Below_body::Below_body()
{
	this->set("NULL", "NULL", "NULL", NULL, NULL);
}
void Below_body::show()
{
	Clothes::show();
	cout << endl << "Waist size:\t" << this->waist_size << " cm.";
	cout << endl << "Hip girth:\t" << this->hip_girth << " cm. ";
}
void Below_body::set(string brand, string color, string made_of, int waist_size, int hip_girth)
{
	Clothes::set(brand, color, made_of);
	this->waist_size = waist_size;
	this->hip_girth = hip_girth;
}


Pants::Pants()
{
	this->set("Adidas", "Red", "Cotton", 100, 90, "laces", "slotted");
}
void Pants::show()
{
	cout << endl << "Pants";
	Below_body::show();
	cout << endl << "Clasps:\t\t" << this->clasps;
	cout << endl << "Pockets:\t" << this->pockets;
}
void Pants::set(string brand, string color, string made_of, int waist_size, int hip_girth, string clasps, string pockets)
{
	Below_body::set(brand, color, made_of, waist_size, hip_girth);
	this->clasps = clasps;
	this->pockets = pockets;
}


Overals::Overals()
{
	this->set("Huggo bo$$", "Blue", "Cotton", 100, 90, 110, 90, "lightning & laces", "slotted", "for work");
}
void Overals::show()
{
	cout << endl << "Overals";
	On_body::show();
	cout << endl << "Waist size:\t" << Pants::waist_size;
	cout << endl << "Hip girth:\t" << Pants::hip_girth;
	cout << endl << "Clasps:\t\t" << Pants::clasps;
	cout << endl << "Pockets:\t" << Pants::pockets;
	cout << endl << "Purpose:\t" << this->purpose;
}
void Overals::set(string brand, string color, string made_of, int waist_size, int hip_girth, int chest_girth, int sleeve_length, string clasps, string pockets, string purpose)
{
	Pants::set(brand, color, made_of, waist_size, hip_girth, clasps, pockets);
	On_body::chest_girth = chest_girth;
	On_body::sleeve_length = sleeve_length;
	this->purpose = purpose;
}


Kigurumi::Kigurumi()
{
	this->set("ZipZAap", "Cotton", "Buttons & laces", "Tiger", 180);
}
void Kigurumi::show()
{
	cout << endl << "Kigurumi";
	cout << endl << "Brand:\t\t" << Clothes::brand;
	cout << endl << "Made of:\t" << Clothes::made_of;
	cout << endl << "Kigurumi type:\t" << this->type;
	cout << endl << "Clasps:\t\t" << Pants::clasps;
	cout << endl << "Height:\t\t" << this->height << " cm.";
}
void Kigurumi::set(string brand, string compozition, string clasps, string type, int height)
{
	Clothes::brand = brand;
	Clothes::made_of = compozition;
	Pants::clasps = clasps;
	this->type = type;
	this->height = height;
}



