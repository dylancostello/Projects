// Assignment2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

void main()
{
	int shape;
	double area;
	double baseWidth;
	double verticalHeight;
	double sideLength;
	double topWidth;
	double radius;
	double radiusMajor;
	double radiusMinor;
	double angleRad;

	printf("Area Calculator \n");
	printf("Enter Choice: \n");
	printf("1 (Triangle) \n2 (Square) \n3 (Rectangle) \n4 (Parallelogram) \n5 (Trapezoid) \n6 (Circle) \n7 (Ellipse) \n8 (Sector) \n");
	printf("Choice: ");
	scanf_s("%d",&shape);

	switch (shape){

	case 1:
		printf("Enter Base Width: ");
		scanf_s("%lf", &baseWidth);
		printf("Enter Vertical Height: ");
		scanf_s("%lf", &verticalHeight);
		area = 0.5 * baseWidth * verticalHeight;
		printf("Area = %.2f\n", area);
		break;
	
	case 2:
		printf("Enter Length of Side: ");
		scanf_s("%lf", &sideLength);
		area = sideLength * sideLength;
		printf("Area = %.2f\n", area);
		break;

	case 3:
		printf("Enter Width: ");
		scanf_s("%lf", &baseWidth);
		printf("Enter Height: ");
		scanf_s("%lf", &verticalHeight);
		area = baseWidth * verticalHeight;
		printf("Area = %.2f\n", area);
		break;

	case 4:
		printf("Enter Base Width: ");
		scanf_s("%lf", &baseWidth);
		printf("Enter Vertical Height: ");
		scanf_s("%lf", &verticalHeight);
		area = baseWidth * verticalHeight;
		printf("Area = %.2f\n", area);
		break;

	case 5:
		printf("Enter Base Width: ");
		scanf_s("%lf", &baseWidth);
		printf("Enter Top Width: ");
		scanf_s("%lf", &topWidth);
		printf("Enter Vertical Height: ");
		scanf_s("%lf", &verticalHeight);
		area = 0.5*(baseWidth + topWidth) * verticalHeight;
		printf("Area = %.2f\n", area);
		break;

	case 6:
		printf("Enter Radius: ");
		scanf_s("%lf", &radius);
		area = 3.14*(radius*radius);
		printf("Area = %.2f\n", area);
		break;

	case 7:
		printf("Enter Major Radius: ");
		scanf_s("%lf", &radiusMajor);
		printf("Enter Minor Radius: ");
		scanf_s("%lf", &radiusMinor);
		area = 3.14*radiusMinor*radiusMajor;
		printf("Area = %.2f\n", area);
		break;

	case 8:
		printf("Enter Radius: ");
		scanf_s("%lf", &radius);
		printf("Enter Angle in Radians: ");
		scanf_s("%lf", &angleRad);
		area = 0.5*(radius*radius)*angleRad;
		printf("Area = %.2f\n", area);
		break;

	}
}