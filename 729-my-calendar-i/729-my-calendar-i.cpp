class MyCalendar {
public:
    map<int,int> m ;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto i:m) {
           if(i.first<end  && start<i.second){
               return false; 
           }  
             
        }
        m.insert({start,end}) ;
        return true ;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */