#include<random>
using namespace std;

#include<iostream>
#include<chrono>

int main()
{
	uniform_int_distribution<int> unifIntDist(0,100);
	unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
	default_random_engine e(seed);
	
	int repeatTimes;
	cout<<"\nEnter how many times to generate random number : ";
	cin>>repeatTimes;
	
	while (repeatTimes--)
		cout<<unifIntDist(e)<<" ";
	return 0;
}
