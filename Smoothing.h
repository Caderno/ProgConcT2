#ifndef _SMOOTHING_H_
#define _SMOOTHING_H_

typedef struct RGBstructure {
	int r;
	int g;
	int b;
} RGB;

typedef struct PPMstructure {
	char type[3];
	int width;
	int height;
	int maxVal;
	RGB **data;
} PPMImage;

void allocData (PPMImage *, char *, int, int, int);
void freeData (PPMImage *);
void readImage (PPMImage *, PPMImage *, char *);
void saveImage (PPMImage *, char *);
void colorFilter (PPMImage *, PPMImage *, int, int, int, int);

#endif