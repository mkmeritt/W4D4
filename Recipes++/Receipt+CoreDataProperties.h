//
//  Receipt+CoreDataProperties.h
//  Recipes++
//
//  Created by Mark Meritt on 2016-07-21.
//  Copyright © 2016 Apptist. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Receipt.h"

NS_ASSUME_NONNULL_BEGIN

@interface Receipt (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *amount;
@property (nullable, nonatomic, retain) NSNumber *note;
@property (nullable, nonatomic, retain) NSNumber *timeStamp;
@property (nullable, nonatomic, retain) NSSet<Tag *> *relationship;

@end

@interface Receipt (CoreDataGeneratedAccessors)

- (void)addRelationshipObject:(Tag *)value;
- (void)removeRelationshipObject:(Tag *)value;
- (void)addRelationship:(NSSet<Tag *> *)values;
- (void)removeRelationship:(NSSet<Tag *> *)values;

@end

NS_ASSUME_NONNULL_END
