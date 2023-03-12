#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get fib sequence"){

	string get_fib_sequence(int num);
	
	REQUIRE(get_fib_sequence(5) == "011235");
	REQUIRE(get_fib_sequence(7) == "0112358");
	REQUIRE(get_fib_sequence(10) == "011235813213455");
	REQUIRE(get_fib_sequence(12) == "01123581321345589144");

}
	

	