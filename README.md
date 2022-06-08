# Dessert-Shop-System
Implementation of Dessert Shop System, order management. C++ code under Oop rules.
There is a Dessert Shop which takes orders and sells cookies by the dozen, ice cream, and sundaes (ice cream
with a topping). Your code will be used for the taking the orders only. To do this, you will implement an
inheritance hierarchy of classes derived from a DessertItem superclass.
The DessertItem Class
The DessertItem class is a superclass from which specific types of DessertItems can be derived. It contains only
one data member, a name (char *). It also defines a number of methods. All of the DessertItem class methods
except the getCost() method are defined in a generic way.
The getCost() method in DessertItem class should only return 0 because the method of determining the costs
varies based on the type of item.
Tax amounts should be rounded to the nearest Rupees. For example, calculating the tax on a food item with a
cost of 199 rupees with a tax rate of 2.0% should be 4 rupees.
The Derived Classes
All of the classes which are derived from the DessertItem class must define a constructor. The Cookie class
should be derived from the DessertItem class. A Cookie item has a number and a price per dozen which are
used to determine its cost. For example, 4 cookies @ 399 rupees /dz. = 133 rupees. The cost should be
rounded to the nearest rupees.
The IceCream class should be derived from the DessertItem class. An IceCream item simply has a cost and
flavor name.
The Sundae class should be derived from the IceCream class. The cost of a Sundae is the cost of the IceCream
plus the cost of the topping.
Make the two functions getCost() and getTax() virtual in base class.
Add attributes/functions where needed to implement this system.
Order class
This class should have list of dessert Items in polymorphic order and the count of items.
E.g DessertItems** itemsList; int noOfItems.
Write appropriate constructors, destructor and printOrder function.
In the constructor, of order class only count of items will be passed. Now, you have to implement a function
placeOrder() as a member function of order class. Its partial implementation is given below:
As one person can order the system for multiple times, so in the main function you need to ask the user, how
many orders you want to place. Let’s say, user wants to place two orders, two instances of order class will be
created dynamically and the placeorder function will be called.
Finally, all of the orders will be displayed on the system screen.
void placeOrder()
{
int userChoice;
int i=0, itemCount=0;
while(i<this->noOfItems)
{
cout<<"Choose Item you want to add\n";
cin>>userChoice;
if(userChoice==1)
{
//take parameters from user needed for a Cookie
itemList[itemCount++]= new Cookie(...)
//making base class pointer //point cookie object
}
else if(userChoice==2)
{
//take parameters from user needed for an IceCream
itemList[itemCount++]= new IceCream(...)
//making base class pointer //point IceCream object
}
else if(userChoice==3)
{
//take parameters from user needed for a Sundae
itemList[itemCount++]= new Sundae(...)
//making base class pointer //point Sundae object
}
i++;
}
void main(){
int totalOrders;
cout<<"How many orders you want to place: ?";
cin>>totalOrders;
Order ** ordersList = new Order[totalOrders];
for(int i=0; i<totalOrders; i++)
{
int itemsCount;
cout<<"How many items you want: ?";
cin>>itemsCount;
ordersList[i] = new Order(itemsCount);
ordersList[i]->placeOrder();
}
//diplay all the orders here
int TotalCost;
//Find totalCost (sum of costs of all items in list without tax) and print it.
int TotalTax;
//Find totalCost (sum of taxes of all items in list) and print it.
//delete the dynamially allocated memory.
}
-------------------------------------------GOOD 😊LUCK-----------------------------------------
