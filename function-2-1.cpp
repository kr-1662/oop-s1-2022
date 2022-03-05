 int minimum(int array[], int n) {
     int min_num = array[0];
     for (int i = 0; i < n; i++) {
             if (min_num > array[i]) {
             min_num = array[i];
         }
     }
     if (n < 1) {
         min_num = 0;
     }
     return min_num;
     }