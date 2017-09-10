#import <UIKit/UIKit.h>

typedef void (^UINavigationItemSetTitleListener)(NSString *);
typedef void (^UINavigationItemSetTitleViewListener)(UIView *);
typedef void (^UINavigationItemSetImageListener)(UIImage *);
typedef void (^UINavigationItemSetBarButtonItemListener)(UIBarButtonItem *, UIBarButtonItem *, BOOL);
typedef void (^UITabBarItemSetBadgeListener)(NSString *);

@interface UINavigationItem (Proxy)

- (void)setTargetItem:(UINavigationItem *)targetItem;

- (NSInteger)addSetTitleListener:(UINavigationItemSetTitleListener)listener;
- (void)removeSetTitleListener:(NSInteger)key;
- (NSInteger)addSetTitleViewListener:(UINavigationItemSetTitleViewListener)listener;
- (void)removeSetTitleViewListener:(NSInteger)key;
- (NSInteger)addSetLeftBarButtonItemListener:(UINavigationItemSetBarButtonItemListener)listener;
- (void)removeSetLeftBarButtonItemListener:(NSInteger)key;
- (NSInteger)addSetRightBarButtonItemListener:(UINavigationItemSetBarButtonItemListener)listener;
- (void)removeSetRightBarButtonItemListener:(NSInteger)key;
- (NSInteger)addSetBackBarButtonItemListener:(UINavigationItemSetBarButtonItemListener)listener;
- (void)removeSetBackBarButtonItemListener:(NSInteger)key;
- (NSInteger)addSetBadgeListener:(UITabBarItemSetBadgeListener)listener;
- (void)removeSetBadgeListener:(NSInteger)key;

@property (nonatomic, strong) NSString *badge;

@end

NSInteger UITabBarItem_addSetBadgeListener(UITabBarItem *item, UITabBarItemSetBadgeListener listener);

@interface UITabBarItem (Proxy)

- (void)removeSetBadgeListener:(NSInteger)key;

- (NSInteger)addSetTitleListener:(UINavigationItemSetTitleListener)listener;
- (void)removeSetTitleListener:(NSInteger)key;

- (NSInteger)addSetImageListener:(UINavigationItemSetImageListener)listener;
- (void)removeSetImageListener:(NSInteger)key;

- (NSInteger)addSetSelectedImageListener:(UINavigationItemSetImageListener)listener;
- (void)removeSetSelectedImageListener:(NSInteger)key;

@end
