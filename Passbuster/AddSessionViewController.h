//
//  AddSessionViewController.h
//  Passbuster
//
//  Created by Fincher Justin on 15/10/30.
//  Copyright © 2015年 Fincher Justin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddSessionViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *CompanyTextfield;
@property (weak, nonatomic) IBOutlet UITextField *UsernameTextfield;
@property (weak, nonatomic) IBOutlet UITextField *PasswordTextfield;


@property (weak, nonatomic) NSNumber *NumberID;


@end
