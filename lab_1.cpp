// Tran, Lily (Team Leader)
// Aljaffan, Maha

// Part 1
map<string, set<string>> neighbors = {
  {"Illinois", {"Indiana", "Iowa", "Michigan", "Missouri", "Wisconsin"}},
  {"Indiana", {"Illinois", "Michigan", "Ohio"}},
  {"Iowa", {"Illinois", "Minnesota", "Missouri", "Nebraska", "South Dakota", "Wisconsin"}},
  {"Kansas", {"Missouri", "Nebraska"}},
  {"Michigan", {"Illinois", "Indiana", "Minnesota", "Ohio", "Wisconsin"}},
  {"Minnesota", {"Iowa", "Michigan", "North Dakota", "South Dakota", "Wisconsin"}},
  {"Missouri", {"Illinois", "Iowa", "Kansas", "Nebraska"}},
  {"Nebraska", {"Iowa", "Kansas", "Missouri", "South Dakota"}},
  {"North Dakota", {"Minnesota", "South Dakota"}},
  {"Ohio", {"Indiana", "Michigan"}},
  {"South Dakota", {"Iowa", "Minnesota", "Nebraska", "North Dakota"}},
  {"Wisconsin", {"Illinois", "Iowa", "Michigan", "Minnesota"}}
};

// Part 2
void printNeighbors(const map<string, set<string>>& neighbors)
{
  for (const auto& state : neighbors)
  {
    cout << state.first << " borders with: ";
    for (const string& neighbor : state.second)
    {
      cout << neighbor << " ";
    }
    cout << endl;
  }
}

// Part 3
vector<vector<int>> neighbors{
  {0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0},
  {1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1},
  {0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
  {0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1},
  {1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
  {0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0},
  {1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0}
};
 
// Part 4
bool areNeighbors(const vector<string>& states, const vector<vector<int>>& neighbors, 
   const string& state1, const string& state2)
{
  int i = 0, row = 0, column = 0;
  bool foundRow = false, foundColumn = false;
  
  while (!foundRow || !foundColumn)
  {
    if (states[i] == state1) 
    {
      row = i;
      foundRow = true;
    }
    else if (states[i] == state2) 
    {
      column = i;
      foundColumn = true;
    }
    
    ++i;
  }
  
  return neighbors[row][column];
}
