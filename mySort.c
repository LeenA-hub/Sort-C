void mySort(int d[], unsigned int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (d[j] < d[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = d[min];
            d[min] = d[i];
            d[i] = temp;
        }
    }
}
