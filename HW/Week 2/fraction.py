
class Fraction(object):
    """
    defines an immutable rational number
    """
    
    def __init__(self, num, denom):
        """
        Construct a rational number with a given numerator and denominator
        """
        self._num = num
        self._denom = denom
        
        
    def __add__(self, other):
        """
        Add two fraction instances
        """
        self._new_num = self._num*other._denom + self._denom*other._num
        self._new_denom = self._denom*other._denom
        return str(self._new_num) + '/' + str(self._new_denom)
    
    def __sub__(self, other):
        """
        Subtract two fraction instances
        """
        self._new_num = self._num*other._denom - self._denom*other._num
        self._new_denom = self._denom*other._denom
        return str(self._new_num) + '/' + str(self._new_denom)
        
    def __eq__(self, other):
        """
        Check if two fraction instances are equal
        """
        return self._num == other._num and self._denom == other._denom
        
    def __lt__(self, other):
        """
        Check if one fraction isntance is less than the other
        """
        return (float(self._num)/float(self._denom) < (float(other._num)/float(other._denom)))
        
    def __ne__(self, other):
        """
        Check if two fraction instances are not equal
        """
        return self._num != other._num and self._denom != other._denom
        
    def __le__(self, other):
        """
        Check if one fractions instance is less than or equal to the other
        """
        return self.__lt__(other) or self.__eq__(other)
        
    def __gt__(self, other):
        """
        Check if one fraction instance is greater than the other
        """
        return (float(self._num)/float(self._denom) > (float(other._num)/float(other._denom)))
        
    def __ge__(self, other):
        """
        Check if one fraction instance is greater than or equal to the other
        """
        return self.__gt__(other) or self.__eq__(other)
        
    def __float__(self):
        """
        Gets a floating point representation of a fraction instance, called by float()
        """
        return float(self._num)/float(self._denom)
        
    def __repr__(self):
        """
        Gets a string representation of the fraction instance, called by str()
        """
        return str(self._num) + '/' + str(self._denom)


