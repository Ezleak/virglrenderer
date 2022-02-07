/* This file is generated by venus-protocol.  See vn_protocol_renderer.h. */

/*
 * Copyright 2020 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef VN_PROTOCOL_RENDERER_STRUCTS_H
#define VN_PROTOCOL_RENDERER_STRUCTS_H

#include "vn_protocol_renderer_handles.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpointer-arith"
#pragma GCC diagnostic ignored "-Wunused-parameter"

/*
 * These structs/unions/commands are not included
 *
 *   VkAllocationCallbacks
 */

/* struct VkExtent3D */

static inline void
vn_encode_VkExtent3D(struct vn_cs_encoder *enc, const VkExtent3D *val)
{
    vn_encode_uint32_t(enc, &val->width);
    vn_encode_uint32_t(enc, &val->height);
    vn_encode_uint32_t(enc, &val->depth);
}

static inline void
vn_decode_VkExtent3D_temp(struct vn_cs_decoder *dec, VkExtent3D *val)
{
    vn_decode_uint32_t(dec, &val->width);
    vn_decode_uint32_t(dec, &val->height);
    vn_decode_uint32_t(dec, &val->depth);
}

static inline void
vn_decode_VkExtent3D_partial_temp(struct vn_cs_decoder *dec, VkExtent3D *val)
{
    /* skip val->width */
    /* skip val->height */
    /* skip val->depth */
}

static inline void
vn_replace_VkExtent3D_handle(VkExtent3D *val)
{
    /* skip val->width */
    /* skip val->height */
    /* skip val->depth */
}

/* struct VkLayerProperties */

static inline void
vn_encode_VkLayerProperties(struct vn_cs_encoder *enc, const VkLayerProperties *val)
{
    vn_encode_array_size(enc, VK_MAX_EXTENSION_NAME_SIZE);
    vn_encode_char_array(enc, val->layerName, VK_MAX_EXTENSION_NAME_SIZE);
    vn_encode_uint32_t(enc, &val->specVersion);
    vn_encode_uint32_t(enc, &val->implementationVersion);
    vn_encode_array_size(enc, VK_MAX_DESCRIPTION_SIZE);
    vn_encode_char_array(enc, val->description, VK_MAX_DESCRIPTION_SIZE);
}

static inline void
vn_decode_VkLayerProperties_partial_temp(struct vn_cs_decoder *dec, VkLayerProperties *val)
{
    /* skip val->layerName */
    /* skip val->specVersion */
    /* skip val->implementationVersion */
    /* skip val->description */
}

/* struct VkExtensionProperties */

static inline void
vn_encode_VkExtensionProperties(struct vn_cs_encoder *enc, const VkExtensionProperties *val)
{
    vn_encode_array_size(enc, VK_MAX_EXTENSION_NAME_SIZE);
    vn_encode_char_array(enc, val->extensionName, VK_MAX_EXTENSION_NAME_SIZE);
    vn_encode_uint32_t(enc, &val->specVersion);
}

static inline void
vn_decode_VkExtensionProperties_temp(struct vn_cs_decoder *dec, VkExtensionProperties *val)
{
    {
        const size_t array_size = vn_decode_array_size(dec, VK_MAX_EXTENSION_NAME_SIZE);
        vn_decode_char_array(dec, val->extensionName, array_size);
    }
    vn_decode_uint32_t(dec, &val->specVersion);
}

static inline void
vn_decode_VkExtensionProperties_partial_temp(struct vn_cs_decoder *dec, VkExtensionProperties *val)
{
    /* skip val->extensionName */
    /* skip val->specVersion */
}

static inline void
vn_replace_VkExtensionProperties_handle(VkExtensionProperties *val)
{
    /* skip val->extensionName */
    /* skip val->specVersion */
}

/* struct VkMemoryRequirements */

static inline void
vn_encode_VkMemoryRequirements(struct vn_cs_encoder *enc, const VkMemoryRequirements *val)
{
    vn_encode_VkDeviceSize(enc, &val->size);
    vn_encode_VkDeviceSize(enc, &val->alignment);
    vn_encode_uint32_t(enc, &val->memoryTypeBits);
}

