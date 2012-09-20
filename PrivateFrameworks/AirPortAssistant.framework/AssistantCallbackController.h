/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <AssistantCallbackUIDelegate>;

@interface AssistantCallbackController : NSObject <AssistantCallbackUIDelegateResult> {
    BOOL _saveScanState;
    id _uiDelegate;
    struct AssistantCallbackContext { struct AssistantContext {} *x1; int x2; struct __CFDictionary {} *x3; int x4; id x5; id x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; void *x8; } *_callbackContext;
}

@property <AssistantCallbackUIDelegate> * uiDelegate;

+ (long)removeKeychainPasswordForBaseStation:(id)arg1;
+ (id)keychainPasswordForBaseStation:(id)arg1;
+ (long)updateKeychainBasePassword:(id)arg1 forMACAddress:(id)arg2 withBaseName:(id)arg3;
+ (long)updateKeychainNetworkPassword:(id)arg1 forNetworkNamed:(id)arg2;

- (void)dealloc;
- (id)init;
- (long)assistantCallback:(struct AssistantCallbackContext { struct AssistantContext {} *x1; int x2; struct __CFDictionary {} *x3; int x4; id x5; id x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; void *x8; }*)arg1 withSelector:(int)arg2;
- (void)scanForNetworksDone:(id)arg1;
- (void)directedScanDone:(id)arg1;
- (void)joinNetworkDone:(id)arg1;
- (long)startJoinNetwork:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3;
- (long)startScanForNetworks;
- (long)startDirectedScan:(id)arg1 waitingForNetwork:(BOOL)arg2;
- (void)setUiDelegate:(id)arg1;
- (id)uiDelegate;
- (long)subclassAssistantCallback:(struct AssistantCallbackContext { struct AssistantContext {} *x1; int x2; struct __CFDictionary {} *x3; int x4; id x5; id x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; void *x8; }*)arg1;
- (void)callbackAskUserAQuestionResult:(int)arg1 result:(long)arg2;
- (void)callbackAskUserToChooseFromStringListResult:(long)arg1 selectedString:(id)arg2;
- (void)callbackAskUserForPasswordResult:(long)arg1 password:(id)arg2;
- (void)userResponseToWarning:(long)arg1;
- (void)userResponseToJoinNetwork:(long)arg1;
- (int (*)())assistantCallback;

@end