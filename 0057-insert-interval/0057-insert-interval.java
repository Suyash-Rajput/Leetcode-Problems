class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        
            
    List<int[]> s = new ArrayList() ;
        for(int[] i:intervals){
            if(i[1]<newInterval[0]) s.add(i) ;
            else if(newInterval[1]<i[0]) {
                s.add(newInterval) ;
                newInterval =i;
            }
            else{
                newInterval[0] =Math.min(newInterval[0],i[0]) ;
                newInterval[1]= Math.max(newInterval[1],i[1]) ;
            }
            
        } 
        
        s.add(newInterval) ;
        return s.toArray(new int[s.size()][]) ;
    }
}