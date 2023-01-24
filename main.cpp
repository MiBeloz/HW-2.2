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
		std::cout << "��� ����:\n��������: " << name << ", ����� �����: " << number << ", ������: " << balance << "." << std::endl;
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

	std::cout << "������� ������ � ���������� �����:\n\n������� ����� �����:" << std::endl;
	std::cin >> number;
	std::cout << "\n������� ��� ���������:" << std::endl;
	std::cin.get();
	std::getline(std::cin, name, '\n');
	std::cout << "\n������� ������:" << std::endl;
	std::cin.get();
	std::cin >> balance;

	account.setAll(number, name, balance);

	std::cout << "\n������� ����� ������:" << std::endl;
	std::cin >> balance;
	std::cout << std::endl;

	changeBalance(account, balance);
	account.print();

	system("pause > nul");
	return 0;
}