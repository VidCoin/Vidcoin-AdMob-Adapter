# Vidcoin Adapter for Google Mobile Ads SDK for Android
![Vidcoin](https://documentation.vidcoin.com/images/Vidcoin-Logo.png)

Adapter Version: 1.2.1    
Manager: https://manager.vidcoin.com    
Contact: publishers@vidcoin.com    

## Requirements
- Android SDK v2.3.3 (API level 10) or higher
- Google Mobile Ads SDK v7.0.0 or higher
- Vidcoin Android SDK v1.3.1 or higher

## Instructions
- Add the Google Mobile Ads SDK to your project. Please refer to the  [quick start guide](https://firebase.google.com/docs/admob/android/quick-start) for detailed instructions.
- Add the compiled dependency with the latest version of the Vidcoin adapter in the  **build.gradle** file:
```gradle
dependencies {
  compile(name:'VidcoinAdsAdapter', ext:'aar')
}
```
- Import the Vidcoin Android SDK in your Android project. The  [documentation](https://github.com/VidCoin/VidCoin-Android-SDK/blob/master/Documentation.md) contains detailed instructions on how to do so.
- Enable the ad network in the AdMob dashboard. See the  [custom event set up guide](https://support.google.com/admob/answer/3083407?hl=en&ref_topic=3063091) for details.
  - The `Class Name` value in the custom event should be set to `com.google.ads.mediation.vidcoin.VidcoinAdapter`
  - The `Label` value in the custom event can be set to anything. Its value will be used for AdMob reporting and cannot be changed.
  - The `Parameter` value in the custom event created on AdMob's dashboard must be formatted as follows: `appId|placementCode`, where "appId" and "placementCode" are found on Vidcoin's Manager, in your app's details.

## Using VidcoinExtrasBundleBuilder
- The `VidcoinExtrasBundleBuilder` class can be used to create a `Bundle` with optional information that can be passed to the adapter using `AdRequest`.
  The example below shows how to use the bundle builder class.
  The `VidcoinExtrasBundleBuilder` class provides `userAppId`, `userBirthYear` and `userGender` parameters, that can be used to give information about the user.
```java
Bundle bundle = new VidcoinAdapter.VidcoinExtrasBundleBuilder()
  .withUserAppId("userAppId")
  .withUserBirthYear("1990")
  .withUserGender(VidcoinExtrasBundleBuilder.USER_GENDER_MALE)
  .build();
AdRequest adRequest = new AdRequest.Builder()
  .addNetworkExtrasBundle(VidcoinAdapter.class, bundle)
  .build();
```

## Notes
- The `onAdLeftApplication` event and `onAdClicked` event for Android are not supported for ads served with Vidcoin.
- If you prefer using a jar file, you can extract the classes.jar file from the .aar using a standard zip extract tool.

See the [quick start guide](https://firebase.google.com/docs/admob/android/quick-start) for the latest documentation and code samples for the Google Mobile Ads SDK.
