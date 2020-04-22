#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
	int* p_list;
	int size=0;
	int MAX_SIZE;

public:
	Stack(int _MAX_SIZE = 1000) {
		MAX_SIZE = _MAX_SIZE;
		p_list = new int[MAX_SIZE];
		
	}
	~Stack() {
		delete[] p_list;
	}
	int find_index(int _item) {
		for (int i = 0; i < size; i++ ) {
			if (p_list[i] == _item) {
				return i;
			}
		}
		return -1;
	}
	void push(int _item) {
		if (find_index(_item) != -1) {
			return;
		}
		if (size == MAX_SIZE) {
			cout << "Error: out of memory" << endl;
		}
		else {
			p_list[size] = _item;
			size++;
		}
	}
	int pop() {
		if (size == 0) {
			cout << "Error: No item exists in the list" << endl;
			return -1000;
		}
		int ans = p_list[size - 1];
		size--;
		return ans;
	}
	void print() const {
		cout << "Items in the List : ";
		for (int i = 0; i < size; i++) {
			cout << p_list[i] << ", ";
		}
		cout << endl;
	}
	int get_size() const {
		return size;
	}
	int get_item(int _index) const{
		return p_list[_index];
	}
	
	void operator +=(const Stack & stack) {
		for (int i = 0; i < stack.get_size();i++) {
			this->push(stack.get_item(i));
		}
	}
	
	

	
	bool operator ==(const Stack & stack) {
		if (this->size != stack.get_size()) {
			return false;
		}
		for (int i = 0; i < this->size; i++) {
			if (this->p_list[i] != stack.get_item(i)) {
				return false;
			}
		}
		return true;
	}
	
};
int main() {
	Stack s1, s2;

	s1.push(1);
	s1.push(2);
	s1.push(3);

	s2.push(1);
	s2.push(2);
	s2.push(5);

	s1.print();
	s2.print();
	
	s1 += s2;

	s1.print();
	s2.print();
	cout << "s1==s2 ? " << (s1 == s2) << endl;

	s1.pop();
	s1.pop();
	s2.pop();
	cout << "s1==s2 ? " << (s1 == s2) << endl;
	s2.pop();
	s2.pop();
	s2.pop();
	
	return 0;

}