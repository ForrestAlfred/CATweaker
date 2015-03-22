//
//  AppDelegate.h
//  CAMediaTimingFunctionBuilder
//
//  Created by X on 2015-03-21.
//  Copyright (c) 2015 Beyondcow. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "CurveView.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>
@property(assign) IBOutlet CurveView *curveView;
@property(assign) IBOutlet NSTextView *textView;

@end

