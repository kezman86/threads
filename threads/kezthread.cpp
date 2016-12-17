#include <iostream>
#include <thread>

void thread_function()
{
	for (int i = 0; i < 10000; i++)
		std::cout << "Thread function executing" << std::endl;
}

int main()
{
	std::thread threadObj(thread_function);
	for (int i = 0; i < 10000; i++)
		std::cout << "Main thread" << std::endl;

	threadObj.join();

	std::cout << "hi All !" << std::endl;

	std::cout << "Exit main function" << std::endl;

	return 0;
}