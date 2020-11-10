#==============================================================================
# Yoni Carver
# 718.704.8555
# 
# ECEC 301 - Advanced Programming for Engineers
# Prof. James A. Shackleford
#==============================================================================

import turtle
from math import sin, cos, radians
from fractions import gcd


class Spirograph(object):
    """ Draw a spirograph! """

    def __init__(self, R):
        """ create a new spirograph toy with outer radius R """

        self._window = turtle.Screen()      # create screen
        self._window.screensize(canvwidth=500, canvheight=500, bg='black')      # set window dimensions & bgcolor
        self._window.title("Yoni's Turtle") # title of window
        self._lloyd = turtle.Turtle()       # initiate Turtle (turtle's name is Lloyd!)
        self._lloyd.speed(0)                # set turtle speed
        self._lloyd.shape('turtle')         # display turtle icon
        self._R = int(R)                    # input: Radius (R)

    def setSmallCircle(self,r):
        """ set the radius of the small circle used to draw """

        self._r = int(r)                    # input: radius (r)

    def setPen(self, l, color):
        """ set the pen color and its distance from C """

        self._l = l                         # input: l (ratio of pen distance to center of smaller circle)

        self._lloyd.pu()                    # pick pen up

        self._lloyd.pencolor(color)         # input: pen color
        self._lloyd.pensize(2)              # set pen size

    def draw(self):
        """ draw a spirograph using the current small circle and pen settings """

        _gcd = gcd(self._r, self._R)                                    # find gcd of r and R (gcd not needed anywhere else in class so it is a local variable)
        self._k = float(self._r)/float(self._R)                         # ratio of r to R as a float
        R, k, l = self._R, self._k, self._l                             # assign variables
        for i in range(0, 360*(self._r/_gcd)):                          # for every angle in range period to complete one full spirograph...
            theta = radians(i)                                          # theta in radians
            self._Px = R*((1-k)*cos(theta) + l*k*cos((1-k)*theta/k))    # x location pen
            self._Py = R*((1-k)*sin(theta) - l*k*sin((1-k)*theta/k))    # y location of pen
            self._lloyd.setpos(self._Px, self._Py)                      # move Lloyd to x and y location
            self._lloyd.pd()                                            # put pen down & draw spirograph
        self._lloyd.hideturtle()                                        # hide Lloyd at the end of drawing

    def clear(self):
        """ reset the drawing surface """

        self._window.clearscreen()          # clear screen