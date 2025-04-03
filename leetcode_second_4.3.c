int mySqrt(int x) {
    if (x == 0) return 0;
    if (x == 1 || x == 2 || x == 3) return 1;
    if (x == 4) return 2;

    int left = 1;
    int right = x / 2;
    int result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long square = (long long)mid * mid; // 使用 long long 防止溢出

        if (square == x) {
            return mid;
        } else if (square < x) {
            result = mid; // 更新结果为当前满足条件的最大值
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}
