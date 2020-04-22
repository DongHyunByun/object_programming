#include <iostream>
#include <string>

using namespace std;

template <class T>
class Queue {
private:
	T* p_list;
	int size;
	int MAX_SIZE;
	
public:
	Queue(int _MAX_SIZE = 1000) {
		MAX_SIZE = _MAX_SIZE;
		p_list = new T[MAX_SIZE];
	}
	~Queue() {
		delete[] p_list;
	}
	int find_index(T _item) {
		for (int i = 0; i < size; i++) {
			if (p_list[i] == _item) {
				return i;
			}
		}
		return -1;
	}
	void Enqueue(T _item) {
		if (find_index(_item) != -1) {
			return;
		}
		if (size == MAX_SIZE) {
			cout << "Error: out of memory" << endl;
			return;
		}
		p_list[size] = _item;
		size++;
	}
	T Dequeue() {
		T ans;
		if (size == 0) {
			cout << "Error: No item exists in the list" << endl;
			return NULL;
		}
		ans = p_list[0];
		for (int i = 1;i < size;i++) {
			p_list[i - 1] = p_list[i];
		}
		size--;
		return ans;
	}
	void print() const {
		cout << "Items in the list : ";
		for (int i = 0; i < size; i++) {
			cout << p_list[i] << ", ";
		}
		cout << endl;
	}
	int get_size() {
		return size;
	}
	T get_item(int _index) {
		return p_list[_index];
	}

};

int main() {
	Queue<int> int_queue;
	Queue<float> float_queue;
	Queue<char> char_queue;

	int_queue.Enqueue(1);
	int_queue.Enqueue(2);
	int_queue.Enqueue(2);
	int_queue.Enqueue(5);

	float_queue.Enqueue(4.3);
	float_queue.Enqueue(2.5);
	float_queue.Enqueue(3.7);
	float_queue.Enqueue(3.7);

	char_queue.Enqueue('b');
	char_queue.Enqueue('b');
	char_queue.Enqueue('c');
	char_queue.Enqueue('a');
	
	cout << "<Before Dequeue>" << endl;
	int_queue.print();
	float_queue.print();
	char_queue.print();

	int_queue.Dequeue();

	float_queue.Dequeue();
	float_queue.Dequeue();

	char_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();

	cout << "<After Dequeue>" << endl;
	int_queue.print();
	float_queue.print();
	char_queue.print();

	return 0;
}