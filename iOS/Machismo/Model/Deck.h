//
//  Deck.h
//  Machismo
//
//  Created by Inchyea on 12/18/14.
//  Copyright (c) 2014 Inchyea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
