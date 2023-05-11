//
//  NotificationViewController.swift
//  PushTemplateExtension
//
//  Created by Utsav Punia on 20/05/23.
//

import UIKit
import UserNotifications
import UserNotificationsUI
import MoEngageRichNotification

class NotificationViewController: UIViewController, UNNotificationContentExtension {

    @IBOutlet var label: UILabel?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any required interface initialization here.
        MoEngageSDKRichNotification.setAppGroupID("K5RQAWVLPPTTIA29F1XKRAGW")
        MoEngageSDKRichNotification.addPushTemplate(toController: self, withNotification: notification)
    }
    
    func didReceive(_ notification: UNNotification) {
        self.label?.text = notification.request.content.body
    }

}
