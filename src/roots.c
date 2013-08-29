/*
 * roots.c
 * This file is part of <library name>
 *
 * Copyright (C) 2013 - joshua
 *
 * <library name> is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * <library name> is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with <library name>. If not, see <http://www.gnu.org/licenses/>.
 */


#include <stdio.h>
#include <math.h>

main()
{
float  a,b,c,r1,r2;
scanf("%f%f%f", &a, &b, &c);
r1= b*b-4*a*c;
r2= (-b - sqrt(b*b-4*a*c))/(2*a);
printf("root1 = %f, root2 = %f \n", r1,r2);
}
