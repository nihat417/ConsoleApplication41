#pragma once

class student {
private:
	string _name="";
	string _surname="";
	string _speciality="";
	bankcard _bankcard;
	int _score=0;
	int _age;
public:
	student() = default;
	student(string name, string surname, string speciality, int score, int age, bankcard bankcard) {
		set_name(name);
		set_surname(surname);
		set_speciality(speciality);
		set_score(score);
		set_age(age);
		_bankcard = bankcard;
	}

	void set_name(string name) {
		if (name.length() < 2)
			throw"this is wrong lesson name!!";
		else
			_name = name;
	}

	void set_surname(string surname) {
		if (surname.length() < 2)
			throw"this is wrong  surname!";
		else
			_surname = surname;
	}

	void set_speciality(string speciality) {
		if (speciality.length() < 2)
			throw"this is wrong  speciality!!";
		else
			_speciality = speciality;
	}

	void set_score(int score) {
		if (score < 0)
			throw"wrong score";
		else
			_score = score;
	}

	void set_age(int age) {
		if (age < 0)
			throw"wrong money";
		else
			_age = age;
	}

	string get_name() { return _name; }
	string get_surname() { return _surname; }
	string get_speciality() { return _speciality; }
	int get_score() { return _score; }
	int get_age() { return _age; }


	void print() {
		cout << "\nname:" << get_name();
		cout << "\nsurname:" << get_surname();
		cout << "\nspeciality:" << get_speciality();
		cout << "\nscore:" << get_score();
		cout << "\nmoney:" << get_age();
	}
};