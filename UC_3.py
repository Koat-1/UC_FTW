class Solution:
    def romanToInt(self, s: str) -> int:
        res1 = 0
        res2 = 0
        valeurs = {'I' : 1, 'V' : 5, 'X' : 10, 'L' : 50, 'C' : 100, 'D' : 500, 'M' : 1000}
        for c in s[::-1] :
            valeur = valeurs[c]
            if valeur < res2 :
                res1 -= valeur
            else :
                res1 += valeur
            res2 = valeur
        return res1