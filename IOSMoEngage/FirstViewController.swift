//
//  ViewController.swift
//  IOSMoEngage
//
//  Created by Utsav Punia on 09/05/23.
//

import UIKit
import MoEngageCards
import MoEngageInbox

class FirstViewController: UIViewController {
    
        
    
    override func viewDidLoad() {
        
        super.viewDidLoad()
        
        
        
        MoEngageSDKInbox.sharedInstance.getInboxViewController(withUIConfiguration: MoEngageInboxUIConfiguration, withInboxWithControllerDelegate:self , forAppID: "YOUR APP ID") { inboxController in
             self.inboxController = inboxController
        }
        // Do any additional setup after loading the view.
        
        
        
        
        
        
    }
    @IBAction func didLogin(_ sender: Any) {
        let secondController = self.storyboard!.instantiateViewController(withIdentifier: "second_controller") as! SecondViewController
        //        let storyboard=UIStoryboard(name:"Main",bundle:nil)
        //        let secondController = storyboard.instantiateViewController(withIdentifier: "second_controller")
        secondController.loadViewIfNeeded()
        self.present(secondController, animated: true,completion: nil)
        
    }
    
    
    
    
    @IBAction func cards(_ sender: Any) {
        
        
        // DISPLAYYYYYY
        MoEngageSDKCards.sharedInstance.pushCardsViewController(toNavigationController: self.navigationController!)

        // To Present MoEngageCardsListViewController
        MoEngageSDKCards.sharedInstance.presentCardsViewController()
        
//        --------------------------------
        
        //  CUSTOMIZEEEE
        
        let uiConfig = MoEngageCardsUIConfiguration()
        // Do customization using uiConfig
        // provide the argument while obtaining the MoEngageCardsListViewController instance

        // Present Cards View Controller
        MoEngageSDKCards.sharedInstance.presentCardsViewController(withUIConfiguration: uiConfig)

//        // Push Cards View Controller
//        MoEngageSDKCards.sharedInstance.pushCardsViewController(toNavigationController: self.navigationController!, withUIConfiguration: uiConfig)
//
//
        // Obtaining the ViewController
        
        
//        ------------------------------------------------------------------------
        
        
        
        
    }
    
    @IBAction func show_inbox(){
        
        
        // Present
        
        
        
        
        
        
    }
        
    
}
