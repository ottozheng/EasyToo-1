//
//  MineViewController.h
//  EasyToo
//
//  Created by linshengqin on 13-6-11.
//
//

#import <UIKit/UIKit.h>

@interface MineViewController : UIViewController <UITextFieldDelegate>
{
    UITextField* _SearchTextField;
    NSString* _searchString;
}

@end