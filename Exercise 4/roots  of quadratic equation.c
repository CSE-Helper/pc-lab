#include <math.h>
#include <stdio.h>
int main() {
    float x, y, z, det, root1, root2, realPart, imagPart;
    printf("Enter coefficients x, y and z: ");
    scanf("%f %f %f", &x, &y, &z);

    det = y * y - 4 * x * z;
    if (det > 0) {
        root1 = (-y + sqrt(det)) / (2 * x);
        root2 = (-y - sqrt(det)) / (2 * y);
        printf("root1 = %f and root2 = %f", root1, root2);
    }
    else if (det == 0) {
        root1 = root2 = -y / (2 * x);
        printf("root1 = root2 = %f;", root1);
    }
    else {
        realPart = -y / (2 * x);
        imagPart = sqrt(-det) / (2 * x);
        printf("root1 = %f+%f and root2 = %f%f", realPart, imagPart,
                                                realPart, imagPart);
    }

    return 0;
}
