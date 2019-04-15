#ifndef OPENPOSE_POSE_POSE_PARAMETERS_RENDER_HPP
#define OPENPOSE_POSE_POSE_PARAMETERS_RENDER_HPP

#include <openpose/core/common.hpp>
#include <openpose/pose/enumClasses.hpp>

namespace op
{
    // Rendering parameters
    const auto POSE_DEFAULT_ALPHA_KEYPOINT = 0.6f;
    const auto POSE_DEFAULT_ALPHA_HEAT_MAP = 0.7f;

    // Model-Dependent Parameters
    // CUDA-code Model-Dependent Parameters must be defined with #define
    // BODY_25
    #define POSE_BODY_25_PAIRS_RENDER_GPU \
        1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18,   14,19,19,20,14,21, 11,22,22,23,11,24
    #define POSE_BODY_25_SCALES_RENDER_GPU 1
    #define POSE_BODY_25_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        255.f,     0.f,     0.f, \
        255.f,    85.f,     0.f, \
        255.f,   170.f,     0.f, \
        255.f,   255.f,     0.f, \
        170.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        255.f,     0.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
          0.f,   255.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,    85.f,   255.f, \
          0.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
         85.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f
    // COCO
    #define POSE_COCO_PAIRS_RENDER_GPU \
        1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   1,8,   8,9,   9,10,  1,11,  11,12, 12,13,  1,0,   0,14, 14,16,  0,15, 15,17
    #define POSE_COCO_SCALES_RENDER_GPU 1
    #define POSE_COCO_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        255.f,     0.f,     0.f, \
        255.f,    85.f,     0.f, \
        255.f,   170.f,     0.f, \
        255.f,   255.f,     0.f, \
        170.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
          0.f,   255.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,    85.f,   255.f, \
          0.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
         85.f,     0.f,   255.f
    // MPI
    // MPI colors chosen such that they are closed to COCO colors
    #define POSE_MPI_PAIRS_RENDER_GPU \
        0,1,   1,2,   2,3,   3,4,   1,5,   5,6,   6,7,   1,14,  14,8,  8,9,  9,10,  14,11, 11,12, 12,13
    #define POSE_MPI_SCALES_RENDER_GPU 1
    #define POSE_MPI_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        255.f,     0.f,     0.f, \
        255.f,    85.f,     0.f, \
        255.f,   170.f,     0.f, \
        255.f,   255.f,     0.f, \
        170.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
         43.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
          0.f,   255.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,    85.f,   255.f, \
          0.f,     0.f,   255.f
    // BODY_19
    #define POSE_BODY_19_PAIRS_RENDER_GPU \
        1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18
    #define POSE_BODY_19_SCALES_RENDER_GPU 1
    #define POSE_BODY_19_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        255.f,     0.f,     0.f, \
        255.f,    85.f,     0.f, \
        255.f,   170.f,     0.f, \
        255.f,   255.f,     0.f, \
        170.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        255.f,     0.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
          0.f,   255.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,    85.f,   255.f, \
          0.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
         85.f,     0.f,   255.f
    // BODY_23
    #define POSE_BODY_23_PAIRS_RENDER_GPU \
        1,7, 4,10, 0,1,   0,4,   1,2,   2,3,   4,5,   5,6,   7,8,  8,9, 10,11, 11,12,  0,13, 13,15,  0,14, 14,16,   12,17,17,18,12,19, 9,20,20,21,9,22
    #define POSE_BODY_23_SCALES_RENDER_GPU 1
    #define POSE_BODY_23_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        255.f,     0.f,     0.f, \
        255.f,    85.f,     0.f, \
        255.f,   170.f,     0.f, \
        255.f,   255.f,     0.f, \
        170.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        255.f,     0.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
          0.f,   255.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,    85.f,   255.f, \
          0.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
         85.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f
    // BODY_25B
    #define POSE_BODY_25B_PAIRS_RENDER_GPU \
        0,1, 0,2, 1,3, 2,4,   5,7, 6,8,   7,9, 8,10,   5,11, 6,12,   11,13, 12,14,   13,15, 14,16, \
        15,19, 19,20, 15,21,   16,22, 22,23, 16,24,   5,17, \
        6,17,   17,18,   11,12
    #define POSE_BODY_25B_SCALES_RENDER_GPU 1
    #define POSE_BODY_25B_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
         85.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
        170.f,   255.f,     0.f, \
        255.f,    85.f,     0.f, \
         85.f,   255.f,     0.f, \
        255.f,   170.f,     0.f, \
          0.f,   255.f,     0.f, \
        255.f,   255.f,     0.f, \
          0.f,   170.f,   255.f, \
          0.f,   255.f,    85.f, \
          0.f,    85.f,   255.f, \
          0.f,   255.f,   170.f, \
          0.f,     0.f,   255.f, \
          0.f,   255.f,   255.f, \
        255.f,     0.f,     0.f, \
        255.f,     0.f,     0.f, \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f
    // BODY_65
    // Body + left hand + right hand
    #define POSE_BODY_65_PAIRS_RENDER_GPU \
        1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18,   14,19,19,20,14,21, 11,22,22,23,11,24, \
        7,25, 25,26, 26,27, 27,28, 7,29, 29,30, 30,31, 31,32, 7,33, 33,34, 34,35, 35,36, 7,37, 37,38, 38,39, 39,40, 7,41, 41,42, 42,43, 43,44, \
        4,45, 45,46, 46,47, 47,48, 4,49, 49,50, 50,51, 51,52, 4,53, 53,54, 54,55, 55,56, 4,57, 57,58, 58,59, 59,60, 4,61, 61,62, 62,63, 63,64
    #define POSE_BODY_65_SCALES_RENDER_GPU \
        1.f,1.f,1.f,1.f,1.f, 1.f,1.f,1.f,1.f,1.f, 1.f,1.f,1.f,1.f,1.f, 1.f,1.f,1.f,1.f,1.f,1.f,1.f,1.f,1.f,1.f, \
        0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, \
        0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f
    #define POSE_BODY_65_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        255.f,     0.f,     0.f, \
        255.f,    85.f,     0.f, \
        255.f,   170.f,     0.f, \
        255.f,   255.f,     0.f, \
        170.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        255.f,     0.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
          0.f,   255.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,    85.f,   255.f, \
          0.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
         85.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f, \
        \
        255.f,    0.f,    0.f, \
        191.f,   47.f,   47.f, \
        127.f,   63.f,   63.f, \
         63.f,   47.f,   47.f, \
        255.f,   76.f,    0.f, \
        191.f,   57.f,    0.f, \
        127.f,   38.f,    0.f, \
         63.f,   19.f,    0.f, \
        255.f,  152.f,    0.f, \
        191.f,  114.f,    0.f, \
        127.f,   76.f,    0.f, \
         63.f,   38.f,    0.f, \
        255.f,  255.f,    0.f, \
        191.f,  191.f,    0.f, \
        127.f,  127.f,    0.f, \
         63.f,   63.f,    0.f, \
          0.f,  255.f,    0.f, \
          0.f,  191.f,    0.f, \
          0.f,  127.f,    0.f, \
          0.f,   63.f,    0.f, \
        \
        255.f,    0.f,  153.f, \
        191.f,    0.f,  114.f, \
        127.f,    0.f,   76.f, \
         63.f,    0.f,   38.f, \
        203.f,    0.f,  255.f, \
        152.f,    0.f,  191.f, \
        101.f,    0.f,  127.f, \
         50.f,    0.f,   63.f, \
         50.f,    0.f,  255.f, \
         37.f,    0.f,  191.f, \
         25.f,    0.f,  127.f, \
         12.f,    0.f,   63.f, \
          0.f,  102.f,  255.f, \
          0.f,   76.f,  191.f, \
          0.f,   51.f,  127.f, \
          0.f,   25.f,   63.f, \
          0.f,  255.f,  255.f, \
          0.f,  191.f,  191.f, \
          0.f,  127.f,  127.f, \
          0.f,   63.f,   63.f
    // Hand color selection
    // http://www.perbang.dk/rgbgradient/
    // 1. Main color
    //     - Each finger of the right hand: 11 steps from FF0000 to FF0001 and pick last 5 from HSV gradient.
    //     - Each finger of the left hand: 21 steps from FF0000 to FF0001, choosing 4 among first 6 (HSV grad.),
    //       and then green.
    //     Note: Choosing first 5 from 11 steps was giving 2 very close greens
    // 2. Gradient color from wrist to finger tips
    //     - Inside each finger: 5 steps from main color to 000000, and selecting first 4 from RGB gradient.
    //     Note: Used HSV gradient for red finger.
    // BODY_95
    const auto F95 = 25;
    #define POSE_BODY_95_PAIRS_RENDER_GPU \
        0,1, 0,2, 1,3, 2,4,   5,7, 6,8,   7,9, 8,10,   5,11, 6,12,   11,13, 12,14,   13,15, 14,16, \
        15,19, 19,20, 15,21,   16,22, 22,23, 16,24,   5,17, \
        6,17,   17,18,   11,12, \
        F95+0,F95+1,  F95+1,F95+2,  F95+2,F95+3,  F95+3,F95+4,  F95+4,F95+5,  F95+5,F95+6,  F95+6,F95+7,  F95+7,F95+8,  F95+8,F95+9,  F95+9,F95+10,  F95+10,F95+11,  F95+11,F95+12,  F95+12,F95+13,  F95+13,F95+14,  F95+14,F95+15,  F95+15,F95+16,  F95+17,F95+18,  F95+18,F95+19,  F95+19,F95+20, \
        F95+20,F95+21,  F95+22,F95+23,  F95+23,F95+24,  F95+24,F95+25,  F95+25,F95+26,  F95+27,F95+28,  F95+28,F95+29,  F95+29,F95+30,  F95+31,F95+32,  F95+32,F95+33,  F95+33,F95+34,  F95+34,F95+35,  F95+36,F95+37,  F95+37,F95+38,  F95+38,F95+39,  F95+39,F95+40,  F95+40,F95+41, \
        F95+41,F95+36,  F95+42,F95+43,  F95+43,F95+44,  F95+44,F95+45,  F95+45,F95+46,  F95+46,F95+47,  F95+47,F95+42,  F95+48,F95+49,  F95+49,F95+50,  F95+50,F95+51,  F95+51,F95+52,  F95+52,F95+53,  F95+53,F95+54,  F95+54,F95+55,  F95+55,F95+56,  F95+56,F95+57,  F95+57,F95+58, \
        F95+58,F95+59,  F95+59,F95+48,  F95+60,F95+61,  F95+61,F95+62,  F95+62,F95+63,  F95+63,F95+64,  F95+64,F95+65,  F95+65,F95+66,  F95+66,F95+67,  F95+67,F95+60
    #define POSE_BODY_95_SCALES_RENDER_GPU \
        1.f,1.f,1.f,1.f,1.f, 1.f,1.f,1.f,1.f,1.f, 1.f,1.f,1.f,1.f,1.f, 1.f,1.f, \
        1.f,1.f, \
        1.f,1.f,1.f,1.f,1.f,1.f, \
        0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, \
        0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, \
        0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, \
        0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f
    #define POSE_BODY_95_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
         85.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
        170.f,   255.f,     0.f, \
        255.f,    85.f,     0.f, \
         85.f,   255.f,     0.f, \
        255.f,   170.f,     0.f, \
          0.f,   255.f,     0.f, \
        255.f,   255.f,     0.f, \
          0.f,   170.f,   255.f, \
          0.f,   255.f,    85.f, \
          0.f,    85.f,   255.f, \
          0.f,   255.f,   170.f, \
          0.f,     0.f,   255.f, \
          0.f,   255.f,   255.f, \
        255.f,     0.f,     0.f, \
        255.f,     0.f,     0.f, \
        \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f, \
        \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f
    // BODY_135
    const auto H135 = 25;
    const auto F135 = H135 + 40;
    #define POSE_BODY_135_PAIRS_RENDER_GPU \
        0,1, 0,2, 1,3, 2,4,   5,7, 6,8,   7,9, 8,10,   5,11, 6,12,   11,13, 12,14,   13,15, 14,16, \
        15,19, 19,20, 15,21,   16,22, 22,23, 16,24,   5,17, \
        6,17,   17,18,   11,12, \
        \
        9,H135+0, H135+0,H135+1, H135+1,H135+2, H135+2,H135+3,           9,H135+4, H135+4,H135+5, H135+5,H135+6, H135+6,H135+7, \
        9,H135+8, H135+8,H135+9, H135+9,H135+10, H135+10,H135+11,        9,H135+12, H135+12,H135+13, H135+13,H135+14, H135+14,H135+15, \
        9,H135+16, H135+16,H135+17, H135+17,H135+18, H135+18,H135+19, \
        \
        10,H135+20, H135+20,H135+21, H135+21,H135+22, H135+22,H135+23,   10,H135+24, H135+24,H135+25, H135+25,H135+26, H135+26,H135+27, \
        10,H135+28, H135+28,H135+29, H135+29,H135+30, H135+30,H135+31,   10,H135+32, H135+32,H135+33, H135+33,H135+34, H135+34,H135+35, \
        10,H135+36, H135+36,H135+37, H135+37,H135+38, H135+38,H135+39, \
        \
        F135+0,F135+1,    F135+1,F135+2,    F135+2,F135+3,    F135+3,F135+4,    F135+4,F135+5,    F135+5,F135+6,    F135+6,F135+7,    F135+7,F135+8,    F135+8,F135+9,    F135+9,F135+10,   F135+10,F135+11,  F135+11,F135+12,  F135+12,F135+13,  F135+13,F135+14,  F135+14,F135+15,  F135+15,F135+16,  F135+17,F135+18,  F135+18,F135+19,  F135+19,F135+20, \
        F135+20,F135+21,  F135+22,F135+23,  F135+23,F135+24,  F135+24,F135+25,  F135+25,F135+26,  F135+27,F135+28,  F135+28,F135+29,  F135+29,F135+30,  F135+31,F135+32,  F135+32,F135+33,  F135+33,F135+34,  F135+34,F135+35,  F135+36,F135+37,  F135+37,F135+38,  F135+38,F135+39,  F135+39,F135+40,  F135+40,F135+41, \
        F135+41,F135+36,  F135+42,F135+43,  F135+43,F135+44,  F135+44,F135+45,  F135+45,F135+46,  F135+46,F135+47,  F135+47,F135+42,  F135+48,F135+49,  F135+49,F135+50,  F135+50,F135+51,  F135+51,F135+52,  F135+52,F135+53,  F135+53,F135+54,  F135+54,F135+55,  F135+55,F135+56,  F135+56,F135+57,  F135+57,F135+58, \
        F135+58,F135+59,  F135+59,F135+48,  F135+60,F135+61,  F135+61,F135+62,  F135+62,F135+63,  F135+63,F135+64,  F135+64,F135+65,  F135+65,F135+66,  F135+66,F135+67,  F135+67,F135+60
    #define POSE_BODY_135_SCALES_RENDER_GPU \
        1.f,1.f,1.f,1.f,1.f, 1.f,1.f,1.f,1.f,1.f, 1.f,1.f,1.f,1.f,1.f, 1.f,1.f, \
        1.f,1.f, \
        1.f,1.f,1.f,1.f,1.f,1.f, \
        0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, \
        0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, 0.75f,0.75f,0.75f,0.75f,0.75f, \
        0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, \
        0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, \
        0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f, \
        0.55f,0.55f,0.55f,0.55f,0.55f, 0.55f,0.55f,0.55f,0.55f,0.55f
    #define POSE_BODY_135_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
         85.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
        170.f,   255.f,     0.f, \
        255.f,    85.f,     0.f, \
         85.f,   255.f,     0.f, \
        255.f,   170.f,     0.f, \
          0.f,   255.f,     0.f, \
        255.f,   255.f,     0.f, \
          0.f,   170.f,   255.f, \
          0.f,   255.f,    85.f, \
          0.f,    85.f,   255.f, \
          0.f,   255.f,   170.f, \
          0.f,     0.f,   255.f, \
          0.f,   255.f,   255.f, \
        255.f,     0.f,     0.f, \
        255.f,     0.f,     0.f, \
        \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f, \
          0.f,   255.f,   255.f, \
        \
        255.f,    0.f,    0.f, \
        191.f,   47.f,   47.f, \
        127.f,   63.f,   63.f, \
         63.f,   47.f,   47.f, \
        255.f,   76.f,    0.f, \
        191.f,   57.f,    0.f, \
        127.f,   38.f,    0.f, \
         63.f,   19.f,    0.f, \
        255.f,  152.f,    0.f, \
        191.f,  114.f,    0.f, \
        127.f,   76.f,    0.f, \
         63.f,   38.f,    0.f, \
        255.f,  255.f,    0.f, \
        191.f,  191.f,    0.f, \
        127.f,  127.f,    0.f, \
         63.f,   63.f,    0.f, \
          0.f,  255.f,    0.f, \
          0.f,  191.f,    0.f, \
          0.f,  127.f,    0.f, \
          0.f,   63.f,    0.f, \
        \
        255.f,    0.f,  153.f, \
        191.f,    0.f,  114.f, \
        127.f,    0.f,   76.f, \
         63.f,    0.f,   38.f, \
        203.f,    0.f,  255.f, \
        152.f,    0.f,  191.f, \
        101.f,    0.f,  127.f, \
         50.f,    0.f,   63.f, \
         50.f,    0.f,  255.f, \
         37.f,    0.f,  191.f, \
         25.f,    0.f,  127.f, \
         12.f,    0.f,   63.f, \
          0.f,  102.f,  255.f, \
          0.f,   76.f,  191.f, \
          0.f,   51.f,  127.f, \
          0.f,   25.f,   63.f, \
          0.f,  255.f,  255.f, \
          0.f,  191.f,  191.f, \
          0.f,  127.f,  127.f, \
          0.f,   63.f,   63.f, \
        \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f, \
        255.f,   255.f,   255.f

