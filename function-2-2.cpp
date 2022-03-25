int maximum_sum(int *nums,int length) {
    if (length < 1) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (*(nums+i) < 0) {
            return 0;
        }
    }

    

}