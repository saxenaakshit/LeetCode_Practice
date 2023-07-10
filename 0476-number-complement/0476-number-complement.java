class Solution {
    public int findComplement(int num) {
        if(num==0){
            return 1;
        }
        var nBITS = (int)((Math.log(num)/Math.log(2))+1) ;
        var mask = (1<< nBITS) - 1;
        return  mask^num;
    }
}