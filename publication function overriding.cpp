/*Imagine a publishing company that markets both book and audiocassette versions of its
 works. Create a class publication that stores the title (a string) and price (type float)
 of a publication. From this class derive two classes: book, which adds a page count (type
 int), and tape, which adds a playing time in minutes (type float). Each of these three
 classes should have a getdata() function to get its data from the user at the keyboard,
 and a putdata() function to display its data.
 Write a main() program to test the book and tape classes by creating instances of them,
 asking the user to fill in data with getdata(), and then displaying the data with putdata().*/
 #include<iostream>
using namespace std;
class publication
{
	public:
	string title;
	float price;
	public:
	void get_data()
	{
		cout<<"Enter the title of the book:";
	cin>>title;
	    cout<<"Enter the price of the book:";
	cin>>price;	
	}
    void put_data()
    {
    	cout<<"\n title of the book is:"<<title;
    	cout<<"\n price of the book is"<<price;
	}
	
};
class book:public publication
{
	public:
	int count;
	public:
	void get_data()
	{
		cout<<"Enter the page count of the book:";
	 cin>>count;	
	}
	void put_data()
    {
    	
    	cout<<"\npage count of the book is:"<<count;
	}
};
class tape:public publication
{
	public:
	float play_time;
	public:
	void get_data()
	{
		cout<<"Enter the playtime of the book:";
	cin>>play_time;	
	}
	void put_data()
    {
    	
    	cout<<"\nplay time of the book is:"<<play_time;
	}
};
int main()
{
class book b;
b.publication::get_data();
b.publication::put_data();
b.book::get_data();
b.book::put_data();
class tape t;
t.get_data();
t.put_data();	
}
