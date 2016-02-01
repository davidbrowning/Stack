#pragma once
#ifndef NODE_HPP
#define NODE_HPP
#include <memory>

struct Node {
	std::shared_ptr<Node> next;
	int val;
	Node() {};
	~Node() {};
	Node(std::shared_ptr<Node>, int &);
	Node(int &);

	int pop(std::shared_ptr<Node>&);

	std::shared_ptr<Node> push(std::shared_ptr<Node>, int);
};



#endif // !NODE_HPP
