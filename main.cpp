#include<iostream>
#include<string>
using namespace std;

// edit

class Car { //Ŭ���� ����
public:
	Car() {} // Ŭ���� �Լ��� �������Լ��� �̸��� ���ƾ��Ѵ�. 
	Car(string pCarname, int poil, string ptireBrand, int pfuelEfficiency)
	{
		carName = pCarname; // carName�� private�� �����Ƿ� pCarname�� ������ �� pCarname �� carName�� ����
		oil = poil; //
		tireBrand = ptireBrand; //
		fuelEfficiency = pfuelEfficiency;
	}

	string getCarname() { return carName; } // get�Լ��� ����Ͽ� ���ϰ��� ��ȯ�ϴ� �Լ��� ����
	int getoil() { return oil; }
	string getTireBrand() { return tireBrand; }
	int getFuelEfficiency() { return fuelEfficiency; }

	// drive �Լ�
	// �Է°�: ���� �Ÿ�
	// ��ȯ��: �⸧ �ܷ�
	int drive(int distance) {


		/*
			1 Ű�� -> �⸧ 6 ����
			2 Ű�� -> �⸧ 12 ����
			...
			N Ű�� -> �⸧ 6N ����
		*/

		oil = oil - fuelEfficiency * distance;


		return oil;
	}


private:
	string carName; // get�Լ��� ���ؾ߸� ���� �����ϰ� ����
	int oil;
	string tireBrand;
	int fuelEfficiency; // 1 Ű�δ� �Ҹ��ϴ� ������ �� (��: 6 �̶��, 1 Ű�δ� 6�� ���Ḧ �Ҹ�)
};

int main() {
	Car c1 = Car("Hyundae", 30, "kk", 8);  //��ü�� �̸��� ���� ��, ������ ���� ����.

	//string carName; // main �Լ��� ������ ����
	//int oil;
	//string tireBrand;

	/*
	cout << "The name of car is: ";
	getline(cin, carName);

	cout << "\nThe remaining amount of oil is: ";
	cin.ignore();
	cin >> oil;

	cout << "\nThe tirebrand is: ";
	getline(cin, tireBrand);

	*/

	cout << "Name: " << c1.getCarname() << endl; // c1 getCarname ȣ���� ��Ŀ� �°� ���. 
	cout << "The remaining amount of oil: " << c1.getoil() << endl;//
	cout << "The tire brand is: " << c1.getTireBrand() << endl;//
	cout << "The fuel efficiency of this car is: " << c1.getFuelEfficiency() << endl;//

	// �����ϱ� (3Ű��)
	int dist1{ 3 };
	//c1.drive(3); //

	cout << "\n" << dist1 << " ���� �� ���� �⸧: " << c1.drive(3) << endl;



}


/*
members:
	carName (string)
	oil (int)
	tireBrand (string)


member functions:
	getCarName
	getOil
	getTireBrand

	setCarName
	setOil
	setTireBrand

	drive (����)


���� �Լ��� ���� �Ÿ�(����) �� �Է����� �޾Ƽ� �� �Ÿ��� ����Ͽ�
�⸧�� ���� ��Ű�� �Լ�

*/


/*
int main() {
	int x{ 2 };

	if (x == 1) {
		std::cout << "1";
	}
	else if (x == 2) {
		std::cout << "2";
	}
	else if (x == 3) {
		std::cout << "3";
	}

	switch (x) {
		case 1: std::cout << "1"; break;
		case 2: std::cout << "2"; break;
		case 3: std::cout << "3"; break;
		default: std::cout << "0";
	}


	return 0;
}
*/