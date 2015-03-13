/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRangeMap : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> > { 
        struct _TSWPCharIndexAndAffinity {} *__begin_; 
        struct _TSWPCharIndexAndAffinity {} *__end_; 
        struct __compressed_pair<_TSWPCharIndexAndAffinity *, std::__1::allocator<_TSWPCharIndexAndAffinity> > { 
            struct _TSWPCharIndexAndAffinity {} *__first_; 
        } __end_cap_; 
    struct vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> > { 
        struct _TSWPCharIndexAndAffinity {} *__begin_; 
        struct _TSWPCharIndexAndAffinity {} *__end_; 
        struct __compressed_pair<_TSWPCharIndexAndAffinity *, std::__1::allocator<_TSWPCharIndexAndAffinity> > { 
            struct _TSWPCharIndexAndAffinity {} *__first_; 
        } __end_cap_; 
    } _mappedIndexes;
    } _subRange;
    } _unmappedIndexes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustByDelta:(int)arg1;
- (id)initWithSubRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 unmappedIndexes:(const struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg2 affinity:(int)arg3;
- (id)initWithSubRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 unmappedIndexes:(const struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg2 isBackwardAffinities:(const struct vector<bool, std::__1::allocator<bool> > { unsigned long *x1; unsigned int x2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long x_3_1_1; } x3; }*)arg3;
- (id)initWithSubRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 unmappedPairIndexes:(const struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg2;
- (unsigned int)mappedCharIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mappedCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)p_extendLeftMappedIndex:(unsigned int)arg1;
- (unsigned int)p_extendRightMappedIndex:(unsigned int)arg1;
- (unsigned int)unmappedCharIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })unmappedCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end