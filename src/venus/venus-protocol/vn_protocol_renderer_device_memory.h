/* This file is generated by venus-protocol.  See vn_protocol_renderer.h. */

/*
 * Copyright 2020 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef VN_PROTOCOL_RENDERER_DEVICE_MEMORY_H
#define VN_PROTOCOL_RENDERER_DEVICE_MEMORY_H

#include "vn_protocol_renderer_structs.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpointer-arith"
#pragma GCC diagnostic ignored "-Wunused-parameter"

/*
 * These structs/unions/commands are not included
 *
 *   VkImportMemoryFdInfoKHR
 *   vkMapMemory
 */

/* struct VkExportMemoryAllocateInfo chain */

static inline void *
vn_decode_VkExportMemoryAllocateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkExportMemoryAllocateInfo_self_temp(struct vn_cs_decoder *dec, VkExportMemoryAllocateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkFlags(dec, &val->handleTypes);
}

static inline void
vn_decode_VkExportMemoryAllocateInfo_temp(struct vn_cs_decoder *dec, VkExportMemoryAllocateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkExportMemoryAllocateInfo_pnext_temp(dec);
    vn_decode_VkExportMemoryAllocateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkExportMemoryAllocateInfo_handle_self(VkExportMemoryAllocateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->handleTypes */
}

static inline void
vn_replace_VkExportMemoryAllocateInfo_handle(VkExportMemoryAllocateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
            vn_replace_VkExportMemoryAllocateInfo_handle_self((VkExportMemoryAllocateInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkMemoryAllocateFlagsInfo chain */

static inline void *
vn_decode_VkMemoryAllocateFlagsInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkMemoryAllocateFlagsInfo_self_temp(struct vn_cs_decoder *dec, VkMemoryAllocateFlagsInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkFlags(dec, &val->flags);
    vn_decode_uint32_t(dec, &val->deviceMask);
}

static inline void
vn_decode_VkMemoryAllocateFlagsInfo_temp(struct vn_cs_decoder *dec, VkMemoryAllocateFlagsInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkMemoryAllocateFlagsInfo_pnext_temp(dec);
    vn_decode_VkMemoryAllocateFlagsInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkMemoryAllocateFlagsInfo_handle_self(VkMemoryAllocateFlagsInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->flags */
    /* skip val->deviceMask */
}

static inline void
vn_replace_VkMemoryAllocateFlagsInfo_handle(VkMemoryAllocateFlagsInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
            vn_replace_VkMemoryAllocateFlagsInfo_handle_self((VkMemoryAllocateFlagsInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkMemoryDedicatedAllocateInfo chain */

static inline void *
vn_decode_VkMemoryDedicatedAllocateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkMemoryDedicatedAllocateInfo_self_temp(struct vn_cs_decoder *dec, VkMemoryDedicatedAllocateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkImage_lookup(dec, &val->image);
    vn_decode_VkBuffer_lookup(dec, &val->buffer);
}

static inline void
vn_decode_VkMemoryDedicatedAllocateInfo_temp(struct vn_cs_decoder *dec, VkMemoryDedicatedAllocateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkMemoryDedicatedAllocateInfo_pnext_temp(dec);
    vn_decode_VkMemoryDedicatedAllocateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkMemoryDedicatedAllocateInfo_handle_self(VkMemoryDedicatedAllocateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    vn_replace_VkImage_handle(&val->image);
    vn_replace_VkBuffer_handle(&val->buffer);
}

static inline void
vn_replace_VkMemoryDedicatedAllocateInfo_handle(VkMemoryDedicatedAllocateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
            vn_replace_VkMemoryDedicatedAllocateInfo_handle_self((VkMemoryDedicatedAllocateInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkMemoryOpaqueCaptureAddressAllocateInfo chain */

static inline void *
vn_decode_VkMemoryOpaqueCaptureAddressAllocateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkMemoryOpaqueCaptureAddressAllocateInfo_self_temp(struct vn_cs_decoder *dec, VkMemoryOpaqueCaptureAddressAllocateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_uint64_t(dec, &val->opaqueCaptureAddress);
}

static inline void
vn_decode_VkMemoryOpaqueCaptureAddressAllocateInfo_temp(struct vn_cs_decoder *dec, VkMemoryOpaqueCaptureAddressAllocateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkMemoryOpaqueCaptureAddressAllocateInfo_pnext_temp(dec);
    vn_decode_VkMemoryOpaqueCaptureAddressAllocateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkMemoryOpaqueCaptureAddressAllocateInfo_handle_self(VkMemoryOpaqueCaptureAddressAllocateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->opaqueCaptureAddress */
}

static inline void
vn_replace_VkMemoryOpaqueCaptureAddressAllocateInfo_handle(VkMemoryOpaqueCaptureAddressAllocateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO:
            vn_replace_VkMemoryOpaqueCaptureAddressAllocateInfo_handle_self((VkMemoryOpaqueCaptureAddressAllocateInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkImportMemoryResourceInfoMESA chain */

static inline void *
vn_decode_VkImportMemoryResourceInfoMESA_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkImportMemoryResourceInfoMESA_self_temp(struct vn_cs_decoder *dec, VkImportMemoryResourceInfoMESA *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_uint32_t(dec, &val->resourceId);
}

static inline void
vn_decode_VkImportMemoryResourceInfoMESA_temp(struct vn_cs_decoder *dec, VkImportMemoryResourceInfoMESA *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_IMPORT_MEMORY_RESOURCE_INFO_MESA)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkImportMemoryResourceInfoMESA_pnext_temp(dec);
    vn_decode_VkImportMemoryResourceInfoMESA_self_temp(dec, val);
}

static inline void
vn_replace_VkImportMemoryResourceInfoMESA_handle_self(VkImportMemoryResourceInfoMESA *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->resourceId */
}

static inline void
vn_replace_VkImportMemoryResourceInfoMESA_handle(VkImportMemoryResourceInfoMESA *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_RESOURCE_INFO_MESA:
            vn_replace_VkImportMemoryResourceInfoMESA_handle_self((VkImportMemoryResourceInfoMESA *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkMemoryAllocateInfo chain */

static inline void *
vn_decode_VkMemoryAllocateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    VkBaseOutStructure *pnext;
    VkStructureType stype;

    if (!vn_decode_simple_pointer(dec))
        return NULL;

    vn_decode_VkStructureType(dec, &stype);
    switch ((int32_t)stype) {
    case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkExportMemoryAllocateInfo));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkMemoryAllocateInfo_pnext_temp(dec);
            vn_decode_VkExportMemoryAllocateInfo_self_temp(dec, (VkExportMemoryAllocateInfo *)pnext);
        }
        break;
    case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkMemoryAllocateFlagsInfo));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkMemoryAllocateInfo_pnext_temp(dec);
            vn_decode_VkMemoryAllocateFlagsInfo_self_temp(dec, (VkMemoryAllocateFlagsInfo *)pnext);
        }
        break;
    case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkMemoryDedicatedAllocateInfo));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkMemoryAllocateInfo_pnext_temp(dec);
            vn_decode_VkMemoryDedicatedAllocateInfo_self_temp(dec, (VkMemoryDedicatedAllocateInfo *)pnext);
        }
        break;
    case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkMemoryOpaqueCaptureAddressAllocateInfo));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkMemoryAllocateInfo_pnext_temp(dec);
            vn_decode_VkMemoryOpaqueCaptureAddressAllocateInfo_self_temp(dec, (VkMemoryOpaqueCaptureAddressAllocateInfo *)pnext);
        }
        break;
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_RESOURCE_INFO_MESA:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkImportMemoryResourceInfoMESA));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkMemoryAllocateInfo_pnext_temp(dec);
            vn_decode_VkImportMemoryResourceInfoMESA_self_temp(dec, (VkImportMemoryResourceInfoMESA *)pnext);
        }
        break;
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
    default:
        /* unexpected struct */
        pnext = NULL;
        vn_cs_decoder_set_fatal(dec);
        break;
    }

    return pnext;
}

static inline void
vn_decode_VkMemoryAllocateInfo_self_temp(struct vn_cs_decoder *dec, VkMemoryAllocateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkDeviceSize(dec, &val->allocationSize);
    vn_decode_uint32_t(dec, &val->memoryTypeIndex);
}

static inline void
vn_decode_VkMemoryAllocateInfo_temp(struct vn_cs_decoder *dec, VkMemoryAllocateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkMemoryAllocateInfo_pnext_temp(dec);
    vn_decode_VkMemoryAllocateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkMemoryAllocateInfo_handle_self(VkMemoryAllocateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->allocationSize */
    /* skip val->memoryTypeIndex */
}

static inline void
vn_replace_VkMemoryAllocateInfo_handle(VkMemoryAllocateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO:
            vn_replace_VkMemoryAllocateInfo_handle_self((VkMemoryAllocateInfo *)pnext);
            break;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
            vn_replace_VkExportMemoryAllocateInfo_handle_self((VkExportMemoryAllocateInfo *)pnext);
            break;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
            vn_replace_VkMemoryAllocateFlagsInfo_handle_self((VkMemoryAllocateFlagsInfo *)pnext);
            break;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
            vn_replace_VkMemoryDedicatedAllocateInfo_handle_self((VkMemoryDedicatedAllocateInfo *)pnext);
            break;
        case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO:
            vn_replace_VkMemoryOpaqueCaptureAddressAllocateInfo_handle_self((VkMemoryOpaqueCaptureAddressAllocateInfo *)pnext);
            break;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_RESOURCE_INFO_MESA:
            vn_replace_VkImportMemoryResourceInfoMESA_handle_self((VkImportMemoryResourceInfoMESA *)pnext);
            break;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkMappedMemoryRange chain */

static inline void
vn_encode_VkMappedMemoryRange_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkMappedMemoryRange_self(struct vn_cs_encoder *enc, const VkMappedMemoryRange *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_VkDeviceMemory(enc, &val->memory);
    vn_encode_VkDeviceSize(enc, &val->offset);
    vn_encode_VkDeviceSize(enc, &val->size);
}

static inline void
vn_encode_VkMappedMemoryRange(struct vn_cs_encoder *enc, const VkMappedMemoryRange *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE });
    vn_encode_VkMappedMemoryRange_pnext(enc, val->pNext);
    vn_encode_VkMappedMemoryRange_self(enc, val);
}

static inline void *
vn_decode_VkMappedMemoryRange_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkMappedMemoryRange_self_temp(struct vn_cs_decoder *dec, VkMappedMemoryRange *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkDeviceMemory_lookup(dec, &val->memory);
    vn_decode_VkDeviceSize(dec, &val->offset);
    vn_decode_VkDeviceSize(dec, &val->size);
}

static inline void
vn_decode_VkMappedMemoryRange_temp(struct vn_cs_decoder *dec, VkMappedMemoryRange *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkMappedMemoryRange_pnext_temp(dec);
    vn_decode_VkMappedMemoryRange_self_temp(dec, val);
}

static inline void
vn_replace_VkMappedMemoryRange_handle_self(VkMappedMemoryRange *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    vn_replace_VkDeviceMemory_handle(&val->memory);
    /* skip val->offset */
    /* skip val->size */
}

static inline void
vn_replace_VkMappedMemoryRange_handle(VkMappedMemoryRange *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE:
            vn_replace_VkMappedMemoryRange_handle_self((VkMappedMemoryRange *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkDeviceMemoryOpaqueCaptureAddressInfo chain */

static inline void
vn_encode_VkDeviceMemoryOpaqueCaptureAddressInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkDeviceMemoryOpaqueCaptureAddressInfo_self(struct vn_cs_encoder *enc, const VkDeviceMemoryOpaqueCaptureAddressInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_VkDeviceMemory(enc, &val->memory);
}

static inline void
vn_encode_VkDeviceMemoryOpaqueCaptureAddressInfo(struct vn_cs_encoder *enc, const VkDeviceMemoryOpaqueCaptureAddressInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO });
    vn_encode_VkDeviceMemoryOpaqueCaptureAddressInfo_pnext(enc, val->pNext);
    vn_encode_VkDeviceMemoryOpaqueCaptureAddressInfo_self(enc, val);
}

static inline void *
vn_decode_VkDeviceMemoryOpaqueCaptureAddressInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkDeviceMemoryOpaqueCaptureAddressInfo_self_temp(struct vn_cs_decoder *dec, VkDeviceMemoryOpaqueCaptureAddressInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkDeviceMemory_lookup(dec, &val->memory);
}

static inline void
vn_decode_VkDeviceMemoryOpaqueCaptureAddressInfo_temp(struct vn_cs_decoder *dec, VkDeviceMemoryOpaqueCaptureAddressInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkDeviceMemoryOpaqueCaptureAddressInfo_pnext_temp(dec);
    vn_decode_VkDeviceMemoryOpaqueCaptureAddressInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkDeviceMemoryOpaqueCaptureAddressInfo_handle_self(VkDeviceMemoryOpaqueCaptureAddressInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    vn_replace_VkDeviceMemory_handle(&val->memory);
}

static inline void
vn_replace_VkDeviceMemoryOpaqueCaptureAddressInfo_handle(VkDeviceMemoryOpaqueCaptureAddressInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO:
            vn_replace_VkDeviceMemoryOpaqueCaptureAddressInfo_handle_self((VkDeviceMemoryOpaqueCaptureAddressInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

static inline void vn_decode_vkAllocateMemory_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkAllocateMemory *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    if (vn_decode_simple_pointer(dec)) {
        args->pAllocateInfo = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pAllocateInfo));
        if (!args->pAllocateInfo) return;
        vn_decode_VkMemoryAllocateInfo_temp(dec, (VkMemoryAllocateInfo *)args->pAllocateInfo);
    } else {
        args->pAllocateInfo = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
    if (vn_decode_simple_pointer(dec)) {
        vn_cs_decoder_set_fatal(dec);
    } else {
        args->pAllocator = NULL;
    }
    if (vn_decode_simple_pointer(dec)) {
        args->pMemory = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pMemory));
        if (!args->pMemory) return;
        vn_decode_VkDeviceMemory(dec, args->pMemory);
    } else {
        args->pMemory = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
}

static inline void vn_replace_vkAllocateMemory_args_handle(struct vn_command_vkAllocateMemory *args)
{
    vn_replace_VkDevice_handle(&args->device);
    if (args->pAllocateInfo)
        vn_replace_VkMemoryAllocateInfo_handle((VkMemoryAllocateInfo *)args->pAllocateInfo);
    /* skip args->pAllocator */
    /* skip args->pMemory */
}

static inline void vn_encode_vkAllocateMemory_reply(struct vn_cs_encoder *enc, const struct vn_command_vkAllocateMemory *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkAllocateMemory_EXT});

    vn_encode_VkResult(enc, &args->ret);
    /* skip args->device */
    /* skip args->pAllocateInfo */
    /* skip args->pAllocator */
    if (vn_encode_simple_pointer(enc, args->pMemory))
        vn_encode_VkDeviceMemory(enc, args->pMemory);
}

static inline void vn_decode_vkFreeMemory_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkFreeMemory *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    vn_decode_VkDeviceMemory_lookup(dec, &args->memory);
    if (vn_decode_simple_pointer(dec)) {
        vn_cs_decoder_set_fatal(dec);
    } else {
        args->pAllocator = NULL;
    }
}

static inline void vn_replace_vkFreeMemory_args_handle(struct vn_command_vkFreeMemory *args)
{
    vn_replace_VkDevice_handle(&args->device);
    vn_replace_VkDeviceMemory_handle(&args->memory);
    /* skip args->pAllocator */
}

static inline void vn_encode_vkFreeMemory_reply(struct vn_cs_encoder *enc, const struct vn_command_vkFreeMemory *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkFreeMemory_EXT});

    /* skip args->device */
    /* skip args->memory */
    /* skip args->pAllocator */
}

