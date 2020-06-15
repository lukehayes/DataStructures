#include "node.h"

Node::Node() :
	data(0), next(nullptr)
{}

Node::Node(int data) :
	data(data), next(nullptr)
{}
Node::~Node() {}

Node* Node::getNext() {
	return this->next;
}
void Node::setNext(Node* n) {
	this->next = n;
}