static inline void
vn_decode_VkMemoryRequirements_partial_temp(struct vn_cs_decoder *dec, VkMemoryRequirements *val)
{
    /* skip val->size */
    /* skip val->alignment */
    /* skip val->memoryTypeBits */
}

/* struct VkSparseImageFormatProperties */

static inline void
vn_encode_VkSparseImageFormatProperties(struct vn_cs_encoder *enc, const VkSparseImageFormatProperties *val)
{
    vn_encode_VkFlags(enc, &val->aspectMask);
    vn_encode_VkExtent3D(enc, &val->imageGranularity);
    vn_encode_VkFlags(enc, &val->flags);
}

static inline void
vn_decode_VkSparseImageFormatProperties_partial_temp(struct vn_cs_decoder *dec, VkSparseImageFormatProperties *val)
{
    /* skip val->aspectMask */
    vn_decode_VkExtent3D_partial_temp(dec, &val->imageGranularity);
    /* skip val->flags */
}

/* struct VkImageSubresource */

static inline void
vn_decode_VkImageSubresource_temp(struct vn_cs_decoder *dec, VkImageSubresource *val)
{
    vn_decode_VkFlags(dec, &val->aspectMask);
    vn_decode_uint32_t(dec, &val->mipLevel);
    vn_decode_uint32_t(dec, &val->arrayLayer);
}

static inline void
vn_replace_VkImageSubresource_handle(VkImageSubresource *val)
{
    /* skip val->aspectMask */
    /* skip val->mipLevel */
    /* skip val->arrayLayer */
}

/* struct VkOffset3D */

static inline void
vn_decode_VkOffset3D_temp(struct vn_cs_decoder *dec, VkOffset3D *val)
{
    vn_decode_int32_t(dec, &val->x);
    vn_decode_int32_t(dec, &val->y);
    vn_decode_int32_t(dec, &val->z);
}

static inline void
vn_replace_VkOffset3D_handle(VkOffset3D *val)
{
    /* skip val->x */
    /* skip val->y */
    /* skip val->z */
}

/* struct VkSemaphoreTypeCreateInfo chain */

static inline void *
vn_decode_VkSemaphoreTypeCreateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkSemaphoreTypeCreateInfo_self_temp(struct vn_cs_decoder *dec, VkSemaphoreTypeCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkSemaphoreType(dec, &val->semaphoreType);
    vn_decode_uint64_t(dec, &val->initialValue);
}

