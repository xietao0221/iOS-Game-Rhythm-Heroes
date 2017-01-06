#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import <StoreKit/StoreKit.h>

@interface myManager : NSObject <AVAudioPlayerDelegate, MPMediaPickerControllerDelegate>

+(myManager*)MusicManager;

-(void)openNativeMusicPicker:(bool)shouldAppendToPlaylist;
-(void)playPause;
-(void)loadAudioClip:(bool)shouldAppendToPlaylist;
-(void)nextSong;
-(void)previousSong;
-(void)queryAppleMusic:(NSString*)productID;
-(void)stopAppleMusic;

@end
