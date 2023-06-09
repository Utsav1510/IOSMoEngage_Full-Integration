//
//  ThirdViewController.swift
//  IOSMoEngage
//
//  Created by Utsav Punia on 10/05/23.
//

import UIKit
import MoEngageSDK
import MoEngageInApps
class ThirdViewController: UIViewController, UNUserNotificationCenterDelegate, MoEngageMessagingDelegate {
    
    
    @IBOutlet weak var email: UITextField!
    
    @IBOutlet weak var phone: UITextField!
    
    @IBOutlet weak var gender: UITextField!
    
    @IBOutlet weak var dob: UIDatePicker!
    
    @IBOutlet weak var lastname: UITextField!
    
    @IBOutlet weak var firstname: UITextField!
    
    @IBOutlet weak var adidasbef: UITextField!
    
    
    @IBOutlet weak var Rate: UITextField!
    
    var count: Int = 1
    
    override func viewDidLoad() {
        super.viewDidLoad()
        dob.locale = .current
        dob.date = Date();
        
        firstname.delegate=self //send msgs to self object
        lastname.delegate=self
        email.delegate=self
        gender.delegate=self
        phone.delegate=self
        dob.addTarget(self, action: #selector(dateselected), for: .valueChanged)
        Rate.delegate=self
        
        adidasbef.delegate = self
       

        // Do any additional setup after loading the view.
    }
    
    @IBAction func dob(_ sender: Any) {
        
    }
    var var1: Date? = Date ();
    @objc
    func dateselected(){
        
        let formatter = DateFormatter()
        formatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ssZ"
        print("hello")
        let date = formatter.string(from: dob.date)
            print(date)
         
        var1=formatter.date(from: date)
        
    }
    
    
    @IBAction func signupbutton(_ sender: Any) {
       
//        MoEngageSDKMessaging.sharedInstance.setMessagingDelegate(self)
//        
//        MoEngageSDKMessaging.sharedInstance.registerForRemoteNotification(withCategories: nil, andUserNotificationCenterDelegate: self)
//        
//        
//        func application(_ application: UIApplication, didRegisterForRemoteNotificationsWithDeviceToken deviceToken: Data) {
//          //Call only if MoEngageAppDelegateProxyEnabled is NO
//          MoEngageSDKMessaging.sharedInstance.setPushToken(deviceToken)
//        }
//
//
//        func application(_ application: UIApplication, didFailToRegisterForRemoteNotificationsWithError error: Error) {
//          //Call only if MoEngageAppDelegateProxyEnabled is NO
//          MoEngageSDKMessaging.sharedInstance.didFailToRegisterForPush()
//            
//        }
        
      
        MoEngageSDKInApp.sharedInstance.showInApp()
        MoEngageSDKAnalytics.sharedInstance.setFirstName(firstname.text!)
        MoEngageSDKAnalytics.sharedInstance.setLastName(lastname.text!)
        MoEngageSDKAnalytics.sharedInstance.setEmailID(email.text!)
        MoEngageSDKAnalytics.sharedInstance.setMobileNumber(phone.text!)
        MoEngageSDKAnalytics.sharedInstance.setUniqueID(email.text!)
        MoEngageSDKAnalytics.sharedInstance.setDateOfBirth(var1!)
        
        MoEngageSDKAnalytics.sharedInstance.setUserAttribute(Int(Rate.text!), withAttributeName: "Rate")
        MoEngageSDKAnalytics.sharedInstance.setUserAttribute( count , withAttributeName: "ButtonClicked")
        count=count+1
        print("Count is ",count)
        
        switch gender.text{
        case "male":
            MoEngageSDKAnalytics.sharedInstance.setGender(.male)
        case "female":
            MoEngageSDKAnalytics.sharedInstance.setGender(.female)
        case .none:
            print("hello")
        case .some(_):
            print("hello")
        }
        
        if adidasbef.text! == "yes"{
            MoEngageSDKAnalytics.sharedInstance.setUserAttribute(true, withAttributeName: " Prev offline/online shopping")
            
        }
        else{
            MoEngageSDKAnalytics.sharedInstance.setUserAttribute(false, withAttributeName: " Prev offline/online shopping")
            
        }
        var eventAttrDict : Dictionary<String,Any> = Dictionary()
        eventAttrDict["ProductName"] = "iPhone XS Max"
        let eventProperties = MoEngageProperties(withAttributes: eventAttrDict)

        eventProperties.addAttribute(87000.00, withName: "price")
        
        eventProperties.addDateAttribute(Date(), withName: "Time of login")

       
        MoEngageSDKAnalytics.sharedInstance.trackEvent("Successful login", withProperties: eventProperties)

        
    }
    @IBAction func signout(_ sender: Any) {
       
        
        
        
        
        MoEngageSDKAnalytics.sharedInstance.resetUser()
    }
    
        
    }
    
    
    
    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */




extension ThirdViewController:UITextFieldDelegate{
    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        resignFirstResponder()
        return true
    }
}