static inline void vn_decode_vkUnmapMemory_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkUnmapMemory *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    vn_decode_VkDeviceMemory_lookup(dec, &args->memory);
}

static inline void vn_replace_vkUnmapMemory_args_handle(struct vn_command_vkUnmapMemory *args)
{
    vn_replace_VkDevice_handle(&args->device);
    vn_replace_VkDeviceMemory_handle(&args->memory);
}

static inline void vn_encode_vkUnmapMemory_reply(struct vn_cs_encoder *enc, const struct vn_command_vkUnmapMemory *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkUnmapMemory_EXT});

    /* skip args->device */
    /* skip args->memory */
}

static inline void vn_decode_vkFlushMappedMemoryRanges_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkFlushMappedMemoryRanges *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    vn_decode_uint32_t(dec, &args->memoryRangeCount);
    if (vn_peek_array_size(dec)) {
        const uint32_t iter_count = vn_decode_array_size(dec, args->memoryRangeCount);
        args->pMemoryRanges = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pMemoryRanges) * iter_count);
        if (!args->pMemoryRanges) return;
        for (uint32_t i = 0; i < iter_count; i++)
            vn_decode_VkMappedMemoryRange_temp(dec, &((VkMappedMemoryRange *)args->pMemoryRanges)[i]);
    } else {
        vn_decode_array_size(dec, args->memoryRangeCount);
        args->pMemoryRanges = NULL;
    }
}

