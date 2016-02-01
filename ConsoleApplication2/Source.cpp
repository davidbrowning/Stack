#include<iostream>
#include<cstdlib>
#include<random>
#include<memory>
#include"node.hpp"

int main() {
	std::random_device rd;
	int a[50];
	for (int i = 0; i < 50; i++) {
		a[i] = rd()%100;
		//std::cout << a[i] << std::endl;
	}
	int q = 155;
	Node first(q);
	std::shared_ptr<Node> head = std::make_shared<Node>(first);
	for (int i = 0; i < 50; i++) {
		head = first.push(head, a[i]);
		std::cout << head->val << std::endl;
	}
	for (int i = 0; i < 50; i++) {
		int temp = first.pop(head);
		std::cout << temp << std::endl;
	}
	return EXIT_SUCCESS;
}