//
//  GADMVidcoinExtras.h
//  VidcoinAdapter
//
//  Copyright 2016 Google. All rights reserved.
//

#import <Foundation/Foundation.h>
@import GoogleMobileAds;

// Constants to give information about the user
#define kVCAdapterUserGenderMale @"MALE"
#define kVCAdapterUserGenderFemale @"FEMALE"

@interface GADMVidcoinExtras : NSObject<GADAdNetworkExtras>

// The ID of the user within your app (used to identify the user in server-to-server rewarding)
@property(nonatomic, assign) NSString *userAppId;
// The birth year of the user (used for better ad targetting)
@property(nonatomic, assign) NSString *userBirthYear;
// The gender of the user (you may use the constants defined above to set this value)
@property(nonatomic, assign) NSString *userGender;

@end
