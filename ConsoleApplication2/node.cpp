#include"node.hpp"

Node::Node(std::shared_ptr<Node> n, int & v){
	val = v;
	next = n;
}

Node::Node(int &v) {
	val = v;
	next = nullptr;
}

int Node::pop(std::shared_ptr<Node> &n) {
	int temp = n->val;
	n = n->next;
	return temp;
}

std::shared_ptr<Node> Node::push(std::shared_ptr<Node> n, int v) {
	Node newHead = Node(n, v);
	auto nh = std::make_shared<Node>(newHead);
	nh->next = n;
	return nh;
}