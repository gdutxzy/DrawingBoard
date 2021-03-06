//
//  AppDelegate.h
//  DrawingBoard
//
//  Created by Eric Schlanger on 3/27/14.
//  Copyright (c) 2014 Eric Schlanger. All rights reserved.
//
// Michael MacDougall, Eric Schlanger, Joe Canero, Lindsey Nice

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
