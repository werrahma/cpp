#include <iostream>
#include <vector>

void merge(std::vector<std::pair<int, int> >& A, int p, int q, int r) {
        int n1 = q - p + 1;
        int n2 = r - q;
        std::vector<std::pair<int, int> > LA(A.begin() + p, A.begin() + q + 1);
        std::vector<std::pair<int, int> > RA(A.begin() + q + 1, A.begin() + r + 1);
        // std::Cout << 
        int RIDX = 0;
        int LIDX = 0;
        for (int i = p; i <= r; i++) {
            if (RIDX == n2) {
                A[i] = LA[LIDX];
                LIDX++;
            } else if (LIDX == n1) {
                A[i] = RA[RIDX];
                RIDX++;
            } else if (RA[RIDX].first > LA[LIDX].first) {
                A[i] = LA[LIDX];
                LIDX++;
            } else {
                A[i] = RA[RIDX];
                RIDX++;
            }
        }
    }


void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();

    std::cout << "Original array: ";
    for (int num : arr)
        std::cout << num << " ";
    std::cout << "siiize:   " << n -1 << std::endl;
    mergeSort(arr, 0, n - 1);

    std::cout << "\nSorted array: ";
    for (int num : arr)
        std::cout << num << " ";

    return 0;
}
