//
//  AppDelegate.h
//  Hunter
//
//  Created by nankeyimeng on 16/10/6.
//  Copyright © 2016年 nankeyimeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

