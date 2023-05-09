//
//  ThirdViewController.swift
//  IOSMoEngage
//
//  Created by Utsav Punia on 10/05/23.
//

import UIKit
import MoEngageSDK

class ThirdViewController: UIViewController {
    
    
    @IBOutlet weak var email: UITextField!
    
    @IBOutlet weak var phone: UITextField!
    
    @IBOutlet weak var gender: UITextField!
    
    @IBOutlet weak var dob: UIDatePicker!
    
    @IBOutlet weak var lastname: UITextField!
    
    @IBOutlet weak var firstname: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        firstname.delegate=self //send msgs to self object
        lastname.delegate=self
        email.delegate=self
        gender.delegate=self
        phone.delegate=self
        
        

        // Do any additional setup after loading the view.
    }
    

    @IBAction func signupbutton(_ sender: Any) {
        MoEngageSDKAnalytics.sharedInstance.setFirstName(firstname.text!)
        MoEngageSDKAnalytics.sharedInstance.setLastName(lastname.text!)
        MoEngageSDKAnalytics.sharedInstance.setEmailID(email.text!)
        MoEngageSDKAnalytics.sharedInstance.setMobileNumber(phone.text!)
        MoEngageSDKAnalytics.sharedInstance.setUniqueID(email.text!)


        
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
extension ThirdViewController:UITextFieldDelegate{
    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        resignFirstResponder()
        return true
    }

}
