class Stack {
public:
    queue<int> q1,q2;
    // Push element x onto stack.
    void push(int x) {
        if(q1.empty())
            q2.push(x);
        else
            q1.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        if(q1.empty()) {
            int n=q2.size();
            for(int i=0;i<n-1;i++) {
                q1.push(q2.front());
                q2.pop();
            }
            q2.pop();
        }
        else {
            int n=q1.size();
            for(int i=0;i<n-1;i++) {
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
        }
    }

    // Get the top element.
    int top() {
        if(q1.empty()) {
            int ret;
            int n=q2.size();
            for(int i=0;i<n;i++) {
                q1.push(ret = q2.front());
                cout<<ret;
                q2.pop();
            }
            return ret;
        }
        else {
            int ret;
            int n=q1.size();
            for(int i=0;i<n;i++) {
                q2.push(ret = q1.front());
                q1.pop();
            }
            return ret;
        }
    }

    // Return whether the stack is empty.
    bool empty() {
        return (q1.empty() && q2.empty());
    }
};