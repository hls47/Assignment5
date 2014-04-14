//
//  Fruit.h
//  Assignment5
//
//  Created by Sinemus, Hannah L on 4/14/14.
//  Copyright (c) 2014 Sinemus, Hannah L. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Fruit : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * color;
@property (nonatomic, retain) NSString * shape;
@property (nonatomic, retain) NSManagedObject *containedBy;

@end
