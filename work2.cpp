#include <iostream> 

class Mechanic {
public:

	virtual void move()
	{
		std::cout << "" << std::endl;
	}
};

class Swim : public Mechanic {
public:

	void move() override
	{
		std::cout << "Я плыву" << std::endl;
	}
};

class Fly : public Mechanic {
public:
	void move()override
	{
		std::cout << "Я лечу" << std::endl;
	}
};

class Jump : public Mechanic {
public:
	void move()override
	{
		std::cout << "Я прыгаю" << std::endl;
	}

};

class Teleport : public Mechanic {
public:
	void move()override
	{
		std::cout << "Я телепортируюсь" << std::endl;
	}

};



class Person {
public:
	void move(Mechanic*mechanic)
	{
		mechanic->move();
	}

};





int main()
{
	setlocale(0,"");
	Person person;
	Swim swim;
	Fly fly;
	Jump jump;
	Teleport teleport;
	

	person.move(&swim);
	person.move(&fly);
	person.move(&jump);
	person.move(&teleport);
}

