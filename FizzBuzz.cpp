#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
void FizzBuzzFunc(int total);
void FizzBuzzTest();


int main(){
	FizzBuzzTest();
	return 0;
}

void FizzBuzzTest(){
	system("cls");
	FizzBuzzFunc(100);
}

void FizzBuzzFunc(int total){
	
	for(int i=1; i <= total; i++){
		if (i % 3 == 0 && i % 5 == 0){
			cout<<"Fizz Buzz\n";
		} else if (i % 3 == 0){
			cout<<"Fizz\n";
		} else if (i % 5 == 0){
			cout<<"Fizz Buzz\n";
		} else {
			cout<<i<<"\n";
		}
	}
}



