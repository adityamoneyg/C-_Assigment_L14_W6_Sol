#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]+10<<" ";
        }
        cout<<endl;
    }
}

//                                   2 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    int brr[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>brr[i][j];
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            arr[i][j] += brr[i][j];
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//                                     3 Solution

#include <iostream>
#include <vector>
using namespace std;
int sumSubmatrix(vector<vector<int>>& matrix, int l1, int r1, int l2, int r2) {
    int sum = 0;
    for (int i = l1; i <= l2; ++i) {
        for (int j = r1; j <= r2; ++j) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, -3, 4},
        {0, 0, -4, 2},
        {1, -1, 2, 3},
        {-4, -5, -7, 0}
    };
    int l1 = 1, r1 = 2, l2 = 3, r2 = 3;
    int result = sumSubmatrix(matrix, l1, r1, l2, r2);
    cout << "The sum of the submatrix from (" << l1 << ", " << r1 << ") to (" << l2 << ", " << r2 << ") is: " << result << endl;
    return 0;
}


//                                   4 Solution

#include<iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int maxEle = INT_MIN;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(arr[i][j]>maxEle) maxEle=arr[i][j] ;
        }
    }
    cout<< maxEle;
}

//                                   5 Solution

#include <iostream>
#include <vector>
#include<climits>
using namespace std;
int main() {
    int rows = 3;
    int cols = 4;
    int matrix[rows][cols] = {
        {1, 3, 5, 7},
        {3, 4, 7, 8},
        {1, 4, 12, 3}
    };
    int maxSum = INT_MIN;
    int maxRowIndex = -1;
    for (int i = 0; i < rows; ++i) {
        int currentSum = 0;
        for (int j = 0; j < cols; ++j) {
            currentSum += matrix[i][j];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxRowIndex = i;
        }
    }
    cout << "Row with the maximum sum is: " << (maxRowIndex + 1) << endl;
    return 0;
}

//                                   6 Solution

#include <iostream>
using namespace std;

void displayMiddleRowAndColumn(int arr[][5], int size) {
    int middleIndex = size / 2;
    for (int i = 0; i < size; ++i) {
        cout << arr[i][middleIndex] << " ";
    }
    cout << endl;
    for (int j = 0; j < size; ++j) {
        cout << arr[middleIndex][j] << " ";
    }
    cout << endl;
}
int main() {
    const int size = 5;
    int arr[size][size] = {
        {1, 2, 3, 4, 5},
        {3, 4, 5, 6, 7},
        {7, 6, 5, 4, 3},
        {8, 7, 6, 5, 4},
        {1, 2, 37, 8, 0}
    };
    displayMiddleRowAndColumn(arr, size);
    return 0;
}
