#include <iostream>
using namespace std;

//class Enemy {
//protected:
//	string name;
//	int health;
//	float strength;
//	static const int maxHealth = 100;
//public:
//	Enemy() :name("no name"), health(maxHealth), strength(0) {}
//	Enemy(string n, float s) :name(n), health(maxHealth), strength(s) {}
//
//	void print()const {
//		cout << "name: " << name << endl;;
//		cout << "health: " << health << endl;;
//		cout << "strength: " << strength << endl;;
//	}
//
//	void decreaseHealth(int value) {
//		if (health-value<=0)
//			health = 0;
//		
//		else
//			health -= value;
//	}
//
//	bool isAlive()const {
//		return health > 0;
//	}
//
//	void fight(int damage) {
//		cout << "getting damage " << damage << "%" << endl;
//		decreaseHealth(damage);
//		cout << "health: " << health << endl;
//	}
//
//	float atack() {
//		cout << "atacking with strength: " << strength << endl;
//		return strength;
//	}
//};
//
////inheritance
////specifacator->public,private,protected
//class Dragon : public Enemy {
//	float armor;
//public:
//	Dragon():armor(0),Enemy(){}
//	Dragon(string n,float s,float a):armor(a),Enemy(n,s){}
//	
//	void fight(int damage) {
//		Enemy::fight(damage - armor);
//	}
//
//	void print()const {
//		cout << "======================================" << endl;
//		Enemy::print();
//		cout << "armor: " << armor << endl;
//		cout << "======================================" << endl;
//	}
//
//
//};
//class Wizard:public Enemy {
//	float udar;
//public:
//	Wizard():udar(0),Enemy(){}
//	Wizard(string n,float s,float u):udar(u),Enemy(n,s){}
//	
//	float magicAtack() {
//		cout << "atacking with magic " << udar << endl;
//		return udar+strength;
//	}
//
//	void print()const {
//		cout << "======================================" << endl;
//		Enemy::print();
//		cout << "magic power: " << udar << endl;
//		cout << "======================================" << endl;
//	}
//
//	void fight(int damage) {
//		Enemy::fight(damage);
//	}
//};




//class Student {
//protected:
//	string name;
//	string surname;
//	int averageMark;
//
//	string group;
//	string specialization;
//public:
//	Student():name("no name"),surname("no surname"),averageMark(0),group("no group"),specialization("no specialization"){}
//	Student(string n,string s,int a,string g,string sp):name(n),surname(s),averageMark(a),group(g),specialization(sp){}
//	
//	void changeMark(int m) {
//		averageMark = m;
//	}
//
//	void celebrate()const {
//		cout << "mivina po akcii" << endl;
//	}
//
//	void print()const {
//		cout << "name: " << name << endl;
//		cout << "surname: " << surname << endl;
//		cout << "averageMark: " << averageMark << endl;
//		cout << "group: " << group << endl;
//		cout << "specialization: " << specialization << endl;
//	}
//};
//class Aspirant:public Student {
//	string kandidatTheme;
//	int pageAmount;
//public:
//	Aspirant():kandidatTheme("no theme"),pageAmount(0),Student(){}
//	Aspirant(string n,string s,int a,string g,string sp,string kt,int pa):kandidatTheme(kt),pageAmount(pa),Student(n,s,a,g,sp){}
//	
//	void writeDesertation(int p) {
//		pageAmount += p;
//	}
//
//	void defendDesertation()const {
//		cout << "im defending desertation" << endl;
//	}
//
//	void print()const {
//		Student::print();
//		cout << "kandidatTheme: "<<kandidatTheme <<endl;
//		cout << "pageAmount: "<<pageAmount <<endl;
//	}
//};



class Passport {
protected:
		string name;
		string surname;
		string citizenship;
		string placeOfBirth;
public:
	Passport():name("no name"),surname("no surname"),citizenship("no citizenship"),placeOfBirth("no place of birth"){}
	Passport(string n, string s, string c, string p):name(n),surname(s),citizenship(c),placeOfBirth(p){}
	
	void print()const {
		cout << "name: " << name << "/ surname: " << surname << endl;
		cout << "citizenship: " << citizenship << "/ placeOfBirth: " << placeOfBirth << endl;
		cout << endl;
	}
};
class ForeignPassport :public Passport {
	string visas;
	int passportNum;
public:
	ForeignPassport():visas("no visas"),passportNum(0),Passport(){}
	ForeignPassport(string v,int p, string n, string s, string c, string pb):visas(v),passportNum(p),Passport(n,s,c,pb){}
	
	void print()const {
		Passport::print();
		cout << "visas: " << visas << "/ passport number: " << passportNum << endl;
	}
};

int main()
{
	Passport p("oleg", "vinik", "Ukraine", "boyarka");
	p.print();
	ForeignPassport f("america,italy", 89,"sasha", "goldenko", "Ukraine", "kvasiliv");
	f.print();





	//1
	/*Student s("koshel", "malii", 9, "group 4", "dvornik");
	s.print();
	s.celebrate();
	s.changeMark(10);
	s.print();*/

	//Aspirant a("tyoma", "velikii", 9, "group 9", "shlyapnik","mitla",8);
	//a.defendDesertation();
	//a.print();
	//a.writeDesertation(90);
	//a.print();






	//Dragon dragon("ninada",5,2);
	//Dragon dragon2("okulist",7,4);

	//dragon.print();
	//dragon2.print();

	//int i = 1;
	//do
	//{
	//	dragon.fight(dragon2.atack());
	//	dragon2.fight(dragon.atack());

	//	
	//	i++;
	//	

	//} while (dragon2.isAlive() and dragon.isAlive());
	//dragon.print();
	//dragon2.print();
	//cout << "rounds: " << i << endl;

	//Wizard w("fidimidi",4,4);
	//do
	//{
	//	w.fight(dragon2.atack());
	//	dragon2.fight(dragon.atack());

	//	
	//	i++;
	//	
	//} while (dragon2.isAlive()and w.isAlive());
	//w.print();
	//dragon2.print();
	//cout << "rounds: " << i << endl;
}


