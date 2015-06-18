//
//  PhotoController.h
//  Day 4 Photo Bombers App
//
//  Created by Sanzhar Askaruly on 6/18/15.
//  Copyright (c) 2015 Sanzhar Askaruly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PhotoController : NSObject
+(void)imageForPhoto: (NSDictionary *) photo size: (NSString *) size completion: (void(^) (UIImage *image)) completion;
@end
