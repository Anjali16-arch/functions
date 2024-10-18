#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to calculate the area of a circle
float areaOfCircle(float radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
float areaOfRectangle(float length, float width) {
    return length * width;
}

// Function to calculate the area of a triangle
float areaOfTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    float radius, length, width, base, height, area;

    do {
        printf("\nMenu:\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = areaOfCircle(radius);
                printf("Area of Circle: %.2f\n", area);
                break;

            case 2:
                printf("Enter the length and width of the rectangle: ");
                scanf("%f %f", &length, &width);
                area = areaOfRectangle(length, width);
                printf("Area of Rectangle: %.2f\n", area);
                break;

            case 3:
                printf("Enter the base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                area = areaOfTriangle(base, height);
                printf("Area of Triangle: %.2f\n", area);
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
