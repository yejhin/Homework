#include <iostream>
#include <string>


using namespace std::string_literals;
template <typename T>
auto sum(T x) {
	return x;
}

template<typename T, typename...Args>
auto sum(T x, Args... args) {
	return x + sum(args...);
}
int main() {
	auto x = sum(42.5, 10, 11.1f);
	std::cout << x;
	getchar();
}