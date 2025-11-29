class Solution:
    def addBinary(self, a: str, b: str) -> str:
        elt = False
        res = ''
        if len(a) <= len(b) :
            res1 = a
            res2 = b
        else :
            res1 = b
            res2 = a
        for i in range(1, (len(res1) + 1)):
            if (res1[-i] == '0' and res2[-i] == '1' or res1[-i] == '1' and res2[-i] == '0')  and elt == True :
                res = '0' + res
            elif (res1[-i] == '0' and res2[-i] == '0') and elt == True :
                res = '1' + res
                elt = False
            elif res1[-i] == '1' and res2[-i] == '1' and elt == True :
                res = '1' + res
            elif res1[-i] == '1' and res2[-i] == '1' :
                res = '0' + res
                elt = True
            elif res1[-i] == '0' and res2[-i] == '1' or res1[-i] == '1' and res2[-i] == '0' :
                res = '1' + res
                elt = False
            elif res1[-i] == '0' and res2[-i] == '0' :
                res = '0' + res
                elt = False
        if len(res1) != len(res2) :
            a = len(res2) - len(res1)
            res2 = res2[::-1]
            res2 = res2[a:]
            for i in res2 :
                if elt == True and i == '1' :
                    res = '0' + res
                else :
                    res = i + res
                    elt = False
        if elt == True :
            res = '1' + res
        return res