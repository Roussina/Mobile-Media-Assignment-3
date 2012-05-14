//
//  Restaurant.h
//  Restaurants
//

#import <Foundation/Foundation.h>
#import "Review.h"

@interface Restaurant : NSObject
{
    NSMutableArray *reviews;
    NSString* address;
    NSString* name;
    NSString* cuisineType;
    NSString* reviewerName;
    NSString* text;
    int yearOpened;
    int score; 
    int numberOfHelpfulRatings;
    int numberOfUnhelpfulRatings;
    int bestReview;
    
    bool isFavorite;
    

}
@property(readwrite, strong) NSMutableArray* reviews;
@property(readwrite, strong) NSString* address;
@property(readwrite, strong) NSString* name;
@property(readwrite, strong) NSString* cuisineType;
@property(readwrite) int yearOpened;
@property(readwrite) bool isFavorite;

@property(readwrite, strong) Review* bestReview;

-(int)age;
-(int)totalReview;
-(Review*) mostHelpfulReview;
-(float) averageCustomerReview;
-(BOOL) isFavorite;

@end
