//
//  main.c
//  StaticVariables
//
//  Created by zhangchong on 2018/9/30.
//  Copyright © 2018年 zhangchong. All rights reserved.
//

#include <stdio.h>
#include "constants.h"
#include "foo.h"

/**
 Reference
 1. Internal and External Linkage in C++
 http://www.goldsborough.me/c/c%2B%2B/linker/2016/03/30/19-34-25-internal_and_external_linkage_in_c%2B%2B/
 */

int main(int argc, const char * argv[]) {
    printf("--------------------- main.c ------------------ \n");
    printf("Function: %s Threshold: %p, %d\n", __FUNCTION__, &Threshold, Threshold);
    
    printf("--------------------- foo.c ------------------ \n");
    printAddressForThreshold();
    return 0;
}



