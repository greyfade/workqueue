#include <cassert>
#include <chrono>
#include "threadpool.hpp"

using namespace workqueue;

int main() {
	threadpool tp(1);

	std::packaged_task<int()> task1([]{return 15;});
	std::packaged_task<int()> task2([]{return 16;});
	auto fut = tp.add_task<int>(task1);
	auto fut2 = tp.add_task<int>(task2);
	fut.wait();
	fut2.wait();
	assert(fut.get() == 15);
	assert(fut2.get() == 16);
}
