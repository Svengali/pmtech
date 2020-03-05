// renderer_definitions.h
// Copyright 2014 - 2019 Alex Dixon.
// License: https://github.com/polymonster/pmtech/blob/master/license.md

#ifndef _renderer_definitions_h
#define _renderer_definitions_h

#include <d3d11_1.h>

enum clear_flags
{
    PEN_CLEAR_COLOUR_BUFFER = 1 << 0,
    PEN_CLEAR_DEPTH_BUFFER = 1 << 1,
    PEN_CLEAR_STENCIL_BUFFER = 1 << 2
};

enum shader_type
{
    PEN_SHADER_TYPE_VS,
    PEN_SHADER_TYPE_PS,
    PEN_SHADER_TYPE_GS,
    PEN_SHADER_TYPE_SO,
    PEN_SHADER_TYPE_CS
};

enum raster_state
{
    PEN_FILL_SOLID,
    PEN_FILL_WIREFRAME
};

enum cull_mode
{
    PEN_CULL_NONE,
    PEN_CULL_FRONT,
    PEN_CULL_BACK
};

enum default_targets : s32
{
    PEN_NULL_COLOUR_BUFFER = 0,
    PEN_NULL_DEPTH_BUFFER = 0,
    PEN_BACK_BUFFER_COLOUR = 1,
    PEN_BACK_BUFFER_DEPTH = 2
};

enum usage : s32
{
    PEN_USAGE_DEFAULT,
    PEN_USAGE_IMMUTABLE,
    PEN_USAGE_DYNAMIC,
    PEN_USAGE_STAGING
};

enum input_classification
{
    PEN_INPUT_PER_VERTEX = 0,
    PEN_INPUT_PER_INSTANCE = 1
};

enum bind_flags : s32
{
    PEN_BIND_VERTEX_BUFFER = 1<<0,
    PEN_BIND_INDEX_BUFFER = 1<<1,
    PEN_BIND_CONSTANT_BUFFER = 1<<2,
    PEN_BIND_SHADER_RESOURCE = 1<<3,
    PEN_BIND_RENDER_TARGET = 1<<4,
    PEN_BIND_DEPTH_STENCIL = 1<<5,
    PEN_BIND_SHADER_WRITE = 1<<6,
    PEN_STREAM_OUT_VERTEX_BUFFER = 1<<7
};

enum cpu_access_flags : s32
{
    PEN_CPU_ACCESS_WRITE = 1<<0,
    PEN_CPU_ACCESS_READ = 1<<1
};

enum primitive_topology : s32
{
    PEN_PT_POINTLIST,
    PEN_PT_LINELIST,
    PEN_PT_LINESTRIP,
    PEN_PT_TRIANGLELIST,
    PEN_PT_TRIANGLESTRIP
};
	
enum vertex_format : s32
{
    PEN_VERTEX_FORMAT_FLOAT1,
    PEN_VERTEX_FORMAT_FLOAT2,
    PEN_VERTEX_FORMAT_FLOAT3,
    PEN_VERTEX_FORMAT_FLOAT4,
    PEN_VERTEX_FORMAT_UNORM4,
    PEN_VERTEX_FORMAT_UNORM2,
    PEN_VERTEX_FORMAT_UNORM1
};

enum index_buffer_format : s32
{
    PEN_FORMAT_R16_UINT,
    PEN_FORMAT_R32_UINT
};

