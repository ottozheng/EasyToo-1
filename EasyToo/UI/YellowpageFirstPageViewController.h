//
//  FirstPageViewController.h
//  EasyToo
//
//  Created by linshengqin on 13-6-12.
//
//

#import <UIKit/UIKit.h>

@interface YellowpageFirstPageViewController : UIViewController<UITextFieldDelegate>{
    
    UIButton *_btnDish;
    UIButton *_btnRelex;
    UIButton *_btnService;
    UIButton *_btnShopping;
    UIButton *_btnRest;
    UIButton *_btnBeauty;
    UIButton *_btnSport;
    UIButton *_btnMarry;

    
    UITextField* _SearchTextField;
    NSString* _searchString;
}

@property (nonatomic, assign) UIViewController* fatherView;

@end
