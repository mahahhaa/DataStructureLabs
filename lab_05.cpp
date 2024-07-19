
// Part 1
int hashValue(int key, int j, int capacity)
{
   return ( (( (3 * key) + 3 ) + j * j ) % capacity);
}

// Part 2
void insertKey(int table[], int capacity, 
   int& numberOfElement, int key)
{
   bool stop = false;
   int j = 0;
   while (!stop && j < LIMIT)
   {
      int index = hashValue(key, j, capacity);
      if (table[index] == key)
      {
         cerr << "Key " << key << " is a duplicate.\n";
         stop = true;
      }
      else if (table[index] == 0 || table[index] == -2)
      {
         table[index] = key;
         stop = true;
         ++numberOfElement;
      }
      
      ++j;
   }
   
   if (j == LIMIT)
      cout << "Key " << key 
           << " not inserted. Need to rehash.\n";
}

// Part 3
bool searchKey(const int table[], int capacity, int key)
{
   int j = 0;
   while (j < LIMIT)
   {
      int index = hashValue(key, j, capacity);
      
      if (table[index] == 0) 
         return false;
      else if (table[index] == key)
         return true;
      
      ++j;
   }
   
   return false;
}

// Part 4
void deleteKey(int table[], int capacity, 
   int& numberOfElelment, int key)
{
   int j = 0;
   bool stop = false;
   while (!stop && j < LIMIT)
   {
      int index = hashValue(key, j, capacity);
      if (table[index] == 0)
         stop = true;
      else if (table[index] == key)
      {
         table[index] = -2;
         stop = true;
         --numberOfElelment;
      }
      
      ++j;
   }
   
   if (j == LIMIT)
      cout << "Key " << key << 
      " is not in the table.\n";
}
