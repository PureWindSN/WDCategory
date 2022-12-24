//
//  UITableView+WDWind.h
//  WDCategory
//
//  Created by Wind on 2022/12/25.
//

#import <UIKit/UIKit.h>
//#import "WDEmptyTableView.h"


NS_ASSUME_NONNULL_BEGIN

@interface UITableView (WDWind)

- (void)reloadDataOrEmpty/*:(Action)action*/;

@end

NS_ASSUME_NONNULL_END