    // CAR_12
    #define POSE_CAR_12_PAIRS_RENDER_GPU \
        4,5,   4,6,   4,0,   0,2,   4,8,   8,10,   5,7,   5,1,   1,3,  5,9, 9,11,     0,1, 8,9,     2,3, 6,7, 10,11,     6,2,7,3, 6,10,7,11
        // 4,5,   4,6,   4,0,   0,2,   4,8,   8,10,   5,7,   5,1,   1,3,  5,9, 9,11
    #define POSE_CAR_12_SCALES_RENDER_GPU 0.5
    #define POSE_CAR_12_COLORS_RENDER_GPU \
          0.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        255.f,   255.f,     0.f, \
        255.f,   255.f,     0.f, \
        \
        255.f,     0.f,     0.f, \
        255.f,     0.f,     0.f, \
        255.f,    75.f,    75.f, \
        255.f,    75.f,    75.f, \
        \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
        255.f,     0.f,   255.f

    // CAR_22
    #define POSE_CAR_22_PAIRS_RENDER_GPU \
            0,1,1,3,3,2,2,0,   6,7,7,16,16,17,17,6,   12,13,13,14,14,15,15,12,   6,8,7,8,6,9,7,9,6,4,7,5,   12,11,13,10, \
            16,18,17,18,16,19,17,19,   6,21,7,20
    #define POSE_CAR_22_SCALES_RENDER_GPU 0.625
    #define POSE_CAR_22_COLORS_RENDER_GPU \
        255.f,   128.f,   128.f, \
        255.f,     0.f,     0.f, \
         64.f,     0.f,     0.f, \
        255.f,     0.f,     0.f, \
        \
          0.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        \
          0.f,     0.f,    64.f, \
        128.f,   128.f,   255.f, \
        \
          0.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        \
          0.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        \
         64.f,     0.f,     0.f, \
        255.f,   128.f,   128.f, \
        255.f,     0.f,     0.f, \
        255.f,     0.f,     0.f, \
        \
          0.f,     0.f,   255.f, \
          0.f,     0.f,   255.f, \
        \
          0.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        \
          0.f,     0.f,   255.f, \
          0.f,     0.f,    64.f

    // Rendering functions
    OP_API const std::vector<float>& getPoseScales(const PoseModel poseModel);
    OP_API const std::vector<float>& getPoseColors(const PoseModel poseModel);
    OP_API const std::vector<unsigned int>& getPoseBodyPartPairsRender(const PoseModel poseModel);
    OP_API unsigned int getNumberElementsToRender(const PoseModel poseModel);
}

#endif // OPENPOSE_POSE_POSE_PARAMETERS_RENDER_HPP
