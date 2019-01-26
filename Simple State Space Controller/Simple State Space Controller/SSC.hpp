//
//  SSC.hpp
//  Simple State Space Controller
//
//  Created by Adam Woo on 6/29/18.
//  Copyright © 2018 Adam Woo. All rights reserved.
//

#ifndef SSC_hpp
#define SSC_hpp

#include <stdio.h>

// library interface description
class SSC{
    // library-accessible "private" interface
private:
    
    double myA[4][4];
    double myB[4][1];
    double myK[4];
    double myTs;
    long double mySetpoints[4][1];
    long double myX[4][1];
    long double myU[4][1];
    int numStates;
    
    double sampleTime;
    int lastTime;
    int now;
    int i,j;
    
    long double myMat[4][4];
    long double myBK[4][4];
    
    // user-accessible "public" interface
public:
    SSC(double [][4], double [][4], double [], double, long double [][4], long double [][4], long double [][1]);
    
    void setSSC(void);
    
    long double update(long double, long double);
};


#endif /* SSC_hpp */
