# Fork of https://github.com/maierfelix/nvk

## Differences

### Import directly from 'nvk' in Typescript
The following pending PR has been merged in to this package (https://github.com/maierfelix/nvk/pull/49) allowing imports from the root level

e.g. `import { VkWindow } from nkv;`

### No global namespace pollution
Originally nvk added the following methods to the global objects:
- ArrayBuffer.prototype.getAddress
- ArrayBuffer.fromAddress
- BigInt.prototype.dereference

This is no longer the case, instead the following methods can be imported from nvk and used:
- getAddressFromArrayBuffer
- getArrayBufferFromAddress
- dereferenceBigInt

### Upcoming changes
Update Vulkan API version to 1.2
