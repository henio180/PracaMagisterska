/**
 * @file FT800api.h
 * @author Daniel Sienkiewicz
 * @date 28 February 2016
 * @brief File containing declarations of all API functions for VM800.
 */

#ifndef _FT800api_H_
#define _FT800api_H_
#include "FT800.h"
#include "simulator.h"
#import <Arduino.h>

extern unsigned int cmdOffset;
extern unsigned int cmdBufferRd;
extern unsigned int cmdBufferWr;
extern struct car *audi;

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void initScreen();

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void mainScreen();

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void smartMirrorScreen();

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void spinner(int16_t x, int16_t y, uint16_t style, uint16_t scale);

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void button(int16_t x, int16_t y, int16_t w, int16_t h, int16_t font, uint16_t options, const char* str);

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void text( int16_t x,  int16_t y, int16_t font, uint16_t options, const char* str);

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void line(unsigned long color, unsigned long line_x1, unsigned long line_y1, unsigned long line_x2, unsigned long line_y2, unsigned long width);

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void dot(unsigned long color, unsigned int point_size, unsigned long point_x, unsigned long point_y);

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void start(unsigned long color);

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void number( int16_t x,  int16_t y, int16_t font, uint16_t options, int32_t value);

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void show();

/**
******************************************************************************
* @details                            *
* @param                            *
* @return                       *
******************************************************************************
*/
void autko();
#endif