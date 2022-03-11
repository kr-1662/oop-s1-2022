int identity(int array[10][10]) {
    int num = 1;
    for (int i=0;i<10;i++) {
        for (int j=0;j<10;j++) {
            if (array[i][j] != 1 && array[i][j] != 0) {
                num = 0;
                break;
            }
        } 
    }
    return num;
}