static inline void
vn_decode_VkSemaphoreTypeCreateInfo_temp(struct vn_cs_decoder *dec, VkSemaphoreTypeCreateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkSemaphoreTypeCreateInfo_pnext_temp(dec);
    vn_decode_VkSemaphoreTypeCreateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkSemaphoreTypeCreateInfo_handle_self(VkSemaphoreTypeCreateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->semaphoreType */
    /* skip val->initialValue */
}

static inline void
vn_replace_VkSemaphoreTypeCreateInfo_handle(VkSemaphoreTypeCreateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO:
            vn_replace_VkSemaphoreTypeCreateInfo_handle_self((VkSemaphoreTypeCreateInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkImageFormatListCreateInfo chain */

static inline void
vn_encode_VkImageFormatListCreateInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkImageFormatListCreateInfo_self(struct vn_cs_encoder *enc, const VkImageFormatListCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_uint32_t(enc, &val->viewFormatCount);
    if (val->pViewFormats) {
        vn_encode_array_size(enc, val->viewFormatCount);
        vn_encode_VkFormat_array(enc, val->pViewFormats, val->viewFormatCount);
    } else {
        vn_encode_array_size(enc, 0);
    }
}

static inline void
vn_encode_VkImageFormatListCreateInfo(struct vn_cs_encoder *enc, const VkImageFormatListCreateInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO });
    vn_encode_VkImageFormatListCreateInfo_pnext(enc, val->pNext);
    vn_encode_VkImageFormatListCreateInfo_self(enc, val);
}

static inline void *
vn_decode_VkImageFormatListCreateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkImageFormatListCreateInfo_self_temp(struct vn_cs_decoder *dec, VkImageFormatListCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_uint32_t(dec, &val->viewFormatCount);
    if (vn_peek_array_size(dec)) {
        const size_t array_size = vn_decode_array_size(dec, val->viewFormatCount);
        val->pViewFormats = vn_cs_decoder_alloc_temp(dec, sizeof(*val->pViewFormats) * array_size);
        if (!val->pViewFormats) return;
        vn_decode_VkFormat_array(dec, (VkFormat *)val->pViewFormats, array_size);
    } else {
        vn_decode_array_size(dec, val->viewFormatCount);
        val->pViewFormats = NULL;
    }
}

static inline void
vn_decode_VkImageFormatListCreateInfo_temp(struct vn_cs_decoder *dec, VkImageFormatListCreateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkImageFormatListCreateInfo_pnext_temp(dec);
    vn_decode_VkImageFormatListCreateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkImageFormatListCreateInfo_handle_self(VkImageFormatListCreateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->viewFormatCount */
    /* skip val->pViewFormats */
}

static inline void
vn_replace_VkImageFormatListCreateInfo_handle(VkImageFormatListCreateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO:
            vn_replace_VkImageFormatListCreateInfo_handle_self((VkImageFormatListCreateInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkImageStencilUsageCreateInfo chain */

static inline void
vn_encode_VkImageStencilUsageCreateInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkImageStencilUsageCreateInfo_self(struct vn_cs_encoder *enc, const VkImageStencilUsageCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_VkFlags(enc, &val->stencilUsage);
}

static inline void
vn_encode_VkImageStencilUsageCreateInfo(struct vn_cs_encoder *enc, const VkImageStencilUsageCreateInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO });
    vn_encode_VkImageStencilUsageCreateInfo_pnext(enc, val->pNext);
    vn_encode_VkImageStencilUsageCreateInfo_self(enc, val);
}

static inline void *
vn_decode_VkImageStencilUsageCreateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkImageStencilUsageCreateInfo_self_temp(struct vn_cs_decoder *dec, VkImageStencilUsageCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkFlags(dec, &val->stencilUsage);
}

static inline void
vn_decode_VkImageStencilUsageCreateInfo_temp(struct vn_cs_decoder *dec, VkImageStencilUsageCreateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkImageStencilUsageCreateInfo_pnext_temp(dec);
    vn_decode_VkImageStencilUsageCreateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkImageStencilUsageCreateInfo_handle_self(VkImageStencilUsageCreateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->stencilUsage */
}

static inline void
vn_replace_VkImageStencilUsageCreateInfo_handle(VkImageStencilUsageCreateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO:
            vn_replace_VkImageStencilUsageCreateInfo_handle_self((VkImageStencilUsageCreateInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkComponentMapping */

static inline void
vn_encode_VkComponentMapping(struct vn_cs_encoder *enc, const VkComponentMapping *val)
{
    vn_encode_VkComponentSwizzle(enc, &val->r);
    vn_encode_VkComponentSwizzle(enc, &val->g);
    vn_encode_VkComponentSwizzle(enc, &val->b);
    vn_encode_VkComponentSwizzle(enc, &val->a);
}

static inline void
vn_decode_VkComponentMapping_temp(struct vn_cs_decoder *dec, VkComponentMapping *val)
{
    vn_decode_VkComponentSwizzle(dec, &val->r);
    vn_decode_VkComponentSwizzle(dec, &val->g);
    vn_decode_VkComponentSwizzle(dec, &val->b);
    vn_decode_VkComponentSwizzle(dec, &val->a);
}

static inline void
vn_decode_VkComponentMapping_partial_temp(struct vn_cs_decoder *dec, VkComponentMapping *val)
{
    /* skip val->r */
    /* skip val->g */
    /* skip val->b */
    /* skip val->a */
}

static inline void
vn_replace_VkComponentMapping_handle(VkComponentMapping *val)
{
    /* skip val->r */
    /* skip val->g */
    /* skip val->b */
    /* skip val->a */
}

/* struct VkImageSubresourceRange */

static inline void
vn_decode_VkImageSubresourceRange_temp(struct vn_cs_decoder *dec, VkImageSubresourceRange *val)
{
    vn_decode_VkFlags(dec, &val->aspectMask);
    vn_decode_uint32_t(dec, &val->baseMipLevel);
    vn_decode_uint32_t(dec, &val->levelCount);
    vn_decode_uint32_t(dec, &val->baseArrayLayer);
    vn_decode_uint32_t(dec, &val->layerCount);
}

static inline void
vn_replace_VkImageSubresourceRange_handle(VkImageSubresourceRange *val)
{
    /* skip val->aspectMask */
    /* skip val->baseMipLevel */
    /* skip val->levelCount */
    /* skip val->baseArrayLayer */
    /* skip val->layerCount */
}

/* struct VkSamplerYcbcrConversionInfo chain */

static inline void *
vn_decode_VkSamplerYcbcrConversionInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkSamplerYcbcrConversionInfo_self_temp(struct vn_cs_decoder *dec, VkSamplerYcbcrConversionInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkSamplerYcbcrConversion_lookup(dec, &val->conversion);
}

static inline void
vn_decode_VkSamplerYcbcrConversionInfo_temp(struct vn_cs_decoder *dec, VkSamplerYcbcrConversionInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkSamplerYcbcrConversionInfo_pnext_temp(dec);
    vn_decode_VkSamplerYcbcrConversionInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkSamplerYcbcrConversionInfo_handle_self(VkSamplerYcbcrConversionInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    vn_replace_VkSamplerYcbcrConversion_handle(&val->conversion);
}

static inline void
vn_replace_VkSamplerYcbcrConversionInfo_handle(VkSamplerYcbcrConversionInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            vn_replace_VkSamplerYcbcrConversionInfo_handle_self((VkSamplerYcbcrConversionInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkViewport */

static inline void
vn_encode_VkViewport(struct vn_cs_encoder *enc, const VkViewport *val)
{
    vn_encode_float(enc, &val->x);
    vn_encode_float(enc, &val->y);
    vn_encode_float(enc, &val->width);
    vn_encode_float(enc, &val->height);
    vn_encode_float(enc, &val->minDepth);
    vn_encode_float(enc, &val->maxDepth);
}

static inline void
vn_decode_VkViewport_temp(struct vn_cs_decoder *dec, VkViewport *val)
{
    vn_decode_float(dec, &val->x);
    vn_decode_float(dec, &val->y);
    vn_decode_float(dec, &val->width);
    vn_decode_float(dec, &val->height);
    vn_decode_float(dec, &val->minDepth);
    vn_decode_float(dec, &val->maxDepth);
}

static inline void
vn_replace_VkViewport_handle(VkViewport *val)
{
    /* skip val->x */
    /* skip val->y */
    /* skip val->width */
    /* skip val->height */
    /* skip val->minDepth */
    /* skip val->maxDepth */
}

/* struct VkOffset2D */

static inline void
vn_encode_VkOffset2D(struct vn_cs_encoder *enc, const VkOffset2D *val)
{
    vn_encode_int32_t(enc, &val->x);
    vn_encode_int32_t(enc, &val->y);
}

static inline void
vn_decode_VkOffset2D_temp(struct vn_cs_decoder *dec, VkOffset2D *val)
{
    vn_decode_int32_t(dec, &val->x);
    vn_decode_int32_t(dec, &val->y);
}

static inline void
vn_decode_VkOffset2D_partial_temp(struct vn_cs_decoder *dec, VkOffset2D *val)
{
    /* skip val->x */
    /* skip val->y */
}

static inline void
vn_replace_VkOffset2D_handle(VkOffset2D *val)
{
    /* skip val->x */
    /* skip val->y */
}

/* struct VkExtent2D */

static inline void
vn_encode_VkExtent2D(struct vn_cs_encoder *enc, const VkExtent2D *val)
{
    vn_encode_uint32_t(enc, &val->width);
    vn_encode_uint32_t(enc, &val->height);
}

static inline void
vn_decode_VkExtent2D_temp(struct vn_cs_decoder *dec, VkExtent2D *val)
{
    vn_decode_uint32_t(dec, &val->width);
    vn_decode_uint32_t(dec, &val->height);
}

static inline void
vn_decode_VkExtent2D_partial_temp(struct vn_cs_decoder *dec, VkExtent2D *val)
{
    /* skip val->width */
    /* skip val->height */
}

static inline void
vn_replace_VkExtent2D_handle(VkExtent2D *val)
{
    /* skip val->width */
    /* skip val->height */
}

/* struct VkRect2D */

static inline void
vn_encode_VkRect2D(struct vn_cs_encoder *enc, const VkRect2D *val)
{
    vn_encode_VkOffset2D(enc, &val->offset);
    vn_encode_VkExtent2D(enc, &val->extent);
}

static inline void
vn_decode_VkRect2D_temp(struct vn_cs_decoder *dec, VkRect2D *val)
{
    vn_decode_VkOffset2D_temp(dec, &val->offset);
    vn_decode_VkExtent2D_temp(dec, &val->extent);
}

static inline void
vn_decode_VkRect2D_partial_temp(struct vn_cs_decoder *dec, VkRect2D *val)
{
    vn_decode_VkOffset2D_partial_temp(dec, &val->offset);
    vn_decode_VkExtent2D_partial_temp(dec, &val->extent);
}

static inline void
vn_replace_VkRect2D_handle(VkRect2D *val)
{
    vn_replace_VkOffset2D_handle(&val->offset);
    vn_replace_VkExtent2D_handle(&val->extent);
}

/* union VkClearColorValue */

static inline void
vn_decode_VkClearColorValue_temp(struct vn_cs_decoder *dec, VkClearColorValue *val)
{
    uint32_t tag;
    vn_decode_uint32_t(dec, &tag);
    switch (tag) {
    case 0:
        {
        const size_t array_size = vn_decode_array_size(dec, 4);
        vn_decode_float_array(dec, val->float32, array_size);
    }
        break;
    case 1:
        {
        const size_t array_size = vn_decode_array_size(dec, 4);
        vn_decode_int32_t_array(dec, val->int32, array_size);
    }
        break;
    case 2:
        {
        const size_t array_size = vn_decode_array_size(dec, 4);
        vn_decode_uint32_t_array(dec, val->uint32, array_size);
    }
        break;
    default:
        vn_cs_decoder_set_fatal(dec);
        break;
    }
}

/* struct VkMemoryDedicatedRequirements chain */

static inline void
vn_encode_VkMemoryDedicatedRequirements_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkMemoryDedicatedRequirements_self(struct vn_cs_encoder *enc, const VkMemoryDedicatedRequirements *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_VkBool32(enc, &val->prefersDedicatedAllocation);
    vn_encode_VkBool32(enc, &val->requiresDedicatedAllocation);
}

static inline void
vn_encode_VkMemoryDedicatedRequirements(struct vn_cs_encoder *enc, const VkMemoryDedicatedRequirements *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS });
    vn_encode_VkMemoryDedicatedRequirements_pnext(enc, val->pNext);
    vn_encode_VkMemoryDedicatedRequirements_self(enc, val);
}

static inline void *
vn_decode_VkMemoryDedicatedRequirements_pnext_partial_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkMemoryDedicatedRequirements_self_partial_temp(struct vn_cs_decoder *dec, VkMemoryDedicatedRequirements *val)
{
    /* skip val->{sType,pNext} */
    /* skip val->prefersDedicatedAllocation */
    /* skip val->requiresDedicatedAllocation */
}

static inline void
vn_decode_VkMemoryDedicatedRequirements_partial_temp(struct vn_cs_decoder *dec, VkMemoryDedicatedRequirements *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkMemoryDedicatedRequirements_pnext_partial_temp(dec);
    vn_decode_VkMemoryDedicatedRequirements_self_partial_temp(dec, val);
}

/* struct VkMemoryRequirements2 chain */

static inline void
vn_encode_VkMemoryRequirements2_pnext(struct vn_cs_encoder *enc, const void *val)
{
    const VkBaseInStructure *pnext = val;

    while (pnext) {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
            vn_encode_simple_pointer(enc, pnext);
            vn_encode_VkStructureType(enc, &pnext->sType);
            vn_encode_VkMemoryRequirements2_pnext(enc, pnext->pNext);
            vn_encode_VkMemoryDedicatedRequirements_self(enc, (const VkMemoryDedicatedRequirements *)pnext);
            return;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    }

    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkMemoryRequirements2_self(struct vn_cs_encoder *enc, const VkMemoryRequirements2 *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_VkMemoryRequirements(enc, &val->memoryRequirements);
}

static inline void
vn_encode_VkMemoryRequirements2(struct vn_cs_encoder *enc, const VkMemoryRequirements2 *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2 });
    vn_encode_VkMemoryRequirements2_pnext(enc, val->pNext);
    vn_encode_VkMemoryRequirements2_self(enc, val);
}

static inline void *
vn_decode_VkMemoryRequirements2_pnext_partial_temp(struct vn_cs_decoder *dec)
{
    VkBaseOutStructure *pnext;
    VkStructureType stype;

    if (!vn_decode_simple_pointer(dec))
        return NULL;

    vn_decode_VkStructureType(dec, &stype);
    switch ((int32_t)stype) {
    case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkMemoryDedicatedRequirements));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkMemoryRequirements2_pnext_partial_temp(dec);
            vn_decode_VkMemoryDedicatedRequirements_self_partial_temp(dec, (VkMemoryDedicatedRequirements *)pnext);
        }
        break;
    default:
        /* unexpected struct */
        pnext = NULL;
        vn_cs_decoder_set_fatal(dec);
        break;
    }

    return pnext;
}

static inline void
vn_decode_VkMemoryRequirements2_self_partial_temp(struct vn_cs_decoder *dec, VkMemoryRequirements2 *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkMemoryRequirements_partial_temp(dec, &val->memoryRequirements);
}

static inline void
vn_decode_VkMemoryRequirements2_partial_temp(struct vn_cs_decoder *dec, VkMemoryRequirements2 *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkMemoryRequirements2_pnext_partial_temp(dec);
    vn_decode_VkMemoryRequirements2_self_partial_temp(dec, val);
}

/* struct VkMemoryBarrier2 chain */

static inline void *
vn_decode_VkMemoryBarrier2_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkMemoryBarrier2_self_temp(struct vn_cs_decoder *dec, VkMemoryBarrier2 *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkFlags64(dec, &val->srcStageMask);
    vn_decode_VkFlags64(dec, &val->srcAccessMask);
    vn_decode_VkFlags64(dec, &val->dstStageMask);
    vn_decode_VkFlags64(dec, &val->dstAccessMask);
}

static inline void
vn_decode_VkMemoryBarrier2_temp(struct vn_cs_decoder *dec, VkMemoryBarrier2 *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_MEMORY_BARRIER_2)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkMemoryBarrier2_pnext_temp(dec);
    vn_decode_VkMemoryBarrier2_self_temp(dec, val);
}

static inline void
vn_replace_VkMemoryBarrier2_handle_self(VkMemoryBarrier2 *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->srcStageMask */
    /* skip val->srcAccessMask */
    /* skip val->dstStageMask */
    /* skip val->dstAccessMask */
}

static inline void
vn_replace_VkMemoryBarrier2_handle(VkMemoryBarrier2 *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER_2:
            vn_replace_VkMemoryBarrier2_handle_self((VkMemoryBarrier2 *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

#pragma GCC diagnostic pop

#endif /* VN_PROTOCOL_RENDERER_STRUCTS_H */
