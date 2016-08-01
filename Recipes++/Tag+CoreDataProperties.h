//
//  Tag+CoreDataProperties.h
//  Recipes++
//
//  Created by Mark Meritt on 2016-07-21.
//  Copyright © 2016 Apptist. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Tag.h"

NS_ASSUME_NONNULL_BEGIN

@interface Tag (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *tagName;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *relationship;

@end

@interface Tag (CoreDataGeneratedAccessors)

- (void)addRelationshipObject:(NSManagedObject *)value;
- (void)removeRelationshipObject:(NSManagedObject *)value;
- (void)addRelationship:(NSSet<NSManagedObject *> *)values;
- (void)removeRelationship:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
