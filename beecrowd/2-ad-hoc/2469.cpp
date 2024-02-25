#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    if (N > 0) 
    {
        vector<int> keys(N);
        for (int i = 0; i < N; ++i) 
        {
            cin >> keys[i];
        }

        unordered_map<int, int> times;
        int highscore = 0;
        for (int key : keys) 
        {
            times[key]++;
            highscore = max(highscore, times[key]);
        }

        vector<int> candidates;
        for (int key : keys) 
        {
            if (times[key] == highscore) 
            {
                candidates.push_back(key);
            }
        }

        int bigger = candidates[0];
        for (int candidate : candidates) 
        {
            if (candidate > bigger) 
            {
                bigger = candidate;
            }
        }
        
        cout << bigger << endl;
    }

    return 0;
}