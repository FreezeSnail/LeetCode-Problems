//using binary search to aprox int sqrt

class sqrtBinarySearch {
    public int mySqrt(int x) {
        if( x == 0 || x == 1) return x;
        
        //binary search based solution
        int l = 0;
        int r = x;
        int mid = (l+r) /2;
        
        for(;;){
            if(mid > x / mid)
                r = mid-1;
            else{
                l = mid+1;
            
                
                if (mid + 1 > x/(mid + 1))
                    return mid;
            }
            mid = (l+r)/2;
        }
    }
}