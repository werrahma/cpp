#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int K = 1;  // Constant for insertion sort threshold

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Insertion sort implementation
void PmergeMe::insertionSort(vector<int>& A, int p, int q) {
    for (int i = p; i < q; ++i) {
        int tempVal = A[i + 1];
        int j = i + 1;
        while (j > p && A[j - 1] > tempVal) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = tempVal;
    }
}

// Merge function for merge sort
void PmergeMe::merge(vector<int>& A, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    vector<int> LA(n1), RA(n2);  // Use vectors instead of copying subarrays

    for (int i = 0; i < n1; ++i) {
        LA[i] = A[p + i];
    }
    for (int i = 0; i < n2; ++i) {
        RA[i] = A[q + 1 + i];
    }

    int RIDX = 0, LIDX = 0;
    for (int i = p; i < r + 1; ++i) {
        if (RIDX == n2) {
            A[i] = LA[LIDX];
            LIDX++;
        } else if (LIDX == n1) {
            A[i] = RA[RIDX];
            RIDX++;
        } else if (RA[RIDX] > LA[LIDX]) {
            A[i] = LA[LIDX];
            LIDX++;
        } else {
            A[i] = RA[RIDX];
            RIDX++;
        }
    }
    // for (int i = 0; i < A.size(); i++)
    // {
    //     std::cout << A[i] << " ";
    // }
    // std::cout << std::endl;
}

// Recursive merge sort implementation
void PmergeMe::sort(vector<int>& A, int p, int r) {
    if (r - p > K) {
        int q = (p + r) / 2;
        sort(A, p, q);
        sort(A, q + 1, r);
        merge(A, p, q, r);
    }
    else {
        insertionSort(A, p, r);  // Use insertion sort for small subarrays
    }
}

int main() {
    vector<int> A = {12, 11, 13, 5, 6, 7};
    sort(A, 0, A.size() - 1);

    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
