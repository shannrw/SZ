/**
 *  @file sz_float.h
 *  @author Sheng Di
 *  @date July, 2017
 *  @brief Header file for the sz_float.c.
 *  (C) 2016 by Mathematics and Computer Science (MCS), Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#ifndef _SZ_Float_PWR_H
#define _SZ_Float_PWR_H

#ifdef __cplusplus
extern "C" {
#endif

void compute_segment_precisions_float_1D(float *oriData, size_t dataLength, float* pwrErrBound, unsigned char* pwrErrBoundBytes, double globalPrecision);
unsigned int optimize_intervals_float_1D_pwr(float *oriData, size_t dataLength, float* pwrErrBound);

void compute_segment_precisions_float_2D(float *oriData, float* pwrErrBound, 
size_t r1, size_t r2, size_t R2, size_t edgeSize, unsigned char* pwrErrBoundBytes, float Min, float Max, double globalPrecision);

unsigned int optimize_intervals_float_2D_pwr(float *oriData, size_t r1, size_t r2, size_t R2, size_t edgeSize, float* pwrErrBound); 

void compute_segment_precisions_float_3D(float *oriData, float* pwrErrBound, 
size_t r1, size_t r2, size_t r3, size_t R2, size_t R3, size_t edgeSize, unsigned char* pwrErrBoundBytes, float Min, float Max, double globalPrecision);

unsigned int optimize_intervals_float_3D_pwr(float *oriData, size_t r1, size_t r2, size_t r3, size_t R2, size_t R3, size_t edgeSize, float* pwrErrBound);

void SZ_compress_args_float_NoCkRngeNoGzip_1D_pwr(unsigned char** newByteData, float *oriData, double globalPrecision, size_t dataLength, size_t *outSize, float min, float max);

void SZ_compress_args_float_NoCkRngeNoGzip_2D_pwr(unsigned char** newByteData, float *oriData, double globalPrecision, size_t r1, size_t r2, 
size_t *outSize, float min, float max);

void SZ_compress_args_float_NoCkRngeNoGzip_3D_pwr(unsigned char** newByteData, float *oriData, double globalPrecision, size_t r1, size_t r2, 
size_t r3, size_t *outSize, float min, float max);


#ifdef __cplusplus
}
#endif

#endif /* ----- #ifndef _SZ_Float_PWR_H  ----- */

