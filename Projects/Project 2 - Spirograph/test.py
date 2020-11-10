from spirograph import Spirograph as spirograph

# Create a new Spirograph toy with R = 500
my_spirograph = spirograph(500)         # initiate spirograph class

# Draw one curve
my_spirograph.setSmallCircle(85)        # small radius set to 85
my_spirograph.setPen(0.65, 'red')       # distance from center set to 0.65 and pen color set to red
my_spirograph.draw()                    # draw the spirograph!

# ...and then draw another on top of the first
my_spirograph.setSmallCircle(120)
my_spirograph.setPen(0.22, 'blue')
my_spirograph.draw()

# ...and then get a new sheet of paper
my_spirograph.clear()                   # clear the screen

# ...and draw another
my_spirograph.setSmallCircle(20)
my_spirograph.setPen(0.8, 'purple')
my_spirograph.draw()