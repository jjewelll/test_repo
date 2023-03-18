#include<iostream>
#include<string>
using namespace std;

// edit

class Car { //클래스 선언
public:
	Car() {} // 클래스 함수와 생성자함수의 이름은 같아야한다. 
	Car(string pCarname, int poil, string ptireBrand, int pfuelEfficiency)
	{
		carName = pCarname; // carName은 private에 있으므로 pCarname을 선언한 후 pCarname 을 carName에 대입
		oil = poil; //
		tireBrand = ptireBrand; //
		fuelEfficiency = pfuelEfficiency;
	}

	string getCarname() { return carName; } // get함수를 사용하여 리턴값을 반환하는 함수를 생성
	int getoil() { return oil; }
	string getTireBrand() { return tireBrand; }
	int getFuelEfficiency() { return fuelEfficiency; }

	// drive 함수
	// 입력값: 주행 거리
	// 반환값: 기름 잔량
	int drive(int distance) {


		/*
			1 키로 -> 기름 6 감소
			2 키로 -> 기름 12 감소
			...
			N 키로 -> 기름 6N 감소
		*/

		oil = oil - fuelEfficiency * distance;


		return oil;
	}


private:
	string carName; // get함수를 통해야만 접근 가능하게 설정
	int oil;
	string tireBrand;
	int fuelEfficiency; // 1 키로당 소모하는 연료의 양 (예: 6 이라면, 1 키로당 6의 연료를 소모)
};

int main() {
	Car c1 = Car("Hyundae", 30, "kk", 8);  //객체의 이름을 설정 후, 변수에 값을 대입.

	//string carName; // main 함수의 변수를 선언
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

	cout << "Name: " << c1.getCarname() << endl; // c1 getCarname 호출후 양식에 맞게 출력. 
	cout << "The remaining amount of oil: " << c1.getoil() << endl;//
	cout << "The tire brand is: " << c1.getTireBrand() << endl;//
	cout << "The fuel efficiency of this car is: " << c1.getFuelEfficiency() << endl;//

	// 주행하기 (3키로)
	int dist1{ 3 };
	//c1.drive(3); //

	cout << "\n" << dist1 << " 주행 후 남은 기름: " << c1.drive(3) << endl;



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

	drive (주행)


주행 함수는 주행 거리(정수) 를 입력으로 받아서 그 거리에 비례하여
기름을 감소 시키는 함수

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