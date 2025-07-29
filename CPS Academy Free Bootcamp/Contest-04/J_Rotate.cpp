#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> grid(N, vector<int>(N));

    // Input the grid
    for (int i = 0; i < N; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < N; ++j) {
            grid[i][j] = row[j] - '0';
        }
    }

    // Step 1: Store outer layer positions clockwise
    vector<pair<int, int>> outer;

    // Top row
    for (int j = 0; j < N; ++j)
        outer.emplace_back(0, j);

    // Right column (excluding first)
    for (int i = 1; i < N - 1; ++i)
        outer.emplace_back(i, N - 1);

    // Bottom row (reversed)
    for (int j = N - 1; j >= 0; --j)
        outer.emplace_back(N - 1, j);

    // Left column (excluding top and bottom)
    for (int i = N - 2; i >= 1; --i)
        outer.emplace_back(i, 0);

    // Step 2: Extract values and shift
    vector<int> vals;
    for (auto [x, y] : outer)
        vals.push_back(grid[x][y]);

    // Rotate clockwise by 1
    int last = vals.back();
    for (int i = vals.size() - 1; i > 0; --i)
        vals[i] = vals[i - 1];
    vals[0] = last;

    // Step 3: Place back into grid
    for (int i = 0; i < outer.size(); ++i) {
        auto [x, y] = outer[i];
        grid[x][y] = vals[i];
    }

    // Step 4: Output the grid
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << grid[i][j];
        cout << "\n";
    }

    return 0;
}
