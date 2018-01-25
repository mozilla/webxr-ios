#import <UIKit/UIKit.h>

#define URL_FIELD_HEIGHT 29

typedef void (^BackAction)(id sender);
typedef void (^ForwardAction)(id sender);
typedef void (^HomeAction)(id sender);
typedef void (^ReloadAction)(id sender);
typedef void (^CancelAction)(id sender);
typedef void (^GoAction)(NSString *url);
typedef void (^DebugButtonToggledAction)(BOOL selected);


@interface BarView : UIView

@property (nonatomic, copy) BackAction backActionBlock;
@property (nonatomic, copy) ForwardAction forwardActionBlock;
@property (nonatomic, copy) HomeAction homeActionBlock;
@property (nonatomic, copy) ReloadAction reloadActionBlock;
@property (nonatomic, copy) CancelAction cancelActionBlock;
@property (nonatomic, copy) GoAction goActionBlock;
@property (nonatomic, copy) DebugButtonToggledAction debugButtonToggledAction;

- (NSString *)urlFieldText;

- (void)startLoading:(NSString *)url;
- (void)finishLoading:(NSString *)url;

- (void)setBackEnabled:(BOOL)enabled;
- (void)setForwardEnabled:(BOOL)enabled;

- (void)setDebugSelected:(BOOL)selected;
- (void)setDebugVisible:(BOOL)visible;

- (void)hideKeyboard;

@end
