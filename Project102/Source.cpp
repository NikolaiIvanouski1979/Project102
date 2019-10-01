#include<iostream>
#include<conio.h>
using namespace std;
const char ESC = 27;
class tollBooth
{
private:
	unsigned int drive;
	double cost;
public:
	tollBooth() : drive(0), cost(0)
	{}
	void payingCar()
	{
		cost += 0.5;
		drive++;
	}
	void nopayCar()
	{
		drive++;
	}
	void display()
	{
		cout << "Number of cars: " << drive
			<< "Cost: " << cost << endl;
	}

};
int main()
{
	tollBooth booth1;
	char ch;
	cout << "Please! Enter number d else card of cost and enter number c else drived no cost"
		<< endl;

	do
	{
		cin >> ch;
		//ch = getche();
		if (ch == '0')
			booth1.nopayCar();
		if (ch == '1')
			booth1.payingCar();
	} while (ch = ESC);
	booth1.display();
	system("pause");
	return 0;
}45
6