//Player class


#include <iostream>
#include <string>
#include "player.h"

using namespace std;

Player::Player() //Constructor
{
	name = "default";
	age = 0;
}
void Player::setName(string n)
{
	name = n;
}
void Player::setAge(int a)
{
	age = a;
}
int Player::getAge()
{
	return age;
}
string Player::getName()
{
	return name;
}
void Player::Print()
{
	cout << "The players age is: " << age << endl;
	cout << "The players name is: " << name << endl;
	cout << endl; //I added an extra endl just so it was easier to see what was happening
}