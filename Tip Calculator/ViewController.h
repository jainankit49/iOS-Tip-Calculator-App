//
//  ViewController.h
//  Tip Calculator
//
//  Created by Ankit on 3/12/17.
//  Copyright (c) 2017 Ankit. All rights reserved.
//

#import VideoController.h


@interface ViewController
@end

@implementation ViewController

-(void) viewDidLoad
{
    [super viewDidLoad];
}

-(void) didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

-(IBAction) goButton: (id)sender{
    NSString *billTotal = self.billTextField.text
    float value = [billTotal floatValue];
    
    NSString *percent = self.percentTextField.text;
    float pValue = [percent floatValue]/100;
    
    float tipAmount = value * pValue;
    NSString *result = [NSString stringWithFormat:@"$%0.2f",tipAmount];
    self.resultLabel.text = result;
}

-(IBAction) clearButton: (id)sender{
    self.billTextField.text=nil;
    self.percentTextField.text=nil;
    self.resultLabel.text=nil;
}

@end

