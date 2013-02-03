/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class <VSSpeechSynthesizerDelegate>, NSString;

@interface VSSpeechSynthesizer : NSObject {
    struct { 
        unsigned int delegateStart : 1; 
        unsigned int delegateFinish : 1; 
        unsigned int delegatePause : 1; 
        unsigned int delegateContinue : 1; 
        unsigned int delegateWillSpeak : 1; 
        unsigned int willUseInput : 1; 
    <VSSpeechSynthesizerDelegate> *_delegate;
    void *_keepAlive;
    float _pitch;
    float _rate;
    void *_speechJob;
    } _synthesizerFlags;
    NSString *_voice;
    float _volume;
}

+ (void)_localeDidChange;
+ (id)availableLanguageCodes;
+ (id)availableVoices;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (BOOL)isSystemSpeaking;

- (void)_handleSpeech:(struct __VSSpeech { }*)arg1 completed:(BOOL)arg2 withError:(id)arg3;
- (void)_handleSpeech:(struct __VSSpeech { }*)arg1 willSpeakMarkType:(NSInteger)arg2 inRange:(struct { NSInteger x1; NSInteger x2; })arg3;
- (void)_handleSpeechContinued:(struct __VSSpeech { }*)arg1;
- (void)_handleSpeechPaused:(struct __VSSpeech { }*)arg1;
- (void)_handleSpeechStarted:(struct __VSSpeech { }*)arg1;
- (id)continueSpeaking;
- (void)dealloc;
- (id)init;
- (id)initForInputFeedback;
- (BOOL)isSpeaking;
- (float)maximumRate;
- (float)minimumRate;
- (id)pauseSpeakingAtNextBoundary:(NSInteger)arg1 synchronously:(BOOL)arg2;
- (id)pauseSpeakingAtNextBoundary:(NSInteger)arg1;
- (float)pitch;
- (float)rate;
- (void)setDelegate:(id)arg1;
- (void)setMaintainPersistentConnection:(BOOL)arg1;
- (id)setPitch:(float)arg1;
- (id)setRate:(float)arg1;
- (void)setVoice:(id)arg1;
- (id)setVolume:(float)arg1;
- (id)speechString;
- (id)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3;
- (id)startSpeakingString:(id)arg1 toURL:(id)arg2;
- (id)startSpeakingString:(id)arg1;
- (id)stopSpeakingAtNextBoundary:(NSInteger)arg1 synchronously:(BOOL)arg2;
- (id)stopSpeakingAtNextBoundary:(NSInteger)arg1;
- (id)voice;
- (float)volume;

@end