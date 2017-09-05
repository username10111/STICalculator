#include <iostream>
#include <cmath>

//Declare a Function for Setting the Number of Decimal Places in Printed Text
double decimal_place(double x, int n);

//Declare Mathematical Functions that will be used to calculate "Depth" & "Moment"
double depth_of_compression_block(double area_of_steel, double strength_of_steel, double strength_of_concrete, double width);

double distance_to_neutral_axis(double a);

double tensile_strain(double height, double c);

double capacity_reduction_factor(double epsilon);

double usable_design_moment(double phi, double area_of_steel, double strength_of_steel, double height, double a);