/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class <CBCentralManagerDelegate>;

@interface CBCentralManager : NSObject  {
    <CBCentralManagerDelegate> *_delegate;
    int _state;
}

@property(readonly) int state;
@property <CBCentralManagerDelegate> * delegate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)initWithDelegate:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2;
- (void)retrievePeripherals:(id)arg1;
- (void)retrieveConnectedPeripherals;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)stopScan;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)cancelPeripheralConnection:(id)arg1;
- (int)state;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
