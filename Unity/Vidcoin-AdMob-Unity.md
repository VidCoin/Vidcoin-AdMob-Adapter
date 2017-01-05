# Vidcoin Mediation Adapter for Google Mobile Ads SDK for Unity
![Vidcoin](https://d3rud9259azp35.cloudfront.net/documentation/Vidcoin-Logo.png)

Adapter Version: 1.0.0    
Manager: https://manager.vidcoin.com    
Contact: publishers@vidcoin.com    

## Requirements
- Unity 5.0 or higher
- iOS
	- Xcode 6 or higher
	- Google Mobile Ads SDK 7.7.0 or higher
- Android
	- Android SDK 3.2 or higher
	- Google Play services 7.5 or higher

## Includes
This UnityPackage includes:    
- Vidcoin iOS SDK (& post-build scripts) + Adapter    
- Vidcoin Android SDK (& dependencies) + Adapter

## Instructions
- Add the Google Mobile Ads SDK. See the  [quick start guide](https://firebase.google.com/docs/admob/unity/start) for detailed instructions on how to integrate the Google Mobile Ads SDK.
- Drag & Drop the UnityPackage into your project
- Enable the ad network in the AdMob dashboard. Enable the ad network in the AdMob dashboard. See the  [custom event set up guide](https://support.google.com/admob/answer/3083407?hl=en&ref_topic=3063091) for details. The Parameter value in the custom event created on AdMob's dashboard must be formatted as follows: `appId|placementCode`, where "appId" and "placementCode" are found on Vidcoin's Manager, in your app's details.

## Using VidcoinAdmobExtras
- The AdRequest AdMob SDK class can be used to create a `Request` with optional information. The example below shows how to use the bundle builder class. Vidcoin provides `userAppId`, `userBirthYear` and `userGender` parameters, with `VidcoinAdmobExtraKeys` that can be used to give information about the user.
```csharp
AdRequest request = new AdRequest.Builder()
	.AddExtra(VidcoinAdmobExtraKeys.VIDCOIN_KEY_USER_APP_ID, "userAppId")
	.AddExtra(VidcoinAdmobExtraKeys.VIDCOIN_KEY_USER_BIRTH_YEAR, "1990")
	.AddExtra(VidcoinAdmobExtraKeys.VIDCOIN_KEY_USER_GENDER, VidcoinAdmobExtraKeys.VIDCOIN_GENDER_MALE)
	.Build();
rewardBasedVideo.LoadAd(request, adUnitId);
```

## Notes
- The `rewardBasedVideoAdWillLeaveApplication` event and `rewardBasedVideoAdDidReceiveAdClick` event for iOS are not supported for ads served with Vidcoin.
- The `onAdLeftApplication` event and `onAdClicked` event for Android are not supported for ads served with Vidcoin.

The latest documentation and code samples for the Google Mobile Ads SDK are available  [here](https://firebase.google.com/docs/admob/unity/start).
