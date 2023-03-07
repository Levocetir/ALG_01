#include <iostream>
//using namespace std;
//pak nemusim psat std::cout a std::endl

struct Stack {
	int* data; // * pointer (dynamická alokace)
	int capacity;
	int index;
	int value;

	void initialize(int capacity) { //metoda
		this->data = new int[capacity]; //dynamicky alokované pole data
		this->capacity = capacity;
		this->index = -1;
		this->value = 0;
	}

	void push() {
		if (this->index < this->capacity -1) //nebo místo -1 u capacity lze napsat +1 u indexu
		{
			this->index++;
			this->value++;
			this->data[this->index] = value;

		}
		else
		{
			std::cout << "No more space" << std::endl;
		}

	}

	int pop() {

		if (this->index > -1)
		{
			int tmp = this->data[this->index];
			this->index--;
			return tmp;
		}
		else
		{
			std::cout << "No more bullets" << std::endl;
			return INT_MAX;
		}
		
	}
};

int main() {

	Stack ammo; //instance
	ammo.initialize(5);

	ammo.push();
	ammo.push();
	ammo.push();
	ammo.push();
	ammo.push();
	ammo.push();
	ammo.push();

	std::cout << ammo.pop() << std::endl;
	std::cout << ammo.pop() << std::endl;
	std::cout << ammo.pop() << std::endl;
	std::cout << ammo.pop() << std::endl;
	std::cout << ammo.pop() << std::endl;
	std::cout << ammo.pop() << std::endl;

	std::cout << "ahoj" << std::endl;

	return 0;
}