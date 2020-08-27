class MinStack {
private:
    vector<int> stack;
    size_t end_index = 0;
    size_t min_index = 0;
public:
    /** initialize your data structure here. */
    MinStack() {}

    void push(int x) {
        // if it's first on stack it's new min
        if (end_index == 0) {
            min_index = 0;
        }
        // might be new min
        else if (x < stack[min_index]) {
            min_index = end_index;
        }

        // push_back if stack.size < end_index
        if (stack.size() <= end_index)
        {
            stack.push_back(x);
        }
        else { // otherwise insert
            stack[end_index] = x;
        }


        ++end_index;
    }

    void pop() {
        assert(end_index > 0);
        // if a pop occurs, it may pop the min
        if (min_index == end_index - 1) {
            // find new min
            min_index = 0;
            for (auto i = 1; i < end_index - 1; i++) {
                if (stack[i] < stack[min_index]) {
                    min_index = i;
                }
            }
        }
        --end_index;
    }

    int top() {
        assert(end_index > 0);
        return stack[end_index - 1];
    }

    int getMin() {
        return stack[min_index];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */