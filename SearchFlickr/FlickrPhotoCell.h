//
//  FlickrPhotoCell.h
//  SearchFlickr
//
//  Created by Chao Xu on 14-4-21.
//  Copyright (c) 2014年 Chao Xu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
@class FlickrPhoto;
@interface FlickrPhotoCell : UICollectionViewCell
@property (nonatomic,strong) IBOutlet UIImageView *imageView;
@property (nonatomic,strong) FlickrPhoto *photo;
@end
