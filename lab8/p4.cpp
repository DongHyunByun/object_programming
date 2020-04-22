#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <iomanip>
using namespace std;

class Avengers {
protected:
	string name;
	int attack_point;
	int defense_point;
	int health;

public:
	Avengers() {
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	~Avengers() {}

	virtual void set(string _name, int _attack, int _defense, int _health) {}
	virtual int attack() {
		return 0;
	}
	virtual void defense(int _attack_point) {}
	virtual void print_info() {}
};

class Character : public Avengers {
public:
	int get_health() {
		return health;
	}
	void set(string _name, int _attack, int _Defense, int _health) {
		name = _name;
		attack_point = _attack;
		defense_point = _Defense;
		health = _health;
	}
	int attack() {
		return attack_point;
	}
	void defense (int _attack_point) {
		health -= _attack_point - defense_point;
	}
	void print_info() {
		cout << "Name : " << name<<endl;
		cout << "Attack_Point : " <<attack_point<< endl;
		cout << "Defense_Point : " << defense_point << endl;
		cout << "Health : " << health << endl;
	}
};
int main() {
	int ran = rand()%2;
	string my;
	Character my_char;
	Character enemy_char;
	int i = 1;
	
	vector<Character> chaV(3);
	chaV[0].set("IronMan", 70, 40, 100);
	chaV[1].set("CaptainAmerica", 60, 50, 100);
	chaV[2].set("Thor", 80, 30, 100);

	cout << "Choose your character(IronMan, CaptainAmerica,Thor) : "; cin >> my;
	if (my == "IronMan") {
		my_char = chaV[0];
		chaV.erase(chaV.begin() + 0);
	}
	else if (my == "CaptainAmerica") {
		my_char = chaV[1];
		chaV.erase(chaV.begin() + 1);
	}
	else {
		my_char = chaV[2];
		chaV.erase(chaV.begin() + 2);
	}
	enemy_char = chaV[ran];

	cout << "--My Character--" << endl;
	my_char.print_info();
	cout << "--Enemy Character--" << endl;
	enemy_char.print_info();

	cout << endl << "--Battle--" << endl;
	cout << "My Life: " << my_char.get_health() << "\t" << "Enemy Life: " << enemy_char.get_health() << endl;
	
	while (1) {
		if (i%2==1) {
			enemy_char.defense(my_char.attack());
		}
		else {
			my_char.defense(enemy_char.attack());
		}

		if (enemy_char.get_health() <= 0) {
			cout << "My Life: " << my_char.get_health() << "\t";
			cout << "Enemy Life:" << 0 << endl;
			cout << "You Win!";
			return 0;
		}
		else if (my_char.get_health() <= 0) {
			cout << "My Life: " << 0 << "\t";
			cout << "Enemy Life:" << enemy_char.get_health() << endl;
			cout << "You Lose!";
			return 0;
		}
		else {
			cout << "My Life: " << my_char.get_health() << "\t";
			cout << "Enemy Life:" << enemy_char.get_health()<<endl;
		}
	
		i++;
	}

	return 0;
}