
#include <iostream>
#include <cstdlib> // Required for atoi

int fact(int n);

int binom(int n, int k) {
	int n_fact = fact(n);
	int k_fact = fact(k);
	int n_minus_k_fact = fact(n-k);
	return (n_fact)/(k_fact * n_minus_k_fact);
}

int fact(int n) {
	if (n < 0) { return -1; }
	if (n == 0) { return 1; }
	int result = 1;
	for (int i = 1; i<=n; i++) {
		result *= i;
	}
	return result;
}


int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <integer1> <integer2>" << std::endl;
        return 1; // Indicate an error
    }
	std::cout<<"Arguement Count : "<<argc<<std::endl;
    int num1 = std::atoi(argv[1]);
    int num2 = std::atoi(argv[2]);
	int fact_result = fact(5);
	if (fact_result == -1) { return 1;}
	std::cout<<"Result of Factorial is "<<fact_result<<std::endl;
    std::cout<<"Value n: "<<num1<<std::endl;
    std::cout<<"Value k: "<<num2<<std::endl;
	std::cout<<"binom("<<num1<<","<<num2<<") = "<<binom(num1,num2)<<std::endl;
    return 0; // Indicate successful execution
}

