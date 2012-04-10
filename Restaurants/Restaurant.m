//
//  Restaurant.m
//  Restaurants
//

#import "Restaurant.h"


@implementation Restaurant
@synthesize address, name, cuisineType, yearOpened, reviewerName, score, text, numberOfHelpfulRatings, numberOfUnhelpfulRatings, reviews;


-(int)age
{
    return 2012 - yearOpened;
    }

-(Review*) mostHelpfulReview{
    Review* mostHelpfulReview = nil;
    
    for(Review* review in reviews){
        if (review.numberOfHelpfulRatings > 4) {
            if (mostHelpfulReview == nil){
                mostHelpfulReview = review;
            }
            
            if (review > mostHelpfulReview){
                mostHelpfulReview = review;
            }
        }
    }
    NSLog (@"Review text:%@", mostHelpfulReview.text);
    return mostHelpfulReview;
}

@end
