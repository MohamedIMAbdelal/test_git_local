#include<iostream>
using namespace std;
//intializing a class 
class Rectangle 
{
	private :
		double width;
		double length;
	public:
		void setLength(double);
		void setWidth(double);
		double getLength(void) const;
		double getWidth(void) const;
		double getArea(void) const;
};

void Rectangle::setLength(double len)
{
	length = len;
}
void Rectangle::setWidth(double w)
{
	width = w;
}
double Rectangle::getLength(void) const
{
	return length;
}

double Rectangle::getWidth(void) const
{
	return width;
}
double Rectangle::getArea(void) const
{
	double area = width * length;
	return area;
}

//
struct myStruct{
int i;
double d;};
class myClass{
int i;
double d;};

int main(void)
{
	
	Rectangle box;
	double rectLength , rectWidth;
	cout<<"Enter Length and width of rectangle : ";
	cin>>rectLength>>rectWidth;
	box.setLength(rectLength);
	box.setWidth(rectWidth);
	cout<<endl;
	cout<<"Recatangle Length = "<<box.getLength()<<endl;
	cout<<"Recatangle Width = "<<box.getWidth()<<endl;
	cout<<"Recatangle Area = "<<box.getArea()<<endl;
	
	myStruct a;
a.i = 3;
myClass b;
//b.i = 3;
	
	return 1;
}
