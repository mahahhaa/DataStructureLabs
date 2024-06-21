//part 1

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

//part 2

void printNeighbors(const map<string, set<string>>& neighbors)
{
   for (const auto &state : neighbors)
    {
       cout << state.first << " borders with: ";
       for (const auto &neighbor : state.second)
       {
          cout << neighbor << " ";
       }
       cout << endl;
    }
}

//part 3

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
