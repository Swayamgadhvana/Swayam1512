#include<iostream>
using namespace std;
class wall
{
	private:
		double length;
		public:
			wall()
{
			length=5.5;
			cout<<"Creating a wall"<<endl;
			cout<<"Length of the wall:-"<<length<<endl;
}
};
int main()
{
	wall wall1;
		return 0;
}
