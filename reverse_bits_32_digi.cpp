/*
Input:
4
0
12
6
4

Output:
0
805306368
1610612736
536870912
*/

long reverseBits(long n){
    // 'bits' array to store the bits representation of 'n'.
    vector<int> bits(32, 0);

    // Preparing the bits array.
    for(int i=0;i<32;i++){
        // If the ith bit is set.
        if ((n & (long)1 << i) > 0){
            bits[i] = 1;
        }
    }
    for(int i=0;i<16;i++){
        // Swapping the left and rightmost bits.
        swap(bits[i],bits[31-i]);
    }

    // 'ans' will store the value for the reversed bits representation.
    long ans = 0;

    for(int i=0;i<32;i++){
        // If the i'th bit is set.
        if (bits[i] == 1){
            ans += (long)1 << i;
        }
    }
    return ans;
}