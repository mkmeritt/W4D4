//
//  AppDelegate.h
//  Recipes++
//
//  Created by Mark Meritt on 2016-07-21.
//  Copyright © 2016 Apptist. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSEntityDescription *tagEntity;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

