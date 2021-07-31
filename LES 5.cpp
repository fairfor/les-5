#include <iostream>

// =======================================

template <typename T>
class Pair1 {
private:
	T firstN;
	T secondN;
public:
	Pair1(T firstN, T secondN) 
		: firstN(firstN) 
		, secondN(secondN)
	{}

	T first() const {
		return firstN;
	}

	T second() const {
		return secondN;
	}
};

void task1() {
	Pair1<int> p1(6, 9);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair1<double> p2(3.4, 7.8);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}

// =======================================

template <typename T1, typename T2>
class Pair {
private:
	T1 firstN;
	T2 secondN;
public:
	Pair(T1 firstN, T2 secondN)
		: firstN(firstN)
		, secondN(secondN)
	{}

	T1 first() const {
		return firstN;
	}

	T2 second() const {
		return secondN;
	}
};

void task2() {
	Pair<int, double> p1(6, 7.8);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair<double, int> p2(3.4, 5);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}
// =======================================

template <typename Type>
class StringValuePair {
	std::string name;
	Type number;
public:
	StringValuePair(std::string name, Type number)
		: name(name)
		, number(number)
	{}

	std::string first() {
		return name;
	}

	Type second() {
		return number;
	}
};

void task3() {
	StringValuePair<int> svp("Amazing", 7);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
}

// =======================================

class GenericPlayer {
	std::string namePlayer{};
	int card; // предположительный класс card, просто я потерял файл, где он хранился
public:
	GenericPlayer(std::string name) : namePlayer(name) 
	{}

	virtual int IsHitting() {
		return card;
	}
	bool IsBoosted() {
		if (card > 21) return true;
		else false;
	}
	std::string Bust() {
		std::cout <<  namePlayer << "brute force\n";
	}
};

// =======================================

int main()
{
	task1();
	task2();
	task3();
	return 0;
}
