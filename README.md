# Computer-Graphics
Bresenham's Line Generation Algorithm
=====================================

The idea of Bresenham's algorithm is to avoid floating point multiplication and addition to compute mx + c, 
and then computing round value of (mx + c) in every step. In Bresenham's algorithm, 
we move across the x-axis in unit intervals.


1. We always increase x by 1, and we choose about next y, whether we need to go to y+1 or remain on y. 
2. In other words, from any position (Xk, Yk) we need to choose between (Xk + 1, Yk) and (Xk + 1, Yk + 1).
3. We would like to pick the y value (among Yk + 1 and Yk) corresponding to a point that is closer to the original line.


This is an implementation of Bresenham's Line Generation Algorithm. This algorithm is used to draw a straight line between two points by using an efficient calculation method with integer values. It computes pixel coordinates and provides a faster and more efficient way of generating lines.

How It Works
------------

Bresenham's line generation algorithm uses an approximate approach to find a line between two points. As it progresses from the starting point to the target point, it updates the pixel coordinates using horizontal and vertical increments (deltaX and deltaY).

The basic steps of the algorithm are as follows:

1.  Take the starting point (x1, y1) and the target point (x2, y2).
2.  Calculate the values of Δx and Δy: Δx = x2 - x1 and Δy = y2 - y1.
3.  Determine the increment of pixel coordinates: x increment = ±1 (depending on whether Δx is positive or negative) and y increment = ±1 (depending on whether Δy is positive or negative).
4.  Calculate the slope factor: m = Δy / Δx.
5.  Set the coordinates of the starting point as (x, y).
6.  Iterate based on Δx:
    *   Update the coordinates of the next pixel as (x + x increment, y).
    *   Calculate the error: error = error + |m|.
    *   If error ≥ 0, update the y coordinate as well: y = y + y increment and error = error - 1.
7.  Complete the loop, and the line generation process is finished.

Example Usage with Python
-------------

    
        # Example of drawing a line using Bresenham's line generation algorithm between (0, 0) and (5, 8) points
    
        from bresenham import draw_line
    
        x1, y1 = 0, 0
        x2, y2 = 5, 8
    
        # Calculate the line
        pixels = draw_line(x1, y1, x2, y2)
    
        # Print the output
        for pixel in pixels:
            print(pixel)
      

Development
-----------

This project provides a module that includes Bresenham's line generation algorithm. If you want to customize the algorithm further or use it in a different program, you can examine and modify the \`bresenham.py\` file as needed.

Contributing
------------

Any contributions and feedback are welcome. If you wish to improve the algorithm or fix any issues, please submit a Pull Request. For new suggestions or bug reports, you can open an Issue.

License
-------

This project is licensed under the MIT License. For more information, please see the \`LICENSE\` file.
