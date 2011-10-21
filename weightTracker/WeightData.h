//
//  WeightData.h
//  weightTracker
//
//  Created by Björn Beuck on 21.10.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface WeightData : NSObject {
    @private
    double weight;
    bool syncronized;
    long serial;
    NSDate *date;
}
@property double weight;
@property bool syncronized;
@property long serial;
@property NSDate *date;

@end
