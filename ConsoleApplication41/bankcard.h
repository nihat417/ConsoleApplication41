#pragma once

class bankcard {
private:
	string _long_code;
	string _password;
	size_t _balance;
	float _expired_month_year;
public:
	bankcard() = default;

	bankcard(string long_code, string password, size_t balance, float expired_month_year) {
		set_longcode(long_code);
		set_password(password);
		set_balance(balance);
		set_expired_month_year( expired_month_year);
	}

	void set_longcode(string long_code) {
		if (long_code.length() <= 15)
			throw"wrong length";
		else
			_long_code = long_code;
	}

	void set_password(string password) {
		if (password.length() <= 6 )
			throw"wrong password";
		else
			_password = password;
	}

	void set_balance(size_t balance) {
		if (balance < 0)
			throw"worng balance";
		else
			_balance = balance;
	}

	void set_expired_month_year(float expired_month_year) {
		if (expired_month_year == 0)
			throw"wrong year or month";
		else
			_expired_month_year = expired_month_year;
	}

	string get_code() { return _long_code; }
	string get_password() { return _password; }
	size_t get_balance() { return _balance; }
	float get_expired() { return _expired_month_year; }
};