/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKPHYSICALDEVICELIMITS_H__
#define __VK_VKPHYSICALDEVICELIMITS_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceLimits: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetmaxImageDimension1D);
    static NAN_GETTER(GetmaxImageDimension2D);
    static NAN_GETTER(GetmaxImageDimension3D);
    static NAN_GETTER(GetmaxImageDimensionCube);
    static NAN_GETTER(GetmaxImageArrayLayers);
    static NAN_GETTER(GetmaxTexelBufferElements);
    static NAN_GETTER(GetmaxUniformBufferRange);
    static NAN_GETTER(GetmaxStorageBufferRange);
    static NAN_GETTER(GetmaxPushConstantsSize);
    static NAN_GETTER(GetmaxMemoryAllocationCount);
    static NAN_GETTER(GetmaxSamplerAllocationCount);
    static NAN_GETTER(GetbufferImageGranularity);
    static NAN_GETTER(GetsparseAddressSpaceSize);
    static NAN_GETTER(GetmaxBoundDescriptorSets);
    static NAN_GETTER(GetmaxPerStageDescriptorSamplers);
    static NAN_GETTER(GetmaxPerStageDescriptorUniformBuffers);
    static NAN_GETTER(GetmaxPerStageDescriptorStorageBuffers);
    static NAN_GETTER(GetmaxPerStageDescriptorSampledImages);
    static NAN_GETTER(GetmaxPerStageDescriptorStorageImages);
    static NAN_GETTER(GetmaxPerStageDescriptorInputAttachments);
    static NAN_GETTER(GetmaxPerStageResources);
    static NAN_GETTER(GetmaxDescriptorSetSamplers);
    static NAN_GETTER(GetmaxDescriptorSetUniformBuffers);
    static NAN_GETTER(GetmaxDescriptorSetUniformBuffersDynamic);
    static NAN_GETTER(GetmaxDescriptorSetStorageBuffers);
    static NAN_GETTER(GetmaxDescriptorSetStorageBuffersDynamic);
    static NAN_GETTER(GetmaxDescriptorSetSampledImages);
    static NAN_GETTER(GetmaxDescriptorSetStorageImages);
    static NAN_GETTER(GetmaxDescriptorSetInputAttachments);
    static NAN_GETTER(GetmaxVertexInputAttributes);
    static NAN_GETTER(GetmaxVertexInputBindings);
    static NAN_GETTER(GetmaxVertexInputAttributeOffset);
    static NAN_GETTER(GetmaxVertexInputBindingStride);
    static NAN_GETTER(GetmaxVertexOutputComponents);
    static NAN_GETTER(GetmaxTessellationGenerationLevel);
    static NAN_GETTER(GetmaxTessellationPatchSize);
    static NAN_GETTER(GetmaxTessellationControlPerVertexInputComponents);
    static NAN_GETTER(GetmaxTessellationControlPerVertexOutputComponents);
    static NAN_GETTER(GetmaxTessellationControlPerPatchOutputComponents);
    static NAN_GETTER(GetmaxTessellationControlTotalOutputComponents);
    static NAN_GETTER(GetmaxTessellationEvaluationInputComponents);
    static NAN_GETTER(GetmaxTessellationEvaluationOutputComponents);
    static NAN_GETTER(GetmaxGeometryShaderInvocations);
    static NAN_GETTER(GetmaxGeometryInputComponents);
    static NAN_GETTER(GetmaxGeometryOutputComponents);
    static NAN_GETTER(GetmaxGeometryOutputVertices);
    static NAN_GETTER(GetmaxGeometryTotalOutputComponents);
    static NAN_GETTER(GetmaxFragmentInputComponents);
    static NAN_GETTER(GetmaxFragmentOutputAttachments);
    static NAN_GETTER(GetmaxFragmentDualSrcAttachments);
    static NAN_GETTER(GetmaxFragmentCombinedOutputResources);
    static NAN_GETTER(GetmaxComputeSharedMemorySize);
    std::vector<uint32_t>* vmaxComputeWorkGroupCount;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> maxComputeWorkGroupCount;
    static NAN_GETTER(GetmaxComputeWorkGroupCount);
    static NAN_GETTER(GetmaxComputeWorkGroupInvocations);
    std::vector<uint32_t>* vmaxComputeWorkGroupSize;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> maxComputeWorkGroupSize;
    static NAN_GETTER(GetmaxComputeWorkGroupSize);
    static NAN_GETTER(GetsubPixelPrecisionBits);
    static NAN_GETTER(GetsubTexelPrecisionBits);
    static NAN_GETTER(GetmipmapPrecisionBits);
    static NAN_GETTER(GetmaxDrawIndexedIndexValue);
    static NAN_GETTER(GetmaxDrawIndirectCount);
    static NAN_GETTER(GetmaxSamplerLodBias);
    static NAN_GETTER(GetmaxSamplerAnisotropy);
    static NAN_GETTER(GetmaxViewports);
    std::vector<uint32_t>* vmaxViewportDimensions;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> maxViewportDimensions;
    static NAN_GETTER(GetmaxViewportDimensions);
    std::vector<float>* vviewportBoundsRange;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> viewportBoundsRange;
    static NAN_GETTER(GetviewportBoundsRange);
    static NAN_GETTER(GetviewportSubPixelBits);
    static NAN_GETTER(GetminMemoryMapAlignment);
    static NAN_GETTER(GetminTexelBufferOffsetAlignment);
    static NAN_GETTER(GetminUniformBufferOffsetAlignment);
    static NAN_GETTER(GetminStorageBufferOffsetAlignment);
    static NAN_GETTER(GetminTexelOffset);
    static NAN_GETTER(GetmaxTexelOffset);
    static NAN_GETTER(GetminTexelGatherOffset);
    static NAN_GETTER(GetmaxTexelGatherOffset);
    static NAN_GETTER(GetminInterpolationOffset);
    static NAN_GETTER(GetmaxInterpolationOffset);
    static NAN_GETTER(GetsubPixelInterpolationOffsetBits);
    static NAN_GETTER(GetmaxFramebufferWidth);
    static NAN_GETTER(GetmaxFramebufferHeight);
    static NAN_GETTER(GetmaxFramebufferLayers);
    static NAN_GETTER(GetframebufferColorSampleCounts);
    static NAN_GETTER(GetframebufferDepthSampleCounts);
    static NAN_GETTER(GetframebufferStencilSampleCounts);
    static NAN_GETTER(GetframebufferNoAttachmentsSampleCounts);
    static NAN_GETTER(GetmaxColorAttachments);
    static NAN_GETTER(GetsampledImageColorSampleCounts);
    static NAN_GETTER(GetsampledImageIntegerSampleCounts);
    static NAN_GETTER(GetsampledImageDepthSampleCounts);
    static NAN_GETTER(GetsampledImageStencilSampleCounts);
    static NAN_GETTER(GetstorageImageSampleCounts);
    static NAN_GETTER(GetmaxSampleMaskWords);
    static NAN_GETTER(GettimestampComputeAndGraphics);
    static NAN_GETTER(GettimestampPeriod);
    static NAN_GETTER(GetmaxClipDistances);
    static NAN_GETTER(GetmaxCullDistances);
    static NAN_GETTER(GetmaxCombinedClipAndCullDistances);
    static NAN_GETTER(GetdiscreteQueuePriorities);
    std::vector<float>* vpointSizeRange;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pointSizeRange;
    static NAN_GETTER(GetpointSizeRange);
    std::vector<float>* vlineWidthRange;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> lineWidthRange;
    static NAN_GETTER(GetlineWidthRange);
    static NAN_GETTER(GetpointSizeGranularity);
    static NAN_GETTER(GetlineWidthGranularity);
    static NAN_GETTER(GetstrictLines);
    static NAN_GETTER(GetstandardSampleLocations);
    static NAN_GETTER(GetoptimalBufferCopyOffsetAlignment);
    static NAN_GETTER(GetoptimalBufferCopyRowPitchAlignment);
    static NAN_GETTER(GetnonCoherentAtomSize);

    // real instance
    VkPhysicalDeviceLimits instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceLimits();
    ~_VkPhysicalDeviceLimits();

};

#endif