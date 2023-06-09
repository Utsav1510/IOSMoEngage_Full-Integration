//
//  AppDelegate.swift
//  IOSMoEngage
//
//  Created by Utsav Punia on 09/05/23.
//

import UIKit

import MoEngageSDK
import MoEngageInApps
import UserNotifications
@available(iOS 13.0, *)
@main
class AppDelegate: UIResponder, UIApplicationDelegate, UNUserNotificationCenterDelegate, MoEngageMessagingDelegate {

// firstName.text ?? ""
    
//    K5RQAWVLPPTTIA29F1XKRAGW
//    2877NHMD0TOHATHC6NNHDERW

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
//        MoEngageSDKAnalytics.sharedInstance.resetUser()
        
//        let sdkConfig = MoEngageSDKConfig(withAppID: "2877NHMD0TOHATHC6NNHDERW")
        let sdkConfig = MoEngageSDKConfig(withAppID: "2877NHMD0TOHATHC6NNHDERW")

        
        MoEngageSDKMessaging.sharedInstance.disableBadgeReset(true)
        
        MoEngageSDKMessaging.sharedInstance.setMessagingDelegate(self)
        
        
        

        
        
        sdkConfig.appGroupID = "group.moengage.alphadevs.moengage"
        
        //Add your MoEngage App ID
             
        sdkConfig.enableLogs = true
             // Separate initialization methods for Dev and Prod initializations
             #if DEBUG
                 MoEngage.sharedInstance.initializeDefaultTestInstance(sdkConfig, sdkState: .enabled)
             #else
                 MoEngage.sharedInstance.initializeDefaultLiveInstance(sdkConfig, sdkState: .enabled)
             #endif
        
        MoEngageSDKMessaging.sharedInstance.registerForRemoteNotification(withCategories: nil, andUserNotificationCenterDelegate: self)

            MoEngageSDKAnalytics.sharedInstance.appStatus(.install)
        
        
        
        return true
    }
//    func notificationClicked(withScreenName screenName: String?, andKVPairs kvPairs: [AnyHashable : Any]?) {
//            if let screenName = screenName {
//                print("Navigate to Screen:\(screenName)")
//            }
//
//            if let actionKVPairs = kvPairs {
//                print("Selected Action KVPair:\(actionKVPairs)")
//            }
//    }
//    func notificationClicked(withScreenName screenName: String?, kvPairs: [AnyHashable : Any]?, andPushPayload userInfo: [AnyHashable : Any]) {
//
//            print("Push Payload: \(userInfo)")
//
//            if let screenName = screenName {
//                print("Navigate to Screen:\(screenName)")
//            }
//
//            if let actionKVPairs = kvPairs {
//                print("Selected Action KVPair:\(actionKVPairs)")
//            }
//    }

    
    // MARK: UISceneSession Lifecycle


//    func application(_ application: UIApplication, didRegisterForRemoteNotificationsWithDeviceToken deviceToken: Data) {
//      //Call only if MoEngageAppDelegateProxyEnabled is NO
//      MoEngageSDKMessaging.sharedInstance.setPushToken(deviceToken)
//    }
//
//
//    func application(_ application: UIApplication, didFailToRegisterForRemoteNotificationsWithError error: Error) {
//      //Call only if MoEngageAppDelegateProxyEnabled is NO
//      MoEngageSDKMessaging.sharedInstance.didFailToRegisterForPush()
//
//    }
    
    @available(iOS 13.0, *)
    
    func application(_ application: UIApplication, configurationForConnecting connectingSceneSession: UISceneSession, options: UIScene.ConnectionOptions) -> UISceneConfiguration {
        // Called when a new scene session is being created.
        // Use this method to select a configuration to create the new scene with.
        return UISceneConfiguration(name: "Default Configuration", sessionRole: connectingSceneSession.role)
    }

    func application(_ application: UIApplication, didDiscardSceneSessions sceneSessions: Set<UISceneSession>) {
        // Called when the user discards a scene session.
        // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
        // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
    }


}


