class Solution(object):
    def average(self, salary):
        """
        :type salary: List[int]
        :rtype: float
        """

        salary.sort()
        salary=salary[1:-1]
        return float(sum(salary))/len(salary)
        
