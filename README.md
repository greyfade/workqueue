workqueue
=========

A C++11 threaded job queue
=========

##Purpose

C++11 lacks a threadpool implementation and `std::async` will, by default, spawn a new thread for each workunit in most implementations. This is an unfortunate situation. Although there exist libraries like `boost::threadpool` and `boost::asio`, these libraries are needlessly large and include more features than are actually needed for a simple worker thread implementation.

This library seeks to provide a simple worker queue that targets C++11's `std::thread` implementation.

##Notes

Compiles with GCC with the following CXXFLAGS:

    -std=c++11 -Wall -pthread -lpthread
