class Solution {
public:
    int *findTwoElement(int *arr, int n) {
        int* res = new int[2];
        for(int i = 0; i < n; i++) {
            while(arr[i] != i+1 && arr[arr[i]-1] != arr[i]) {
                int j = arr[i] - 1;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        for(int i = 0; i < n; i++) {
            if(arr[i] != i+1) {
                res[0] = arr[i];
                res[1] = i+1;
                return res;
            }
        }
        return res;
    }
};