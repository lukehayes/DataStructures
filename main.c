#include <iostream>
#include "node.h"

int main() {
	Node n1(10);
	Node n2(200);

	n1.setNext(&n2);

	std::cout << n1.getNext()->data << std::endl;

    return 0;
}
