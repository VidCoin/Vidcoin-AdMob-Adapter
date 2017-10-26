# Vidcoin Mediation Adapter for Google Mobile Ads SDK for iOS
![Vidcoin](https://documentation.vidcoin.com/images/Vidcoin-Logo.png)

Adapter Version: 1.2.1    
Manager: https://manager.vidcoin.com    
Contact: publishers@vidcoin.com    

## Requirements
- Xcode 7.0 or higher
- Deployment target of iOS 7.0 or higher
- Google Mobile Ads SDK v7.10.1 or higher
- Vidcoin SDK v1.4.1 or higher

## Instructions
- Add the Google Mobile Ads SDK to your project. Please refer to the  [quick start guide](https://firebase.google.com/docs/admob/ios/quick-start) for detailed instructions.
- Add Vidcoin adapter's .framework to your Xcode project.
- Download the latest release of the Vidcoin SDK on  [Github](https://github.com/VidCoin/VidCoin-iOS-SDK).
- Enable the ad network in the AdMob dashboard. See the  [custom event set up guide](https://support.google.com/admob/answer/3083407?hl=en&ref_topic=3063091) for details.
  - The `Class Name` value in the custom event should be set to `GADMAdapterVidcoin`
  - The `Label` value in the custom event can be set to anything. Its value will be used for AdMob reporting and cannot be changed.
  - The `Parameter` value in the custom event should be formatted as follows: `appId|placementCode`, where "appId" and "placementCode" are found on Vidcoin's Manager, in your app's details.

## Using GADMVidcoinExtras
- The Vidcoin Adapter's framework has a class called `GADMVidcoinExtras` to provide the `userAppId`, `userBirthYear` and `userGender` parameters.
  Here is an example of its usage:
```objc
GADRequest *adRequest = [GADRequest request];
GADMVidcoinExtras *vidcoinExtras = [[GADMVidcoinExtras alloc] init];
vidcoinExtras.userAppId = "userAppId";
vidcoinExtras.userBirthYear = "1990";
vidcoinExtras.userGender = kVCAdapterUserGenderMale;
[request registerAdNetworkExtras:vidcoinExtras];
```

## Notes
- The `rewardBasedVideoAdWillLeaveApplication` event and `rewardBasedVideoAdDidReceiveAdClick` event for iOS are not supported for ads served with Vidcoin.

The latest documentation and code samples for the Google Mobile Ads SDK are available  [here](https://firebase.google.com/docs/admob/ios/quick-start).
