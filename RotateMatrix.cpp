#include<vector>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
void rotateMatrix(vector<vector<int>> &arr, int n, int m)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for (int i=0;i<n;i++) {
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Given Matrix:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    rotateMatrix(arr, 3, 3);
    cout << "Rotated Image:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
