#include"Animal.h"
#include<iostream>
using namespace std;

Animal::Animal(string name, double weight)
{
	this->name = name;
	this->weight = weight;
}

string Animal::getName()
{
	return name;
}

void Animal::setName(string name)
{
	this->name = name;
}

double Animal::getWeight()
{
	return weight;
}

void Animal::setWeight(double weight)
{
	this->weight = weight;

}

//string Animal::makeNoise() const
//{
//	return "unknown";
//}

