//
//  BJCardCell.h
//  UICollectionView
//
//  Created by zzg on 2018/12/11.
//  Copyright © 2018年 zzg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BJCardCell : UICollectionViewCell

@property (nonatomic , strong) NSString * title;


+(NSString *)reuseIdentifier;

@end
