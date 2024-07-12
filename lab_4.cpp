if (root == nullptr)
  cerr << "Cannot delete from an empty tree.\n";
  
else if (root->data == itemToDelete 
  && root->rlink == nullptr && root->llink == nullptr)
{
  delete root;
  root = nullptr;
  --totalNodes;
}

else
{
  Node *current = root;
  Node *parent = nullptr;
  bool found = false;
  while (current != nullptr && !found)
  {
     if (current->data > itemToDelete)
     {  
        parent = current;
        current = current->llink;
     }
     else if (current->data < itemToDelete)
     {
        parent = current;
        current = current->rlink;
     }
     else
        found = true;
  }
  
  if (!found) 
     cerr << "The item to delete is not in the tree.\n";
     
  else
  {
     if (current->llink == nullptr 
        && current->rlink == nullptr)
     {
        if (parent->llink == current)
           parent->llink = nullptr;
        else
           parent->rlink = nullptr;
           
        delete current;
        current = nullptr;
     }
     
     else if (current->llink != nullptr 
        && current->rlink != nullptr)
        deleteInternalNode(current);
        
     else if (current->llink == nullptr)
     {
        if (current == root)
        {
           deleteNoLeftSubtree(current, nullptr);
        }
        else
           deleteNoLeftSubtree(current, parent);
     }
     
     else
     {
        if (current == root)
        {
           deleteNoRightSubtree(current, nullptr);
        }
        else
           deleteNoRightSubtree(current, parent);
     }
     
     --totalNodes;
  }
}
