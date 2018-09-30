//
//  foo.c
//  StaticVariables
//
//  Created by zhangchong on 2018/9/30.
//  Copyright © 2018年 zhangchong. All rights reserved.
//

#include "foo.h"
#include "constants.h"

void printAddressForThreshold() {
    printf("Function: %s Threshold: %p, %d\n", __FUNCTION__, &Threshold, Threshold);
}