static inline void vn_replace_vkFlushMappedMemoryRanges_args_handle(struct vn_command_vkFlushMappedMemoryRanges *args)
{
    vn_replace_VkDevice_handle(&args->device);
    /* skip args->memoryRangeCount */
    if (args->pMemoryRanges) {
       for (uint32_t i = 0; i < args->memoryRangeCount; i++)
            vn_replace_VkMappedMemoryRange_handle(&((VkMappedMemoryRange *)args->pMemoryRanges)[i]);
    }
}

static inline void vn_encode_vkFlushMappedMemoryRanges_reply(struct vn_cs_encoder *enc, const struct vn_command_vkFlushMappedMemoryRanges *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkFlushMappedMemoryRanges_EXT});

    vn_encode_VkResult(enc, &args->ret);
    /* skip args->device */
    /* skip args->memoryRangeCount */
    /* skip args->pMemoryRanges */
}

static inline void vn_decode_vkInvalidateMappedMemoryRanges_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkInvalidateMappedMemoryRanges *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    vn_decode_uint32_t(dec, &args->memoryRangeCount);
    if (vn_peek_array_size(dec)) {
        const uint32_t iter_count = vn_decode_array_size(dec, args->memoryRangeCount);
        args->pMemoryRanges = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pMemoryRanges) * iter_count);
        if (!args->pMemoryRanges) return;
        for (uint32_t i = 0; i < iter_count; i++)
            vn_decode_VkMappedMemoryRange_temp(dec, &((VkMappedMemoryRange *)args->pMemoryRanges)[i]);
    } else {
        vn_decode_array_size(dec, args->memoryRangeCount);
        args->pMemoryRanges = NULL;
    }
}

