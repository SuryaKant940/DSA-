class myStack {
	public:
	int m;
	vector<int> st;

	myStack(int n) {
		// Define Data Structures
		m = n;
	}
	bool isEmpty() {
		// check if the stack is empty
		if (st.size() == 0) {
			return true;
		}
		return false;
	}

	bool isFull() {
		// check if the stack is full
		if (st.size() == m) {
			return true;
		}
		return false;
	}

	void push(int x) {
		// inserts x at the top of the stack
		if (!isFull()) {
			st.push_back(x);
		}
	}

	void pop() {
		// removes an element from the top of the stack
		if (!isEmpty()) {
			st.pop_back();
		}
	}

	int peek() {
		// Returns the top element of the stack
		if (!isEmpty()) {
			return st.back();
		}
		return - 1;
	}
};