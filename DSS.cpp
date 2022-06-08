#include<iostream>
using namespace std;

class DessertItems
{

	char* name;

public:

	DessertItems()
	{
		name;
	
	}

};

class Cookie :public DessertItems
{
	int num;
	int price;

public:

	Cookie(int n, int p)
	{
		num = n;
		price = p/n;

	}

};

class IceCream : public DessertItems
{
	int cost;
	char*flavourname;

public:

	IceCream(char* fn, int c)
	{
		flavourname = fn;
		cost = c;
	}

	char* getcost(){ return "h"; }

};

class Sundae : public IceCream
{
	int costoftop;
	int costofice;
	char* flavourofsundae;

public:

	Sundae(char* flavour, int ci, int ct) :IceCream(flavour, ci)
	{
		flavourofsundae = flavour;
		costofice = ci;
		costoftop = ct;
	}


};

class Order
{
	DessertItems** itemList; 
	int noOfItems;
	char* flname;
	char* fname;
	int icecreamcost = 100;
	int toppingcost = 20;
	int cookiecost = 399 / 12;
	int totalcost = 0;
	int totaltax = 0;

public:

	Order()
	{
		fname = nullptr;
		flname = nullptr;
	}
	Order(int n)
	{
		noOfItems = n;
	}
	void placeOrder()
	{
		int userChoice;
		int i = 0, itemCount = 0;
		while (i < this->noOfItems)
		{
			cout << "Choose Item you want to add\n";
			cin >> userChoice;
			if (userChoice == 1)
			{
				//take parameters from user needed for a Cookie
				int noofcook;
				cout << "Enter no of cookies: " << endl;
				cin >> noofcook;
				itemList[itemCount++] = new Cookie(noofcook, 399);
				//making base class pointer //point cookie object
				totalcost = totalcost + (noofcook*cookiecost);
			}
			else if (userChoice == 2)
			{
				//take parameters from user needed for an IceCream
				
				cout << "What flavour you want." << endl;
				cin >> fname;
				itemList[itemCount++] = new IceCream(fname, icecreamcost);
				//making base class pointer //point IceCream object
				totalcost = totalcost + icecreamcost;
			}
			else if (userChoice == 3)
			{
				//take parameters from user needed for a Sundae
				cout << "What flavour you want." << endl;				
				cin >> flname;
				itemList[itemCount++] = new Sundae(flname, icecreamcost, toppingcost);
				//making base class pointer //point Sundae object
				totalcost = totalcost + icecreamcost + toppingcost;
			}
			i++;

		}
	}

	void PrintOrder()
	{
		cout << "Your orders are:" << endl;
		for (int i = 0; i < noOfItems; i++)
		{
			cout << itemList[i];
		}

	}
	int TOTALCOST()
	{
		return totalcost;
	}
	int TOTALTAX()
	{
		totaltax = (totalcost * 2) / 100;
		return totaltax;
	}

};






	void main(){
	
		
		int totalOrders;
		cout << "How many orders you want to place: ?";
		cin >> totalOrders;
		Order ** ordersList = new Order*[totalOrders];
		for (int i = 0; i < totalOrders; i++)
		{
			int itemsCount;
			cout << "How many items you want: ?";
			cin >> itemsCount;
			ordersList[i] = new Order(itemsCount);
			ordersList[i]->placeOrder();
		}
		//diplay all the orders here
		int TotalCost;
		//Find totalCost (sum of costs of all items in list without tax) and print it.
		for (int i = 0; i < totalOrders; i++)
		{

			cout << "Totalcost is: " << &Order::TOTALCOST << endl;
		}
		int TotalTax;
		cout << "Totaltax is: " << &Order::TOTALTAX << endl;

		//Find totalCost (sum of taxes of all items in list) and print it.
		//delete the dynamially allocated memory.
		delete[]ordersList;

		system("pause");
	}
