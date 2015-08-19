//
//  IndexViewController.h
//  wlkg
//
//  Created by zhangchao on 15/5/6.
//  Copyright (c) 2015年 leo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"


@interface IndexViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout>
@property(nonatomic,retain)NSMutableArray *List;
@property(nonatomic,retain)UICollectionView *collectionView;
@property(nonatomic,strong)AppDelegate *delegate;
@end
