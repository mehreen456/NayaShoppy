//
//  CategoriesViewController.h
//  nayashoppy
//
//  Created by Amerald on 31/10/2016.
//  Copyright © 2016 attribe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SKSTableView.h"
#import "SKSTableViewCell.h"

@interface CategoriesViewController : UIViewController<SKSTableViewDelegate>

@property (strong, nonatomic) IBOutlet SKSTableView *myTable;

@end