static inline void vn_replace_vkInvalidateMappedMemoryRanges_args_handle(struct vn_command_vkInvalidateMappedMemoryRanges *args)
{
    vn_replace_VkDevice_handle(&args->device);
    /* skip args->memoryRangeCount */
    if (args->pMemoryRanges) {
       for (uint32_t i = 0; i < args->memoryRangeCount; i++)
            vn_replace_VkMappedMemoryRange_handle(&((VkMappedMemoryRange *)args->pMemoryRanges)[i]);
    }
}

static inline void vn_encode_vkInvalidateMappedMemoryRanges_reply(struct vn_cs_encoder *enc, const struct vn_command_vkInvalidateMappedMemoryRanges *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkInvalidateMappedMemoryRanges_EXT});

    vn_encode_VkResult(enc, &args->ret);
    /* skip args->device */
    /* skip args->memoryRangeCount */
    /* skip args->pMemoryRanges */
}

static inline void vn_decode_vkGetDeviceMemoryCommitment_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkGetDeviceMemoryCommitment *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    vn_decode_VkDeviceMemory_lookup(dec, &args->memory);
    if (vn_decode_simple_pointer(dec)) {
        args->pCommittedMemoryInBytes = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pCommittedMemoryInBytes));
        if (!args->pCommittedMemoryInBytes) return;
    } else {
        args->pCommittedMemoryInBytes = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
}

