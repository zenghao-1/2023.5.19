#include <iostream>
#include <chrono>//ʱ���
#include <thread>//�߳̿�
#include <string>
using namespace std;

int main()
{
	cout << "Hello,world!" << endl;

	this_thread::sleep_for(chrono::seconds(3));

	cout << "Bye,world!" << endl;
}