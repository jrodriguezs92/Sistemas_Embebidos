/**
 * Library with basic math operations.
 * Header file
 * 
 * Instituto Tecnológico de Costa Rica
 * Computer Engineering
 * CE5303: Embedded Systems Introduction
 * 
 * Author: Jeremy Rodriguez Solorzano
 * Date: 01/08/2019
 */

#ifndef _MYMATH_H
#define _MYMATH_H

#include <stdio.h>
#include <math.h>

/**
 * Return the sum operation between "a" and "b"
 */
double sum(double, double);

/**
 * Return the substraction operation between "a" and "b"
 */
double subs(double, double);

/**
 * Return the multiplication operation between "a" and "b"
 */
double mult(double, double);

/**
 * Return the result of divide "a" by "b"
 */
double div(double, double);

/**
 * Return the result of suare root of an "a" number
 */
double sqroot(double);

#endif