static inline void vn_replace_vkGetDeviceMemoryCommitment_args_handle(struct vn_command_vkGetDeviceMemoryCommitment *args)
{
    vn_replace_VkDevice_handle(&args->device);
    vn_replace_VkDeviceMemory_handle(&args->memory);
    /* skip args->pCommittedMemoryInBytes */
}

static inline void vn_encode_vkGetDeviceMemoryCommitment_reply(struct vn_cs_encoder *enc, const struct vn_command_vkGetDeviceMemoryCommitment *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkGetDeviceMemoryCommitment_EXT});

    /* skip args->device */
    /* skip args->memory */
    if (vn_encode_simple_pointer(enc, args->pCommittedMemoryInBytes))
        vn_encode_VkDeviceSize(enc, args->pCommittedMemoryInBytes);
}

static inline void vn_decode_vkGetDeviceMemoryOpaqueCaptureAddress_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkGetDeviceMemoryOpaqueCaptureAddress *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    if (vn_decode_simple_pointer(dec)) {
        args->pInfo = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pInfo));
        if (!args->pInfo) return;
        vn_decode_VkDeviceMemoryOpaqueCaptureAddressInfo_temp(dec, (VkDeviceMemoryOpaqueCaptureAddressInfo *)args->pInfo);
    } else {
        args->pInfo = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
}

