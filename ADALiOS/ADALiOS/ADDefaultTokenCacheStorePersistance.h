// Created by Boris Vidolov on 11/19/13.
// Copyright © Microsoft Open Technologies, Inc.
//
// All Rights Reserved
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS
// OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION
// ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A
// PARTICULAR PURPOSE, MERCHANTABILITY OR NON-INFRINGEMENT.
//
// See the Apache License, Version 2.0 for the specific language
// governing permissions and limitations under the License.

#import <Foundation/Foundation.h>

/*! This is an internal class that contains the basic data
 that the default token cache store persists. */
@interface ADDefaultTokenCacheStorePersistance : NSObject<NSSecureCoding>
{
@public
    int16_t upperVersion;
    int16_t lowerVersion;
    NSArray* cacheItems;
}

-(id) initWithCacheItems: (NSArray*) cacheItems;

@end
