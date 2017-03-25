//
//  AppDelegate.h
//  PDchat
//
//  Created by 郭晓龙 on 17/3/25.
//  Copyright © 2017年 郭晓龙. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <HyphenateLite/HyphenateLite.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

