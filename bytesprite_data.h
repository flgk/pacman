

#ifndef __BYTESPRITE_DATA__
#define __BYTESPRITE_DATA__


#ifndef __BYTESPRITE_H__
# include "bytesprite.h"
#endif

byte __pacdude_data[] =
    {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,
0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,
0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,
0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,
0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,
0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,
0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,
0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,
0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,
0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,
0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    };


bytesprite_t pacdude = 
{
    -1,
    16,
    16,
    { 1.0, 1.0, 0.0 },
    NULL,
    __pacdude_data
};

byte __tl_corner_data[] =
    {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,
0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,
0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,0,1,1,1,1,1,1,
0,0,0,0,0,1,1,0,0,1,1,1,1,1,1,1,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
    };

bytesprite_t tl_corner = 
{
    -1,
    16,
    16,
    { 0.0, 0.0, 1.0 },
    NULL,
    __tl_corner_data
};

byte __tr_corner_data[] =
    {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,
1,1,1,1,1,1,0,0,0,1,1,0,0,0,0,0,
1,1,1,1,1,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
    };

bytesprite_t tr_corner = 
{
    -1,
    16,
    16,
    { 0.0, 0.0, 1.0 },
    NULL,
    __tr_corner_data
};


byte __bl_corner_data[] =
    {
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,1,1,1,1,1,
0,0,0,0,0,1,1,0,0,0,1,1,1,1,1,1,
0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    };

bytesprite_t bl_corner = 
{
    -1,
    16,
    16,
    { 0.0, 0.0, 1.0 },
    NULL,
    __bl_corner_data
};

byte __br_corner_data[] = 
    {
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
1,1,1,1,1,1,1,0,0,1,1,0,0,0,0,0,
1,1,1,1,1,1,0,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,
1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    };



bytesprite_t br_corner = 
{
    -1,
    16,
    16,
    { 0.0, 0.0, 1.0 },
    NULL,
    __br_corner_data
};

byte __v_wall_data[] =
    {
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,
    };

bytesprite_t v_wall = 
{
    -1,
    16,
    16,
    { 0.0, 0.0, 1.0 },
    NULL,
    __v_wall_data
};

byte __h_wall_data[] =
    {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    };

bytesprite_t h_wall = 
{
    -1,
    16,
    16,
    { 0.0, 0.0, 1.0 },
    NULL,
    __h_wall_data
};


spritelist_t spritelist[] = 
{
{ "pacdude", &pacdude, 16 },
{ "tl_corner", &tl_corner, 16 },
{ "tr_corner", &tr_corner, 16 },
{ "bl_corner", &bl_corner, 16 },
{ "br_corner", &br_corner, 16 },
{ "v_wall", &v_wall, 16 },
{ "h_wall", &h_wall, 16 }
};

int totalsprites = (sizeof(spritelist) / sizeof(spritelist[0]));

#endif