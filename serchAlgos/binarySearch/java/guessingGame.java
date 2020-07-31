//binary search through range 1-n
public class guessingGame extends GuessGame {
    public int guessNumber(int n) {
        return bSearch(1, n);
        
    }
    private int bSearch(int l, int r){
        
        for(;;){
            int m = l + (r-l) /2;
            if(guess(m) == 0) return m;
            if(guess(m)>0)
                l = m+1;
            else
                r = m-1;
        }
    }
}