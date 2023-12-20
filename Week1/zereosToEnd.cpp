void pushZerosToEnd(int arr[], int n) {
    int nonZero = 0; // Track the position to place the next non-zero element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            if (i != nonZero) {
                swap(arr[i], arr[nonZero]); // Swap non-zero element to its correct position
            }
            nonZero++; // Move the position for the next non-zero element
        }
    }
}
