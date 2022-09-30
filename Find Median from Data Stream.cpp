class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> maxHeap ;
    priority_queue <int, vector<int>, greater<int> > minHeap ;
    
//     MedianFinder() 
//     {
//         MedianFinder MF; 
//     }
    
    void addNum(int x) 
    {
        if(maxHeap.empty() || maxHeap.top()>=x)
        {
            maxHeap.push(x) ;
        }
        else
        {
            minHeap.push(x) ;
        }
        
   
        if(maxHeap.size() > minHeap.size()+1)
        {
            minHeap.push(maxHeap.top()) ;
            maxHeap.pop() ;
        }
        else if(maxHeap.size() < minHeap.size())
        {
            maxHeap.push(minHeap.top()); 
            minHeap.pop() ;
        }
    }
    
    double findMedian() {
        if(maxHeap.size()==minHeap.size())
        {
            return  (maxHeap.top() + minHeap.top())/2.0   ;
        }
        else
        {
            return maxHeap.top() ;
        }
    }
};
