#include <iostream>

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> vec{1, 2, 3, 4, 5};

	// Creamos una función lambda que toma un entero como argumento y retorna el entero multiplicado por 2
	auto lambda = [](int x) {
		return x * 2;
	};

	// Aplicamos la función lambda a cada elemento del vector
	std::transform(vec.begin(), vec.end(), vec.begin(), lambda);

	// Imprimimos el vector transformado
	for (int x : vec)
		std::cout << x << ' ';

	return 0;
}

