//
//  PictureCollectionViewCell.h
//  HallOfFrames
//
//  Created by Matt Deuschle on 10/7/15.
//  Copyright © 2015 Matt Deuschle. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PictureCollectionViewCellDelegate <NSObject>

-(void)PictureCollectionViewCell:(id)picture didTappedButton:(UIButton *)button;

@end

@interface PictureCollectionViewCell : UICollectionViewCell

@property UIImage *image;
@property UIColor *frameColor;

@end
