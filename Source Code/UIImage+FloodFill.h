//
//  UIImage+FloodFill.h
//  ImageFloodFilleDemo
//
//  Created by chintan on 15/07/13.
//  Copyright (c) 2013 ZWT. All rights reserved.
//
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#endif
#import "LinkedListStack.h"

#if TARGET_OS_IPHONE
@interface UIImage (FloodFill)

- (UIImage *) floodFillFromPoint:(CGPoint)startPoint withColor:(UIColor *)newColor andTolerance:(int)tolerance;
#else
@interface NSImage (FloodFill)

- (NSImage*) floodFillFromPoint:(CGPoint)startPoint withColor:(NSColor *)newColor andTolerance:(int)tolerance;
#endif
@end