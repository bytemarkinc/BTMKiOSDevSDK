/*
 *  Filename: "UserLocationManager.h"
 *
 *  Purpose: To collect and hold, track, manage any data
 *           pertaining user location 
 *
 *  Created By: Michael B. Lodato (SR. Mobile Developer)
 *
 *  Created: 3/13/13
 *
 *  Modified: 3/13/13
 *
 *  Company: "Bytemark Inc,."
 */

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@protocol UserLocationManagerDelegate <NSObject>

@required
- (void)userLocationHasUpdated:(CLLocationCoordinate2D)locationCoordinates;

@end


@interface BMLocationManager : NSObject

@property (nonatomic, readonly) bool isTrackingEnabled;
@property (nonatomic) CLLocation *lastKnownLocation;
@property (nonatomic) id<UserLocationManagerDelegate> delegate;

+ (BMLocationManager *)sharedManager;
- (void)startTrackingUserLocation;

/* Accessor functions */
- (CLLocationCoordinate2D)lastKnownCoordinate;

/* Mutator functions */
- (void)removeDelegate;

@end
