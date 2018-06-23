#include<iostream>
using namespace std;
long long iterations=0;
int main()
{
	//recursion of main function and at system stack on which recursive functions are called 
	//goes out of bound execution get stop
	cout<<"main called iteration no.:"<<iterations++<<"\n";
	//iterate around 32000 times as limit of stack is around that
	main();
	return 0;
}