enum texture_format : s32
{
    PEN_TEX_FORMAT_BGRA8_UNORM = DXGI_FORMAT_B8G8R8A8_UNORM,
    PEN_TEX_FORMAT_RGBA8_UNORM = DXGI_FORMAT_R8G8B8A8_UNORM,
    PEN_TEX_FORMAT_D24_UNORM_S8_UINT = DXGI_FORMAT_R24G8_TYPELESS,
    PEN_TEX_FORMAT_R32G32B32A32_FLOAT = DXGI_FORMAT_R32G32B32A32_FLOAT,
    PEN_TEX_FORMAT_R32_FLOAT = DXGI_FORMAT_R32_FLOAT,
    PEN_TEX_FORMAT_R16G16B16A16_FLOAT = DXGI_FORMAT_R16G16B16A16_FLOAT,
    PEN_TEX_FORMAT_R16_FLOAT = DXGI_FORMAT_R16_FLOAT,
    PEN_TEX_FORMAT_R32_UINT = DXGI_FORMAT_R32_UINT,
    PEN_TEX_FORMAT_R8_UNORM = DXGI_FORMAT_R8_UNORM,
    PEN_TEX_FORMAT_R32G32_FLOAT = DXGI_FORMAT_R32G32_FLOAT,
    PEN_TEX_FORMAT_BC1_UNORM = DXGI_FORMAT_BC1_UNORM,
    PEN_TEX_FORMAT_BC2_UNORM = DXGI_FORMAT_BC2_UNORM,
    PEN_TEX_FORMAT_BC3_UNORM = DXGI_FORMAT_BC3_UNORM,
    PEN_TEX_FORMAT_BC4_UNORM = DXGI_FORMAT_BC4_UNORM,
    PEN_TEX_FORMAT_BC5_UNORM = DXGI_FORMAT_BC5_UNORM
};

enum stencil_op : s32
{
    PEN_STENCIL_OP_KEEP = D3D11_STENCIL_OP_KEEP,
    PEN_STENCIL_OP_ZERO = D3D11_STENCIL_OP_ZERO,
    PEN_STENCIL_OP_REPLACE = D3D11_STENCIL_OP_REPLACE,
    PEN_STENCIL_OP_INCR_SAT = D3D11_STENCIL_OP_INCR_SAT,
    PEN_STENCIL_OP_DECR_SAT = D3D11_STENCIL_OP_DECR_SAT,
    PEN_STENCIL_OP_INVERT = D3D11_STENCIL_OP_INVERT,
    PEN_STENCIL_OP_INCR = D3D11_STENCIL_OP_INCR,
    PEN_STENCIL_OP_DECR = D3D11_STENCIL_OP_DECR
};

enum sampler_filters : s32
{
    PEN_FILTER_MIN_MAG_MIP_POINT = D3D11_FILTER_MIN_MAG_MIP_POINT,
    PEN_FILTER_MIN_MAG_POINT_MIP_LINEAR = D3D11_FILTER_MIN_MAG_POINT_MIP_LINEAR,
    PEN_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT = D3D11_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT,
    PEN_FILTER_MIN_POINT_MAG_MIP_LINEAR = D3D11_FILTER_MIN_POINT_MAG_MIP_LINEAR,
    PEN_FILTER_MIN_LINEAR_MAG_MIP_POINT = D3D11_FILTER_MIN_LINEAR_MAG_MIP_POINT,
    PEN_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR = D3D11_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR,
    PEN_FILTER_MIN_MAG_LINEAR_MIP_POINT = D3D11_FILTER_MIN_MAG_LINEAR_MIP_POINT,
    PEN_FILTER_MIN_MAG_MIP_LINEAR = D3D11_FILTER_MIN_MAG_MIP_LINEAR,
    PEN_FILTER_ANISOTROPIC = D3D11_FILTER_ANISOTROPIC,
    PEN_FILTER_COMPARISON_MIN_MAG_MIP_POINT = D3D11_FILTER_COMPARISON_MIN_MAG_MIP_POINT,
    PEN_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR = D3D11_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR,
    PEN_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT = D3D11_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT,
    PEN_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR = D3D11_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR,
    PEN_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT = D3D11_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT,
    PEN_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR = D3D11_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR,
    PEN_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT = D3D11_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT,
    PEN_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR = D3D11_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR,
    PEN_FILTER_COMPARISON_ANISOTROPIC = D3D11_FILTER_COMPARISON_ANISOTROPIC,
    PEN_FILTER_MINIMUM_MIN_MAG_MIP_POINT = D3D11_FILTER_MINIMUM_MIN_MAG_MIP_POINT,
    PEN_FILTER_MINIMUM_MIN_MAG_POINT_MIP_LINEAR = D3D11_FILTER_MINIMUM_MIN_MAG_POINT_MIP_LINEAR,
    PEN_FILTER_MINIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT = D3D11_FILTER_MINIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT,
    PEN_FILTER_MINIMUM_MIN_POINT_MAG_MIP_LINEAR = D3D11_FILTER_MINIMUM_MIN_POINT_MAG_MIP_LINEAR,
    PEN_FILTER_MINIMUM_MIN_LINEAR_MAG_MIP_POINT = D3D11_FILTER_MINIMUM_MIN_LINEAR_MAG_MIP_POINT,
    PEN_FILTER_MINIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR = D3D11_FILTER_MINIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR,
    PEN_FILTER_MINIMUM_MIN_MAG_LINEAR_MIP_POINT = D3D11_FILTER_MINIMUM_MIN_MAG_LINEAR_MIP_POINT,
    PEN_FILTER_MINIMUM_MIN_MAG_MIP_LINEAR = D3D11_FILTER_MINIMUM_MIN_MAG_MIP_LINEAR,
    PEN_FILTER_MINIMUM_ANISOTROPIC = D3D11_FILTER_MINIMUM_ANISOTROPIC,
    PEN_FILTER_MAXIMUM_MIN_MAG_MIP_POINT = D3D11_FILTER_MAXIMUM_MIN_MAG_MIP_POINT,
    PEN_FILTER_MAXIMUM_MIN_MAG_POINT_MIP_LINEAR = D3D11_FILTER_MAXIMUM_MIN_MAG_POINT_MIP_LINEAR,
    PEN_FILTER_MAXIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT = D3D11_FILTER_MAXIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT,
    PEN_FILTER_MAXIMUM_MIN_POINT_MAG_MIP_LINEAR = D3D11_FILTER_MAXIMUM_MIN_POINT_MAG_MIP_LINEAR,
    PEN_FILTER_MAXIMUM_MIN_LINEAR_MAG_MIP_POINT = D3D11_FILTER_MAXIMUM_MIN_LINEAR_MAG_MIP_POINT,
    PEN_FILTER_MAXIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR = D3D11_FILTER_MAXIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR,
    PEN_FILTER_MAXIMUM_MIN_MAG_LINEAR_MIP_POINT = D3D11_FILTER_MAXIMUM_MIN_MAG_LINEAR_MIP_POINT,
    PEN_FILTER_MAXIMUM_MIN_MAG_MIP_LINEAR = D3D11_FILTER_MAXIMUM_MIN_MAG_MIP_LINEAR,
    PEN_FILTER_MAXIMUM_ANISOTROPIC = D3D11_FILTER_MAXIMUM_ANISOTROPIC
};

