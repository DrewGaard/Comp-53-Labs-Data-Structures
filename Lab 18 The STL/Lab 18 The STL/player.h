//Player header

#include <string>
using namespace std;

class Player
{
private:
	string name;
	int age;

public:
	Player();

	void setName(string n);
	void setAge(int a);

	string getName();
	int getAge();

	void Print();
};