class Solution(object):
    def removeDigit(self, number, digit):
        lt = []
        for i in range(len(number)):
            if number[i]==digit:
                st = number[:i]+number[i+1:]
                lt.append(st)
        
        return max(lt)

        
