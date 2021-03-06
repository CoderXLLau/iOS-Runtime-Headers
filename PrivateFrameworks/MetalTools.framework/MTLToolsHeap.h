/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsHeap : MTLToolsResource <MTLHeap> {
    MTLToolsPointerArray * _buffers;
    MTLToolsPointerArray * _textures;
}

@property (nonatomic, readonly) MTLToolsPointerArray *buffers;
@property (readonly) unsigned int cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned int hash;
@property (copy) NSString *label;
@property (readonly) unsigned int size;
@property (readonly) unsigned int storageMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MTLToolsPointerArray *textures;
@property (readonly) unsigned int usedSize;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (id)buffers;
- (unsigned int)cpuCacheMode;
- (id)device;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)label;
- (unsigned int)maxAvailableSizeWithAlignment:(unsigned int)arg1;
- (id)newBufferWithLength:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (void)setLabel:(id)arg1;
- (unsigned int)setPurgeableState:(unsigned int)arg1;
- (unsigned int)size;
- (unsigned int)storageMode;
- (id)textures;
- (unsigned int)usedSize;

@end
