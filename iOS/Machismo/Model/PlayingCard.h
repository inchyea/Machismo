//
//  PlayingCard.h
//  Machismo
//
//  Created by Inchyea on 12/18/14.
//  Copyright (c) 2014 Inchyea. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
