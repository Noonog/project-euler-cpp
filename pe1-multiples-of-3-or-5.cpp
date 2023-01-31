//Project Euler
//https://projecteuler.net/problem=1
//multiples of 3 or 5
/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
/*
My Plan:
iterate over every 3rd number until X
	check if its divisible by 5, then discard
	add them all up
iterate over every 5th number
	add them all up

My reasoning: by iterating on all multiples of 3 and 5 separately, 
we skip all the unused repititions. the amount of reps we "check" is much smaller
so we spend our cycles on "useful" iterations and adding to the total
*/

#include <iostream>

int main(){
	//set some magic numbers
	constexpr int maximumNum {1000};
	constexpr int checkNum1 {3};
	constexpr int checkNum2 {5};
	int total{0};

	//iterate over all multiples of 3
	for(int iter{checkNum1};iter < maximumNum; iter+=checkNum1){
		//if currect iteration NOT divisible cleanly by 5, add to the total
		if((iter % checkNum2)!=0){
			total+=iter;
		}
	}
	
	//iterate over all multipes of 5
	for(int iter{checkNum2};iter < maximumNum; iter+=checkNum2){
		total+=iter;
	}
	
	std::cout << "total is : " << total << '\n';
	return 0;
}
