#include <iostream>
#include <string>

enum fueltype {
	GASOLINE, DIESEL, ElECTRIC, HYBRID, NONE
};

class Machine {
protected:
	std::string brand;
	std::string Model;
	int engineCapacity;
	fueltype fuel_type;

public:
	Machine() {
		brand = "NONE";
		Model = "NONE";
		engineCapacity = 0;
		fuel_type = NONE;
	};
	Machine(std::string Brand, std::string Name, int EngineCapacity, fueltype Fuel) {
		brand = Brand;
		Model = Name;
		engineCapacity = EngineCapacity;
		fuel_type = Fuel;
	};

	friend void ShowData(Machine);

};
class Train:public Machine {
	private:
		int length;
		int range;
	public:
		Train() {
			brand = "NONE";
			Model = "NONE";
			engineCapacity = 0;
			fuel_type = NONE;
			length = 0;
			range = 0;
		};
		Train(std::string Brand, std::string Name, int EngineCapacity, fueltype Fuel, int Length,int Range):Machine(Brand, Name, EngineCapacity,Fuel) {
			brand = Brand;
			Model = Name;
			engineCapacity = EngineCapacity;
			fuel_type = Fuel;
			length = Length;
			range = Range;
		};
		friend void ShowData(Train);

	};
void ShowData(Train machine) {
	std::cout << "Brand of " << machine.Model << " is " << machine.brand << std::endl;
	std::cout << "EngineCapacity of " << machine.Model << " is " << machine.engineCapacity << std::endl;
	std::cout << "Fuel Type of " << machine.Model << " is " << machine.fuel_type << std::endl;
	std::cout << "Length of " << machine.Model << " is " << machine.length << " Wagons" << std::endl;
	std::cout << "Range of " << machine.Model << " is " << machine.range << " km " << std::endl << std::endl;
};

void ShowData(Machine machine) {
	std::cout << "Brand of " << machine.Model << " is " << machine.brand << std::endl;
	std::cout << "EngineCapacity of " << machine.Model << " is " << machine.engineCapacity << std::endl;
	std::cout << "Fuel Type of " << machine.Model << " is " << machine.fuel_type << std::endl << std::endl;
};

int main()
{
	std::string list[3] = {"car", "car1", "train"};
	Machine car("Audi", "a7", 98, DIESEL);
	Machine car1("BMW", "X4", 110, GASOLINE);
	Train train("Train", "Fast", 400, DIESEL, 15, 1200);
	ShowData(car);
	ShowData(car1);
	ShowData(train);
}
