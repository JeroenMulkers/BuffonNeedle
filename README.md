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

The problem appears very simple when assuming the needle to be smaller than the distance d between the parallel lines. Due to this assumption, the needle can only hit a single line per fall. This is the problem tackled in this little project.

The problem remains invariant when a translation in the direction of the parallel lines (y-axis) occurs. Only two variables determine whether or not the needle hits the line:
- The angle under which the needle is rotated.
- The center of the needle projected on the axis perpendicular to the parallel lines (x-axis).

One virtual line, perpendicular to the y-axis, is placed at x=0. The falling needle is simulated by a random position x between –d/2 and d/2. This position represents the middle of the needle. A second random number represents the angle of the needle. These two random numbers allow the x-positions of the edges of the needle to be calculated. If the product of these positions is negative, the needle hits the line. If the product is positive, the needle misses the line.
