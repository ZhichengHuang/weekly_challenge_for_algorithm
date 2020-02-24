class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack(){}
    // Push element x onto stack.
    void push(int x) {
        nums.push(x);
        //将之前的元素出队并插入队尾
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            nums.push(nums.front());
            nums.pop();
        }
    }
    // Removes the element on top of the stack.
    int pop() {
        int front = nums.front();
        nums.pop();
        return front;
    }
    // Get the top element.
    int top() {
        return nums.front();
    }
    // Return whether the stack is empty.
    bool empty() {
        return nums.empty();
    }

    private:
        queue<int> nums;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */