//
// Created by rony on 1/29/2024.
//

#include <stdio.h>

void goSouthEast(int lat, int lon)
{
    lat = lat - 1;
    lon = lon + 1;
}

int main()
{
    int latitude = - 1;
    int longitude = -64;

    goSouthEast(latitude, longitude);

    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

    return 0;
}