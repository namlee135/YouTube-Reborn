#import <AVFoundation/AVFoundation.h>
#import <AVKit/AVKit.h>
#import <UIKit/UIKit.h>

@interface DownloadsAudioController : UITableViewController <AVPlayerViewControllerDelegate>

- (void)setupDownloadsAudioControllerView;
- (void)setupAudioArrays;

@end