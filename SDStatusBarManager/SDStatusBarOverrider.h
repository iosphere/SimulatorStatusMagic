//
//  SDStatusBarOverrider.h
//  SimulatorStatusMagic
//
//  Created by Craig Siemens on 2015-04-09.
//  Copyright (c) 2015 Shiny Development. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SDStatusBarOverrider <NSObject>

@property (copy, nonatomic) NSString *timeString;
/// displayed instead of signal strength when offline mode is active
@property (copy, nonatomic) NSString *offlineString;

@property (assign, nonatomic) BOOL bluetoothEnabled;
@property (assign, nonatomic) BOOL bluetoothConnected;
@property (assign, nonatomic) BOOL watchMode;

- (void)enableOverrides;
- (void)disableOverrides;

@end
