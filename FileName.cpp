#include <iostream>
#include <chrono>//时间库
#include <thread>//线程库
#include <string>
using namespace std;

int main()
{
	cout << "Hello,world!" << endl;

	this_thread::sleep_for(chrono::seconds(3));

	cout << "Bye,world!" << endl;
}