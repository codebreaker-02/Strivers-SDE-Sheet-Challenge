#include<vector>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int high = m*n - 1;
        int mid,element;
        cout<<endl;
        while(low<=high){
            mid = low + (high - low)/2;
            element = matrix[mid/n][mid%n];
            if(element == target)
                return true;
            else if(element > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
}
int main(){
    vector<vector<int>> matrix{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 0;
    cout<<endl<<"Element is"<<(searchMatrix(matrix, target)?" ":" not ")<<"present in matrix!";

    return 0;
}