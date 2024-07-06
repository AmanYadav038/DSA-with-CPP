class Solution {
public:
    int passThePillow(int n, int time) {
        int remTime=time%(n-1);
        int cycles=time/(n-1);
        if(cycles%2==0){
            return 1+remTime;
        }
        return n-remTime;
        
    }
};