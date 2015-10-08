//
//  Picture.m
//  HallOfFrames
//
//  Created by Matt Deuschle on 10/7/15.
//  Copyright © 2015 Matt Deuschle. All rights reserved.
//

#import "Picture.h"

@implementation Picture

-(instancetype)initWithFullName:(NSString *)name andDetail:(NSString *)detail andImage:(UIImage *)creatureImage andMutableArray:(NSMutableArray *)accessories {

    self = [super init];

    if (self) {
        self.name = name;
        self.detail = detail;
        self.creatureImage = creatureImage;
        self.accessories = accessories;
    }
    return self;
}

@end
