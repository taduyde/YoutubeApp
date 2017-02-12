//
//  HTTPService.h
//  YoutubeApp
//
//  Created by Ta on 2/12/17.
//  Copyright © 2017 Ta. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^onComplete)(NSArray * __nullable dataArray, NSString * __nullable errMessage);

@interface HTTPService : NSObject

+ (id) instance;
- (void) getTutorials:(nullable onComplete)completionHandler;

@end
