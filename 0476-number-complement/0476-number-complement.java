class Solution {
    public int findComplement(int num) {
        var nBITS = (int)Math.floor((Math.log(num)/Math.log(2))+1) ;
        var mask = (1<< nBITS) - 1;
        return ~num & mask;
    }
}