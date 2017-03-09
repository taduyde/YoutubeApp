//
//  VideoCell.h
//  YoutubeApp
//
//  Created by Ta Duy De on 2/13/17.
//  Copyright © 2017 Ta. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "Video.h"
@class Video;

@interface VideoCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *thumbImg;
@property (strong, nonatomic) IBOutlet UILabel *titleLbl;
@property (strong, nonatomic) IBOutlet UILabel *descLbl;
-(void)updateUI:(nonnull Video*)video;
@end
