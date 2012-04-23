//
//  Review.m
//  Restaurants
//
//  Created by Roussina Valkova on 4/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#import "Review.h"

@implementation Review
@synthesize reviewer, text, score, numberOfHelpfulRatings, numberOfunhelpfulRatings;

-(id)init
{
    self = [super init];
    if(self)
    {
        
    }
    return self;
}
-(float)helpfulPercentage{
    
    float percentage;
    percentage = numberOfHelpfulRatings/ (numberOfHelpfulRatings + numberOfunhelpfulRatings);
    return percentage;
}

-(int)totalReviewRating{
    int totalReviewRatings = numberOfHelpfulRatings + numberOfunhelpfulRatings;
    return totalReviewRatings;
}

@end

