// Name: Dylan Phan
// CWID: 885582536
// Email: DylanP@csu.fullerton.edu

/**
 * TODO: Complete these class definitions
 */

/// Starter includes (YW)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"

//
namespace CPSC131::PalindromeDetector
{
	/// YOUR WELCOME
	MyDetector::MyDetector() {}
	
	//
	bool MyDetector::isPalindrome(std::string s)
	{
		//	TODO: Your code here

		MyQueue<char> MyQueue;
		MyStack<char> MyStack;
		size_t Half = 0;

		for (size_t i = 0; i < s.length();i++) {
			if (isalpha(s[i])) {
				MyStack.push(tolower(s[i]));
				MyQueue.enqueue(tolower(s[i]));
			}
		}
		Half = (MyStack.size()/2 + MyStack.size()%2);
		for (size_t j = 0; j < Half; j++) {
			if (MyStack.top() == MyQueue.front()) {
				MyStack.pop();
				MyQueue.dequeue();
			} else {
				return false;
			}
		} 
		return true;
	}
}












