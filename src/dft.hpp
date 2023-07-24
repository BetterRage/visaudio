#ifndef __DFT_H__
#define __DFT_H__

#include <stdint.h>
#include <stddef.h>
#include <math.h>
#include <string.h>


void dft(float* re,float* im,uint16_t* data,size_t n);
void mag(float* re,float* im,float* mag,size_t n,float* maxmag);


#endif // __DFT_H__