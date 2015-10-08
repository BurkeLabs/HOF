//
//  Picture.h
//  HallOfFrames
//
//  Created by Matt Deuschle on 10/7/15.
//  Copyright © 2015 Matt Deuschle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Picture : UIImage

@property

-(instancetype)initWithFullName:(NSString *)name andDetail:(NSString *)detail andImage:(UIImage *)creatureImage andMutableArray:(NSMutableArray *)accessories;

@end
