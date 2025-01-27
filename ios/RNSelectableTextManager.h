#if __has_include(<RCTText/RCTBaseTextInputViewManager.h>)
#import <RCTText/RCTBaseTextInputViewManager.h>
#else
#import "RCTBaseTextInputViewManager.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface RNSelectableTextManager : RCTBaseTextInputViewManager

@property (nonnull, nonatomic, copy) NSString *value;
@property (nonatomic, copy) RCTDirectEventBlock onSelection;
@property (nullable, nonatomic, copy) NSArray<NSString *> *menuItems;
@property (nonatomic, copy) RCTDirectEventBlock onHighlightPress;
@property (nonatomic, copy) RCTDirectEventBlock onLinkPress;
@property (nonnull, nonatomic, copy) NSArray<NSString *> *linksArray;

@end

NS_ASSUME_NONNULL_END
