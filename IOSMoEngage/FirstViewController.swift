//
//  ViewController.swift
//  IOSMoEngage
//
//  Created by Utsav Punia on 09/05/23.
//

import UIKit

class FirstViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }
    @IBAction func didLogin(_ sender: Any) {
    let secondController = self.storyboard!.instantiateViewController(withIdentifier: "second_controller") as! SecondViewController
//        let storyboard=UIStoryboard(name:"Main",bundle:nil)
//        let secondController = storyboard.instantiateViewController(withIdentifier: "second_controller")
        secondController.loadViewIfNeeded()
        self.present(secondController, animated: true,completion: nil)
        
    }
    

}

