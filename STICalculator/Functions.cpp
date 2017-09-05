#include <iostream>
#include <cmath>

//Declare & Define a Function for Setting the Number of Decimal Places in Printed Text
double decimal_place(double x, int n)
{
	return round(x*pow(10, n)) / pow(10, n);
}

//Declare & Define Mathematical Functions that will be used to calculate "Depth" & "Moment"
double depth_of_compression_block(double area_of_steel, double strength_of_steel, double strength_of_concrete, double width)
{
	return area_of_steel*strength_of_steel / (0.85*strength_of_concrete*width);
}
double distance_to_neutral_axis(double a)
{
	return a / 0.85;
}
double tensile_strain(double height, double c)
{
	return 0.003*(height - c) / c;
}
double capacity_reduction_factor(double epsilon)
{
	double phi = 0.65 + (epsilon - 0.002)*(250 / 3);
	return phi >= 0.9 ? 0.9 : phi <= 0.65 ? 0.65 : phi;
}
double usable_design_moment(double phi, double area_of_steel, double strength_of_steel, double height, double a)
{
	return phi*area_of_steel*strength_of_steel*(height - (a / 2)) / 12;
}
