//
//  ViewController.h
//  Tip Calculator
//
//  Created by Ankit on 3/12/17.
//  Copyright (c) 2017 Ankit. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *billTextField;
@property (weak, nonatomic) IBOutlet UITextField *percentTextField;

- (IBAction)goButton:(id)sender;
- (IBAction)clearButton:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

@end


