class Solution:
    def maxSubseq(self, s, k):

        remove = k
        stack = []

        for ch in s:

            while stack and remove > 0 and stack[-1] < ch:
                stack.pop()
                remove -= 1

            stack.append(ch)

        while remove > 0:
            stack.pop()
            remove -= 1

        return "".join(stack)
