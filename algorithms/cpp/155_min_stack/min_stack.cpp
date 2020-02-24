class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {}
    
    void push(int x) {
        if(x < min) {
            min = x;
        }

        minStack.push(make_pair(min, x));
    }
    
    void pop() {
        minStack.pop();
        if (minStack.empty()) {
            min = INT_MAX;
        } else {
            min = minStack.top().first;
        }
    }
    
    int top() {
        return minStack.top().second;
    }
    
    int getMin() {
        return minStack.top().first;
    }

private:
    int min = INT_MAX;
    stack<pair<int, int>> minStack;
};