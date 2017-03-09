//
//  Video.h
//  YoutubeApp
//
//  Created by Ta Duy De on 2/13/17.
//  Copyright © 2017 Ta. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Video : NSObject
@property(nonatomic, strong) NSString *videoTitle;
@property(nonatomic, strong) NSString *videoDescription;
@property(nonatomic, strong) NSString *videoIfame;
@property(nonatomic, strong) NSString *thumbnailUrl;
@end
