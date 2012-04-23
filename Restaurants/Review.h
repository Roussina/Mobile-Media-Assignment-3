//
//  Review.h
//  Restaurants
//
//  Created by Roussina Valkova on 4/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface Review : NSObject
{
    NSString* reviewerName;
    NSString* text;
    
    int score;
    int numberOfHelpfulRatings;
    int numberOfUnhelpfulRatings;
}

@property(readwrite, strong) NSString* text;
@property(readwrite, strong) NSString* reviewer;
@property(readwrite) int score;
@property(readwrite) int numberOfHelpfulRatings;
@property(readwrite) int numberOfunhelpfulRatings;

-(float)helpfulPercentage;
-(int)totalReviewRating;

@end

