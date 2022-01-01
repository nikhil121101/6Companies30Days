class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) {
        
        if(max(l1[0], l2[0]) > min(r1[0], r2[0])) // x cordinate not overlaps
            return false;
            
        if(max(r1[1], r2[1]) > min(l1[1], l2[1])) // y cordinate not overlaps
            return false;
            
        return true;
    }
};
