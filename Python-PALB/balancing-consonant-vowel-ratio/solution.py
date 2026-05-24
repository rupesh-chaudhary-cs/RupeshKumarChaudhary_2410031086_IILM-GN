class Solution:
    
    def countBalanced(self, arr):
        
        vowels = set("aeiou")
        
        prefix = 0
        freq = {0: 1}
        ans = 0
        
        for s in arr:
            
            v = 0
            c = 0
            
            for ch in s:
                
                if ch in vowels:
                    v += 1
                else:
                    c += 1
            
            prefix += (v - c)
            
            ans += freq.get(prefix, 0)
            
            freq[prefix] = freq.get(prefix, 0) + 1
        
        return ans
