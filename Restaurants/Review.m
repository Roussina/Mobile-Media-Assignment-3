//
//  Review.m
//  Restaurants



#import "Review.h"

@implementation Review
@synthesize reviewer, text, score, numberOfHelpfulRatings, numberOfunhelpfulRatings, averageCustomerReview;

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

