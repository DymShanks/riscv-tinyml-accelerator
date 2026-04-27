#pragma once
#include "tinyml.h"
static const int8_t W1[4][4]={{12,-8,5,3},{7,15,-4,9},{-3,6,11,-7},{8,-2,4,13}};
static const int8_t B1[4]={2,-1,3,1};
static const int8_t W2[1][4]={{10,8,-5,12}};
static const int8_t B2[1]={0};
static inline int tinyml_infer(const int8_t input[4]){
    int h[4];
    for(int n=0;n<4;n++){
        TINYML_CLR_ACC();
        for(int i=0;i<4;i++) TINYML_MAC((int)input[i],(int)W1[n][i]);
        h[n]=TINYML_MAC_RELU((int)B1[n],1);
    }
    TINYML_CLR_ACC();
    for(int n=0;n<4;n++) TINYML_MAC((int)h[n],(int)W2[0][n]);
    int logit=TINYML_MAC((int)B2[0],1);
    int s=(logit+128)*100/256; if(s<0)s=0; if(s>100)s=100; return s;
}
