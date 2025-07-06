class TimeMap(object):

    def __init__(self):
        self.map={}
        

    def set(self, key, value, timestamp):
        """
        :type key: str
        :type value: str
        :type timestamp: int
        :rtype: None
        """
        if not key in self.map:
            self.map[key]=[]
        self.map[key].append((timestamp,value))
        

    def get(self, key, timestamp):
        """
        :type key: str
        :type timestamp: int
        :rtype: str
        """
        if not key in self.map:
            return ""
        item=self.map[key]
        res=""
        l,r=0,len(item)-1
        while l<=r:
            mid=(l+r)//2
            if item[mid][0]<=timestamp:
                res=item[mid][1]
                l=mid+1
            else:
                r=mid-1
        return res
        


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)