static inline void vn_replace_vkGetDeviceMemoryOpaqueCaptureAddress_args_handle(struct vn_command_vkGetDeviceMemoryOpaqueCaptureAddress *args)
{
    vn_replace_VkDevice_handle(&args->device);
    if (args->pInfo)
        vn_replace_VkDeviceMemoryOpaqueCaptureAddressInfo_handle((VkDeviceMemoryOpaqueCaptureAddressInfo *)args->pInfo);
}

static inline void vn_encode_vkGetDeviceMemoryOpaqueCaptureAddress_reply(struct vn_cs_encoder *enc, const struct vn_command_vkGetDeviceMemoryOpaqueCaptureAddress *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkGetDeviceMemoryOpaqueCaptureAddress_EXT});

    vn_encode_uint64_t(enc, &args->ret);
    /* skip args->device */
    /* skip args->pInfo */
}

static inline void vn_dispatch_vkAllocateMemory(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkAllocateMemory args;

    if (!ctx->dispatch_vkAllocateMemory) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkAllocateMemory_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkAllocateMemory(ctx, &args);

#ifdef DEBUG
    if (!vn_cs_decoder_get_fatal(ctx->decoder) && vn_dispatch_should_log_result(args.ret))
        vn_dispatch_debug_log(ctx, "vkAllocateMemory returned %d", args.ret);
#endif

    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkAllocateMemory_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkFreeMemory(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkFreeMemory args;

    if (!ctx->dispatch_vkFreeMemory) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkFreeMemory_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkFreeMemory(ctx, &args);


    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkFreeMemory_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkUnmapMemory(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkUnmapMemory args;

    if (!ctx->dispatch_vkUnmapMemory) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkUnmapMemory_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkUnmapMemory(ctx, &args);


    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkUnmapMemory_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkFlushMappedMemoryRanges(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkFlushMappedMemoryRanges args;

    if (!ctx->dispatch_vkFlushMappedMemoryRanges) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkFlushMappedMemoryRanges_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkFlushMappedMemoryRanges(ctx, &args);

#ifdef DEBUG
    if (!vn_cs_decoder_get_fatal(ctx->decoder) && vn_dispatch_should_log_result(args.ret))
        vn_dispatch_debug_log(ctx, "vkFlushMappedMemoryRanges returned %d", args.ret);
#endif

    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkFlushMappedMemoryRanges_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkInvalidateMappedMemoryRanges(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkInvalidateMappedMemoryRanges args;

    if (!ctx->dispatch_vkInvalidateMappedMemoryRanges) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkInvalidateMappedMemoryRanges_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkInvalidateMappedMemoryRanges(ctx, &args);

#ifdef DEBUG
    if (!vn_cs_decoder_get_fatal(ctx->decoder) && vn_dispatch_should_log_result(args.ret))
        vn_dispatch_debug_log(ctx, "vkInvalidateMappedMemoryRanges returned %d", args.ret);
#endif

    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkInvalidateMappedMemoryRanges_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkGetDeviceMemoryCommitment(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkGetDeviceMemoryCommitment args;

    if (!ctx->dispatch_vkGetDeviceMemoryCommitment) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkGetDeviceMemoryCommitment_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkGetDeviceMemoryCommitment(ctx, &args);


    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkGetDeviceMemoryCommitment_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkGetDeviceMemoryOpaqueCaptureAddress(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkGetDeviceMemoryOpaqueCaptureAddress args;

    if (!ctx->dispatch_vkGetDeviceMemoryOpaqueCaptureAddress) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkGetDeviceMemoryOpaqueCaptureAddress_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkGetDeviceMemoryOpaqueCaptureAddress(ctx, &args);


    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkGetDeviceMemoryOpaqueCaptureAddress_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

#pragma GCC diagnostic pop

#endif /* VN_PROTOCOL_RENDERER_DEVICE_MEMORY_H */