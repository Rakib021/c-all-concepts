#include <iostream>
#include <vector>

void merge(std::vector<int> &arr, std::vector<int> left, std::vector<int> right) {
    int i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            arr[k++] = left[i++];
        }
        else if (left[i] > right[j]) {
            arr[k++] = right[j++];
        }
        else {
            arr[k++] = left[i++];
            j++;
        }
    }
    while (i < left.size()) {
        arr[k++] = left[i++];
    }
    while (j < right.size()) {
        arr[k++] = right[j++];
    }
}

void mergeSort(std::vector<int> &arr) {
    if (arr.size() < 2) {
        return;
    }
    int mid = arr.size() / 2;
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());
    mergeSort(left);
    mergeSort(right);
    merge(arr, left, right);
}

void removeDuplicatesAndSort(std::vector<int> &arr) {
    mergeSort(arr);
    int j = 0;
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[arr.size() - 1];
    arr.resize(j);
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
	int n;
	std ::cin>>n;

    std::vector<int> arr(n);
	for(int i=0;i<n;i++){
		std:: cin>>arr[i];
	}
    removeDuplicatesAndSort(arr);
    return 0;
}
