#include<iostream>
#include<vector>
#include<string>
using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    int max = 0, len = word.size();
    for(int i = 0; i < len; i++) {
        int pos = (int)word[i] - 97;
        if(h[pos] > max)
            max = h[pos];
    }
    return (max * len);
}

int main() {
    int height;
    vector<int> h;
    string word;
    
    for(int i = 0; i < 26; i++) {
        cin >> height;
        h.push_back(height);
    }
    
    getchar();
    getline(cin, word);
    cout << designerPdfViewer(h, word);
}
