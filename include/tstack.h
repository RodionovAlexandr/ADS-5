// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
private:
struct stek {
	int chislo;
	stek* next;
};
	stek* my;
	stek* head=my;
	bool check=false;
public:
	void Add(int x) {
		head = new(stek);
		head->chislo = x;
		head->next = my;
		my = head;
	}
	int Top() {
		return head->chislo;
	}
	void DelTop() {
		head = my->next;
		delete my;
		my = head;
	}
	void MakeEm() {
			while (head != nullptr) {
				head = my->next;
				delete my;
				my = head;
			}
	}
	bool EmCh() {
		check = false;
		if (head == nullptr) {
			check = true;
		}
		return check;
	}
};
#endif  // INCLUDE_TSTACK_H_
