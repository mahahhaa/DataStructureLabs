//AlJaffan, Maha

void iterSwapStacks(stack<int>& stack1, stack<int>& stack2)
{
   while (!stack1.empty())
   {
      int stackSize = static_cast<int>(stack1.size());
      
      for (int i = 0; i < stackSize; ++i)
      {
         stack2.push(stack1.top());
         stack1.pop();
      }
      
      int elem = stack2.top();
      stack2.pop();
      
      for (int j = 0; j < stackSize - 1; ++j)
      {
         stack1.push(stack2.top());
         stack2.pop();
      }
      
      stack2.push(elem);
   }
}

void recurSwapStacks(stack<int>& stack1, stack<int>& stack2)
{
   if (!stack1.empty())
   {
      int elem = stack1.top();
      stack1.pop();
      recurSwapStacks(stack1, stack2);
      stack2.push(elem);
   }
}

void stlSwapStacks(stack<int>& stack1, stack<int>& stack2)
{
   swap(stack1, stack2);
}

void moveStacks(stack<int>& stack1, stack<int>& stack2)
{
   stack<int> temp = stack2;
   stack2 = stack1;
   stack1 = temp;
}
