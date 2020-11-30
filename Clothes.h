#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace clt
{
	class Clothes
	{
	protected:
		Clothes();
		virtual void show();
		void set(string brand, string color, string made_of);
	public:
		string brand;
		string color;
		string made_of;

	};

	class On_body : virtual public Clothes
	{
	protected:
		On_body();
		void show() override;
		void set(string brand, string color, string made_of, int chest_girth, int sleeve_length);
	public:
		int chest_girth;
		int sleeve_length;
	};

	class Jacket : protected On_body
	{
	public:
		Jacket();
		void show() override;
		void set(string brand, string color, string made_of, int chest_girth, int sleeve_length, string padding, string clasps, string pockets, string season);
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

	class T_shirt : public On_body
	{
	public:
		T_shirt();
		void show() override;
		void set(string brand, string color, string made_of, int chest_girth, int sleeve_length, string type);

		string type;
	};

	class Below_body : virtual public Clothes
	{
	protected:
		Below_body();
		void show() override;
		void set(string brand, string color, string made_of, int waist_size, int hip_girth);
	public:
		int waist_size;
		int hip_girth;
	};

	class Pants : public Below_body
	{
	public:
		Pants();
		void show() override;
		void set(string brand, string color, string made_of, int waist_size, int hip_girth, string clasps, string pockets);

		string clasps;
		string pockets;
	};

	class Overals : public On_body, public Pants
	{
	public:
		Overals();
		void show() override;
		void set(string brand, string color, string made_of, int waist_size, int hip_girth, int chest_girth, int sleeve_length, string clasps, string pockets, string purpose);

		string purpose;
	};

	class Kigurumi : private Overals
	{
	public:
		Kigurumi();
		void show() override;
		void set(string brand, string compozition, string clasps, string type, int size);

		int height;
		string type;
	};
}