class Solution:
    def isHappy(self, n: int) -> bool:
        elt = []
        nouveau_nombre = str(n)
        while True:
            res = 0
            for elem in nouveau_nombre :
                res += int(elem)**2
            if res == 1 :
                return True
            if res in elt :
                return False
            elt.append(res)
            nouveau_nombre = str(res)