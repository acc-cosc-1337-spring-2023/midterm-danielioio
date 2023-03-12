#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

using std:: vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get primes")
{
	vector<int> get_primes {2, 3, 5, 7};
	vector<int> get_primes {2, 3, 5, 7, 11, 13};
	vector<int> get_primes {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	vector<int> get_primes {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

	get_primes(num);

	REQUIRE(get_primes(10) == true);
	REQUIRE(get_primes(15) == true);
	REQUIRE(get_primes(30) == true);
	REQUIRE(get_primes(50) == true);
	
	
}
