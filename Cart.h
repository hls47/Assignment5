//
//  Cart.h
//  Assignment5
//
//  Created by Sinemus, Hannah L on 4/14/14.
//  Copyright (c) 2014 Sinemus, Hannah L. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Fruit;

@interface Cart : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Fruit *contains;

@end