enum texture_address_mode : s32
{
    PEN_TEXTURE_ADDRESS_WRAP = D3D11_TEXTURE_ADDRESS_WRAP,
    PEN_TEXTURE_ADDRESS_MIRROR = D3D11_TEXTURE_ADDRESS_MIRROR,
    PEN_TEXTURE_ADDRESS_CLAMP = D3D11_TEXTURE_ADDRESS_CLAMP,
    PEN_TEXTURE_ADDRESS_BORDER = D3D11_TEXTURE_ADDRESS_BORDER,
    PEN_TEXTURE_ADDRESS_MIRROR_ONCE = D3D11_TEXTURE_ADDRESS_MIRROR_ONCE
};

enum comparison : s32
{
    PEN_COMPARISON_NEVER = D3D11_COMPARISON_NEVER,
    PEN_COMPARISON_LESS = D3D11_COMPARISON_LESS,
    PEN_COMPARISON_EQUAL = D3D11_COMPARISON_EQUAL,
    PEN_COMPARISON_LESS_EQUAL = D3D11_COMPARISON_LESS_EQUAL,
    PEN_COMPARISON_GREATER = D3D11_COMPARISON_GREATER,
    PEN_COMPARISON_NOT_EQUAL = D3D11_COMPARISON_NOT_EQUAL,
    PEN_COMPARISON_GREATER_EQUAL = D3D11_COMPARISON_GREATER_EQUAL,
    PEN_COMPARISON_ALWAYS = D3D11_COMPARISON_ALWAYS
};

