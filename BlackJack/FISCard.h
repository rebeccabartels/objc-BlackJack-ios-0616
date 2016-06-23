//
//  FISCard.h
//  BlackJack
//
//  Created by Rebecca Bartels on 6/23/16.
//  Copyright © 2016 Flatiron School. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "FISAppDelegate.h"
#import "FISCardDeck.h"

@interface FISCard : NSObject

+ (NSArray *)validSuits;
+ (NSArray *)validRanks;

@property (strong, nonatomic, readonly) NSString *suit;
@property (strong, nonatomic, readonly) NSString *rank;
@property (strong, nonatomic, readonly) NSString *cardLabel;
@property (nonatomic, readonly) NSUInteger cardValue;

- (instancetype)init;

- (instancetype)initWithSuit:(NSString *)suit
                        rank:(NSString *)rank;

@end