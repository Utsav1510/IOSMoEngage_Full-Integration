//
//  SecondViewController.swift
//  IOSMoEngage
//
//  Created by Utsav Punia on 09/05/23.
//

import UIKit
import MoEngageSDK
import MoEngageInApps

class SecondViewController: UIViewController {
    
    
    

    @IBOutlet weak var userid: UITextField!
    
    @IBOutlet weak var pass: UITextField!
    
    override func viewDidLoad() {
        userid.delegate=self
        
        
        
       
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    
    
    @IBAction func proceed(_ sender: Any) {
        var eventAttrDict : Dictionary<String,Any> = Dictionary()
        eventAttrDict["ProductName"] = "iPhone XS Max"
        let eventProperties = MoEngageProperties(withAttributes: eventAttrDict)

        eventProperties.addAttribute(87000.00, withName: "price")
        
        eventProperties.addDateAttribute(Date(), withName: "Time of login")

       
        MoEngageSDKAnalytics.sharedInstance.trackEvent("Successful login", withProperties: eventProperties)
        
        MoEngageSDKAnalytics.sharedInstance.setUniqueID(userid.text!)
        
    }
    
    @IBAction func backbutton(_ sender: Any) {
        dismiss(animated: true)
    }
    
    
    
  
    
    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */
    
    

}
extension SecondViewController:UITextFieldDelegate{
    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        resignFirstResponder()
        return true
    }
}