enum blending_factor : s32
{
    PEN_BLEND_ZERO = D3D11_BLEND_ZERO,
    PEN_BLEND_ONE = D3D11_BLEND_ONE,
    PEN_BLEND_SRC_COLOR = D3D11_BLEND_SRC_COLOR,
    PEN_BLEND_INV_SRC_COLOR = D3D11_BLEND_INV_SRC_COLOR,
    PEN_BLEND_SRC_ALPHA = D3D11_BLEND_SRC_ALPHA,
    PEN_BLEND_INV_SRC_ALPHA = D3D11_BLEND_INV_SRC_ALPHA,
    PEN_BLEND_DEST_ALPHA = D3D11_BLEND_DEST_ALPHA,
    PEN_BLEND_INV_DEST_ALPHA = D3D11_BLEND_INV_DEST_ALPHA,
    PEN_BLEND_DEST_COLOR = D3D11_BLEND_DEST_COLOR,
    PEN_BLEND_INV_DEST_COLOR = D3D11_BLEND_INV_DEST_COLOR,
    PEN_BLEND_SRC_ALPHA_SAT = D3D11_BLEND_SRC_ALPHA_SAT,
    PEN_BLEND_BLEND_FACTOR = D3D11_BLEND_BLEND_FACTOR,
    PEN_BLEND_INV_BLEND_FACTOR = D3D11_BLEND_INV_BLEND_FACTOR,
    PEN_BLEND_SRC1_COLOR = D3D11_BLEND_SRC1_COLOR,
    PEN_BLEND_INV_SRC1_COLOR = D3D11_BLEND_INV_SRC1_COLOR,
    PEN_BLEND_SRC1_ALPHA = D3D11_BLEND_SRC1_ALPHA,
    PEN_BLEND_INV_SRC1_ALPHA = D3D11_BLEND_INV_SRC1_ALPHA
};

enum blend_op : s32
{
    PEN_BLEND_OP_ADD = D3D11_BLEND_OP_ADD,
    PEN_BLEND_OP_SUBTRACT = D3D11_BLEND_OP_SUBTRACT,
    PEN_BLEND_OP_REV_SUBTRACT = D3D11_BLEND_OP_REV_SUBTRACT,
    PEN_BLEND_OP_MIN = D3D11_BLEND_OP_MIN,
    PEN_BLEND_OP_MAX = D3D11_BLEND_OP_MAX
};

enum query_type : s32
{
    PEN_QUERY_EVENT = 0,
    PEN_QUERY_OCCLUSION = (PEN_QUERY_EVENT + 1),
    PEN_QUERY_TIMESTAMP = (PEN_QUERY_OCCLUSION + 1),
    PEN_QUERY_TIMESTAMP_DISJOINT = (PEN_QUERY_TIMESTAMP + 1),
    PEN_QUERY_PIPELINE_STATISTICS = (PEN_QUERY_TIMESTAMP_DISJOINT + 1),
    PEN_QUERY_OCCLUSION_PREDICATE = (PEN_QUERY_PIPELINE_STATISTICS + 1),
    PEN_QUERY_SO_STATISTICS = (PEN_QUERY_OCCLUSION_PREDICATE + 1),
    PEN_QUERY_SO_OVERFLOW_PREDICATE = (PEN_QUERY_SO_STATISTICS + 1),
    PEN_QUERY_SO_STATISTICS_STREAM0 = (PEN_QUERY_SO_OVERFLOW_PREDICATE + 1),
    PEN_QUERY_SO_OVERFLOW_PREDICATE_STREAM0 = (PEN_QUERY_SO_STATISTICS_STREAM0 + 1),
    PEN_QUERY_SO_STATISTICS_STREAM1 = (PEN_QUERY_SO_OVERFLOW_PREDICATE_STREAM0 + 1),
    PEN_QUERY_SO_OVERFLOW_PREDICATE_STREAM1 = (PEN_QUERY_SO_STATISTICS_STREAM1 + 1),
    PEN_QUERY_SO_STATISTICS_STREAM2 = (PEN_QUERY_SO_OVERFLOW_PREDICATE_STREAM1 + 1),
    PEN_QUERY_SO_OVERFLOW_PREDICATE_STREAM2 = (PEN_QUERY_SO_STATISTICS_STREAM2 + 1),
    PEN_QUERY_SO_STATISTICS_STREAM3 = (PEN_QUERY_SO_OVERFLOW_PREDICATE_STREAM2 + 1),
    PEN_QUERY_SO_OVERFLOW_PREDICATE_STREAM3 = (PEN_QUERY_SO_STATISTICS_STREAM3 + 1)
};
#endif