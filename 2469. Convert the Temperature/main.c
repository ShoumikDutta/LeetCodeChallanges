/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    *returnSize=2; // return size is basically leting the caller function know the size of array which is returnrd by this function
    double* result=malloc(2*sizeof(double));
    result[0]=celsius + 273.15;
    result[1]=celsius * 1.80 + 32.00;
    return result;
}
