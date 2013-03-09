BuffonNeedle
============

In this little project the number π will be approximated by performing a Monte Carlo simulation of the Buffon needle.

Information about Buffon's needle from wikipedia:
-------------------------------------------------

In mathematics, Buffon's needle problem is a question first posed in the 18th century by Georges-Louis Leclerc, Comte de Buffon:

Suppose we have a floor made of parallel strips of wood, each the same width, and we drop a needle onto the floor. What is the probability that the needle will lie across a line between two strips?

Buffon's needle was the earliest problem in geometric probability to be solved; it can be solved using integral geometry. The solution, in the case where the needle length is not greater than the width of the strips, can be used to design a Monte Carlo-style method for approximating the number π.

How I handle the problem
-------------------------

The problem becomes very simple if one assume that the needle is smaller then the distance d between the parallel lines. Due to this assumption the needle can only hit one line at the time. This is the problem tackled in this little project.

The problem is invariant by a translation in the same direction as the parallel lines (y-axis). The only two variables which determines if the needle hits/misses the line are:
- The angle under which the needle is rotated.
- The center of the needle projected on the axis perpendicular on the parallel lines (x-axis)

One virtual line perpendicular to the y-axis is placed at x=0. The falling needle is simulated by a random x position between -d/2 and d/2. This position represent the middle of the needle. A second random number represent the angle of the needle. With this both random numbers the x-positions of the edges of needle can be calculated. If the product of these positions are negative then needle hits the line. If the product is positive, the needle misses the line.
