#include <stdio.h>

void spiralPrint(int m, int n, int arr[m][n])
{
  int i, k = 0, l = 0;
  while (k < m && l < n) {
    /* Print the first row from the remaining rows */
    for (i = l; i < n; i++) {
      printf("%d ", arr[k][i]);
    }
    k++;

    /* Print the last column from the remaining columns */
    for (i = k; i < m; i++) {
      printf("%d ", arr[i][n - 1]);
    }
    n--;

    /* Print the last row from the remaining rows */
    if (k < m) {
      for (i = n - 1; i >= l; i--) {
        printf("%d ", arr[m - 1][i]);
      }
      m--;
    }

    /* Print the first column from the remaining columns */
    if (l < n) {
      for (i = m - 1; i >= k; i--) {
        printf("%d ", arr[i][l]);
      }
      l++;
    }
  }
}

int main()
{
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int m = 3, n = 3;

  spiralPrint(m, n, arr);

  return 0;
}
