#include <iostream>
#include <stack>

// Stack is a lifo data structure, it means last in first out.

void printStackElement (std::stack<int> stack)
{
    while (!stack.empty())
    {
        std::cout << stack.top() << " " << std::endl;
        stack.pop();
    }
}

int main()
{
    // Functions: emtpy, size, push, pop, top
    std::stack<int> numberStack;
    numberStack.push(1);
    // This push function add the element to the top of the stack
    numberStack.pop();
    // This pop function removes the first element on the top of the stack.
    numberStack.push(2);

    numberStack.push(3);


    if (numberStack.empty())
    {
        std::cout << "Stack is empty" << std::endl;
    } else
    {
        std::cout << "The stack is not empty" << std::endl;
        std::cout << "Stack size is " << numberStack.size() << std::endl;
    }

    std::cout << "*************************************************************" << std::endl;
    printStackElement(numberStack);



    return 0;
}
