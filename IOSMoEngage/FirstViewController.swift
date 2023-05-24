//
//  ViewController.swift
//  IOSMoEngage
//
//  Created by Utsav Punia on 09/05/23.
//

import UIKit
import MoEngageCards
import MoEngageInbox

class FirstViewController: UIViewController , MoEngageInboxViewControllerDelegate{
    
        
    var inboxController: MoEngageInboxViewController?;
    
    override func viewDidLoad() {
        
        
        super.viewDidLoad()
        
        
        
//        MoEngageSDKInbox.sharedInstance.getInboxViewController(withUIConfiguration: nil, withInboxWithControllerDelegate: nil, forAppID: "K5RQAWVLPPTTIA29F1XKRAGW") { inboxController in
//            print("messages")
//        }
        // Do any additional setup after loading the view.
        
        
        
        
        
        
    }
//    K5RQAWVLPPTTIA29F1XKRAGW
    
    @IBAction func inbox(_ sender: Any) {
        MoEngageSDKInbox.sharedInstance.getInboxViewController(withUIConfiguration: nil, withInboxWithControllerDelegate: nil, forAppID: "2877NHMD0TOHATHC6NNHDERW") { inboxController in
            self.inboxController = inboxController;
            print("hello")
        }
        
        MoEngageSDKInbox.sharedInstance.presentInboxViewController(withUIConfiguration: nil)
    }
    
    
    
    @IBAction func cards(_ sender: Any) {
        MoEngageSDKCards.sharedInstance.presentCardsViewController()
    }
    
    @IBAction func didLogin(_ sender: Any) {
        let secondController = self.storyboard!.instantiateViewController(withIdentifier: "second_controller") as! SecondViewController
        //        let storyboard=UIStoryboard(name:"Main",bundle:nil)
        //        let secondController = storyboard.instantiateViewController(withIdentifier: "second_controller")
        secondController.loadViewIfNeeded()
        self.present(secondController, animated: true,completion: nil)
        
    }
    
    
    
    
    

    
    
        
    
}
