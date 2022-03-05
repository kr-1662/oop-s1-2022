 int maximum(int array[], int n) {
     int max_num = array[0];
     for (int i = 0; i < n; i++) {
             if (max_num < array[i]) {
             max_num = array[i];
         }
     }
     if (n < 1) {
         max_num = 0;
     }
     return max_num;
     }