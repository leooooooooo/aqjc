//
//  FunctionListViewController.h
//  aqjc
//
//  Created by zhangchao on 15/8/19.
//  Copyright (c) 2015年 leo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FunctionListViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout>
@property(nonatomic,retain)NSMutableArray *List;
@property(nonatomic,retain)UICollectionView *collectionView;

@end
