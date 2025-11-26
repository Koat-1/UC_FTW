""" la version en utilisant les chaine de caractere .
class Solution:
    def isPalindrome(self, x: int) -> bool:
        chaine1 = ''
        for c in (str(x))[::-1]:
            chaine1 += c
        return chaine1 == str(x)  
"""

""" la version sans uttiliser les chaines de caractere """
class Solution:
    def isPalindrome(self, x: int) -> bool:
        n = x
        res2 = 0
        while x > 0 :
            res1 = x % 10
            res2 = res2 * 10 + res1
            x = x // 10
        return res2 == n 