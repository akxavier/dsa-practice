#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> acmTeam(vector<string> topic) {
    int n = topic.size();
    int m = topic[0].size();
    vector<vector<int>> data;
    
    for(int i = 0; i < n - 1; i++) {
        vector<int> pairData;
        
        for(int j = i + 1; j < n; j++) {
            int count = 0;
            
            for(int k = 0; k < m; k++) {
                if(topic[i][k] == '0' && topic[j][k] == '0')
                    continue;
                else
                    count++;
            }
            
            pairData.push_back(count);
        }
        data.push_back(pairData);
    }
    
    int max = 0, maxCount = 0;
    for(int i = 0; i < n - 1; i++) {
        int p = data[i].size();
        for(int j = 0; j < p; j++) {
            if(data[i][j] > max) {
                max = data[i][j];
                maxCount = 1;
            }
            else if(data[i][j] == max)
                maxCount++;
        }
    }
    
    vector<int> result = {max, maxCount};
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    getchar();
    vector<string> topic;
    for(int i = 0; i < n; i++) {
        string attendee;
        cin >> attendee;
        topic.push_back(attendee);
    }
    
    vector<int> result = acmTeam(topic);
    for(int &x : result) 
        cout << x << endl;
}
