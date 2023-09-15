#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Вы участник баскетбольного матча. Остались пара секунд до конца матча, счёт равный. Вы прямо перед кольцом. Забьёте сами или отдадите пас свободному участнику под кольцом?" << endl;
	cout << "Забить/Пас";
	string Choice;
	cin >> Choice;
	int score = 15;
	if (Choice != "Пас")
	{
		score += 2;
	}
	else {
		score = score;
	}
	if (score > 15)
		cout << "Вы успешно забросили мяч. Вы победили." << endl;
	else
		cout << "Вашему товарищу не удалось забросить. Счёт равный" << endl;

	return 0;
}