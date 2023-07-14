#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    for (int raw = 0; raw < width; raw++)
    {
        for (int column = 0; column < height; column++)
        {
            if (image[column][raw].rgbtBlue == 0 && image[column][raw].rgbtGreen == 0 && image[column][raw].rgbtRed == 0)
            {
                image[column][raw].rgbtBlue = 127;
                image[column][raw].rgbtGreen = 0;
                image[column][raw].rgbtRed = 255;
            }
        }
    }
}
