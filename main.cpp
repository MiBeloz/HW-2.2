#include <iostream>
#include <string>

struct Account{
	long long number;
	std::string name;
	double balance;

	Account() : number{}, name{}, balance{} {};

	void setAll(const long long _number, const std::string _name, const double _balance) {
		number = _number;
		name = _name;
		balance = _balance;
	}

	void print() {
		std::cout << "¬аш счет:\n¬ладелец: " << name << ", номер счета: " << number << ", баланс: " << balance << "." << std::endl;
	}
};

void changeBalance(Account& _account, const double _balance) {
	_account.balance = _balance;
}

int main() {
	setlocale(LC_ALL, "ru");

	Account account;
	long long number{};
	std::string name;
	double balance{};

	std::cout << "¬ведите данные о банковском счете:\n\n¬ведите номер счета:" << std::endl;
	std::cin >> number;
	std::cout << "\n¬ведите им€ владельца:" << std::endl;
	std::cin.get();
	std::getline(std::cin, name, '\n');
	std::cout << "\n¬ведите баланс:" << std::endl;
	std::cin.get();
	std::cin >> balance;

	account.setAll(number, name, balance);

	std::cout << "\n¬ведите новый баланс:" << std::endl;
	std::cin >> balance;
	std::cout << std::endl;

	changeBalance(account, balance);
	account.print();

	system("pause > nul");
	return 0;
}