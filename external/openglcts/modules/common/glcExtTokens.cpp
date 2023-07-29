/*-------------------------------------------------------------------------
 * OpenGL Conformance Test Suite
 * -----------------------------
 *
 * Copyright (c) 2015-2016 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */ /*!
 * \file
 * \brief
 */ /*-------------------------------------------------------------------*/

#include "glcExtTokens.hpp"
#include "glwEnums.inl"

namespace deqp
{

void GLExtTokens::init(const glu::ContextType &contextType)
{
    if (glu::contextSupports(contextType, glu::ApiType::es(3, 2)))
    {
        GEOMETRY_SHADER                            = GL_GEOMETRY_SHADER;
        GEOMETRY_SHADER_BIT                        = GL_GEOMETRY_SHADER_BIT;
        GEOMETRY_LINKED_VERTICES_OUT               = GL_GEOMETRY_VERTICES_OUT;
        GEOMETRY_LINKED_INPUT_TYPE                 = GL_GEOMETRY_INPUT_TYPE;
        GEOMETRY_LINKED_OUTPUT_TYPE                = GL_GEOMETRY_OUTPUT_TYPE;
        GEOMETRY_SHADER_INVOCATIONS                = GL_GEOMETRY_SHADER_INVOCATIONS;
        MAX_GEOMETRY_TEXTURE_IMAGE_UNITS           = GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
        MAX_GEOMETRY_IMAGE_UNIFORMS                = GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
        MAX_GEOMETRY_SHADER_STORAGE_BLOCKS         = GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS;
        MAX_GEOMETRY_ATOMIC_COUNTERS               = GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
        LINE_STRIP_ADJACENCY                       = GL_LINE_STRIP_ADJACENCY;
        LINES_ADJACENCY                            = GL_LINES_ADJACENCY;
        TRIANGLES_ADJACENCY                        = GL_TRIANGLES_ADJACENCY;
        TRIANGLE_STRIP_ADJACENCY                   = GL_TRIANGLE_STRIP_ADJACENCY;
        FRAMEBUFFER_ATTACHMENT_LAYERED             = GL_FRAMEBUFFER_ATTACHMENT_LAYERED;
        LAYER_PROVOKING_VERTEX                     = GL_LAYER_PROVOKING_VERTEX;
        FIRST_VERTEX_CONVENTION                    = GL_FIRST_VERTEX_CONVENTION;
        LAST_VERTEX_CONVENTION                     = GL_LAST_VERTEX_CONVENTION;
        UNDEFINED_VERTEX                           = GL_UNDEFINED_VERTEX;
        FRAMEBUFFER_DEFAULT_LAYERS                 = GL_FRAMEBUFFER_DEFAULT_LAYERS;
        FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS       = GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;
        MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS   = GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
        MAX_FRAMEBUFFER_LAYERS                     = GL_MAX_FRAMEBUFFER_LAYERS;
        MAX_GEOMETRY_UNIFORM_COMPONENTS            = GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
        MAX_GEOMETRY_UNIFORM_BLOCKS                = GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
        MAX_GEOMETRY_INPUT_COMPONENTS              = GL_MAX_GEOMETRY_INPUT_COMPONENTS;
        MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS       = GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
        MAX_GEOMETRY_OUTPUT_COMPONENTS             = GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
        MAX_GEOMETRY_OUTPUT_VERTICES               = GL_MAX_GEOMETRY_OUTPUT_VERTICES;
        MAX_GEOMETRY_SHADER_INVOCATIONS            = GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
        MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS        = GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
        PRIMITIVES_GENERATED                       = GL_PRIMITIVES_GENERATED;
        TEXTURE_BORDER_COLOR                       = GL_TEXTURE_BORDER_COLOR;
        TEXTURE_BUFFER_BINDING                     = GL_TEXTURE_BUFFER_BINDING;
        TEXTURE_BUFFER_DATA_STORE_BINDING          = GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
        TEXTURE_BUFFER_OFFSET                      = GL_TEXTURE_BUFFER_OFFSET;
        CLAMP_TO_BORDER                            = GL_CLAMP_TO_BORDER;
        PATCH_VERTICES                             = GL_PATCH_VERTICES;
        TESS_CONTROL_SHADER                        = GL_TESS_CONTROL_SHADER;
        TESS_EVALUATION_SHADER                     = GL_TESS_EVALUATION_SHADER;
        PATCHES                                    = GL_PATCHES;
        MAX_PATCH_VERTICES                         = GL_MAX_PATCH_VERTICES;
        MAX_TESS_GEN_LEVEL                         = GL_MAX_TESS_GEN_LEVEL;
        MAX_TESS_CONTROL_INPUT_COMPONENTS          = GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
        MAX_TESS_CONTROL_OUTPUT_COMPONENTS         = GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
        MAX_TESS_PATCH_COMPONENTS                  = GL_MAX_TESS_PATCH_COMPONENTS;
        MAX_TESS_EVALUATION_INPUT_COMPONENTS       = GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
        MAX_TESS_EVALUATION_OUTPUT_COMPONENTS      = GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
        MAX_TESS_EVALUATION_ATOMIC_COUNTERS        = GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
        MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
        MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS     = GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS;
        MAX_TESS_CONTROL_ATOMIC_COUNTERS           = GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
        MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS    = GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
        MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS  = GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS;
        MAX_TEXTURE_BUFFER_SIZE                    = GL_MAX_TEXTURE_BUFFER_SIZE;
        REFERENCED_BY_GEOMETRY_SHADER              = GL_REFERENCED_BY_GEOMETRY_SHADER;
        REFERENCED_BY_TESS_CONTROL_SHADER          = GL_REFERENCED_BY_TESS_CONTROL_SHADER;
        REFERENCED_BY_TESS_EVALUATION_SHADER       = GL_REFERENCED_BY_TESS_EVALUATION_SHADER;
        TESS_CONTROL_OUTPUT_VERTICES               = GL_TESS_CONTROL_OUTPUT_VERTICES;
        TESS_GEN_MODE                              = GL_TESS_GEN_MODE;
        TESS_GEN_SPACING                           = GL_TESS_GEN_SPACING;
        TESS_GEN_POINT_MODE                        = GL_TESS_GEN_POINT_MODE;
        TESS_GEN_VERTEX_ORDER                      = GL_TESS_GEN_VERTEX_ORDER;
        TESS_CONTROL_SHADER_BIT                    = GL_TESS_CONTROL_SHADER_BIT;
        TESS_EVALUATION_SHADER_BIT                 = GL_TESS_EVALUATION_SHADER_BIT;
        TEXTURE_BUFFER                             = GL_TEXTURE_BUFFER;
        TEXTURE_BUFFER_SIZE                        = GL_TEXTURE_BUFFER_SIZE;
        TEXTURE_BINDING_BUFFER                     = GL_TEXTURE_BINDING_BUFFER;
        SAMPLER_BUFFER                             = GL_SAMPLER_BUFFER;
        INT_SAMPLER_BUFFER                         = GL_INT_SAMPLER_BUFFER;
        UNSIGNED_INT_SAMPLER_BUFFER                = GL_UNSIGNED_INT_SAMPLER_BUFFER;
        IMAGE_BUFFER                               = GL_IMAGE_BUFFER;
        INT_IMAGE_BUFFER                           = GL_INT_IMAGE_BUFFER;
        UNSIGNED_INT_IMAGE_BUFFER                  = GL_UNSIGNED_INT_IMAGE_BUFFER;
        TEXTURE_BUFFER_OFFSET_ALIGNMENT            = GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT;
        QUADS                                      = GL_QUADS;
        ISOLINES                                   = GL_ISOLINES;
        FRACTIONAL_EVEN                            = GL_FRACTIONAL_EVEN;
        FRACTIONAL_ODD                             = GL_FRACTIONAL_ODD;
        COMPRESSED_RGBA_ASTC_4x4                   = GL_COMPRESSED_RGBA_ASTC_4x4;
        COMPRESSED_RGBA_ASTC_5x4                   = GL_COMPRESSED_RGBA_ASTC_5x4;
        COMPRESSED_RGBA_ASTC_5x5                   = GL_COMPRESSED_RGBA_ASTC_5x5;
        COMPRESSED_RGBA_ASTC_6x5                   = GL_COMPRESSED_RGBA_ASTC_6x5;
        COMPRESSED_RGBA_ASTC_6x6                   = GL_COMPRESSED_RGBA_ASTC_6x6;
        COMPRESSED_RGBA_ASTC_8x5                   = GL_COMPRESSED_RGBA_ASTC_8x5;
        COMPRESSED_RGBA_ASTC_8x6                   = GL_COMPRESSED_RGBA_ASTC_8x6;
        COMPRESSED_RGBA_ASTC_8x8                   = GL_COMPRESSED_RGBA_ASTC_8x8;
        COMPRESSED_RGBA_ASTC_10x5                  = GL_COMPRESSED_RGBA_ASTC_10x5;
        COMPRESSED_RGBA_ASTC_10x6                  = GL_COMPRESSED_RGBA_ASTC_10x6;
        COMPRESSED_RGBA_ASTC_10x8                  = GL_COMPRESSED_RGBA_ASTC_10x8;
        COMPRESSED_RGBA_ASTC_10x10                 = GL_COMPRESSED_RGBA_ASTC_10x10;
        COMPRESSED_RGBA_ASTC_12x10                 = GL_COMPRESSED_RGBA_ASTC_12x10;
        COMPRESSED_RGBA_ASTC_12x12                 = GL_COMPRESSED_RGBA_ASTC_12x12;
        COMPRESSED_SRGB8_ALPHA8_ASTC_4x4           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4;
        COMPRESSED_SRGB8_ALPHA8_ASTC_5x4           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4;
        COMPRESSED_SRGB8_ALPHA8_ASTC_5x5           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5;
        COMPRESSED_SRGB8_ALPHA8_ASTC_6x5           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5;
        COMPRESSED_SRGB8_ALPHA8_ASTC_6x6           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6;
        COMPRESSED_SRGB8_ALPHA8_ASTC_8x5           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5;
        COMPRESSED_SRGB8_ALPHA8_ASTC_8x6           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6;
        COMPRESSED_SRGB8_ALPHA8_ASTC_8x8           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8;
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x5          = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5;
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x6          = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6;
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x8          = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8;
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x10         = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10;
        COMPRESSED_SRGB8_ALPHA8_ASTC_12x10         = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10;
        COMPRESSED_SRGB8_ALPHA8_ASTC_12x12         = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12;
        MULTIPLY                                   = GL_MULTIPLY;
        SCREEN                                     = GL_SCREEN;
        OVERLAY                                    = GL_OVERLAY;
        DARKEN                                     = GL_DARKEN;
        LIGHTEN                                    = GL_LIGHTEN;
        COLORDODGE                                 = GL_COLORDODGE;
        COLORBURN                                  = GL_COLORBURN;
        HARDLIGHT                                  = GL_HARDLIGHT;
        SOFTLIGHT                                  = GL_SOFTLIGHT;
        DIFFERENCE                                 = GL_DIFFERENCE;
        EXCLUSION                                  = GL_EXCLUSION;
        HSL_HUE                                    = GL_HSL_HUE;
        HSL_SATURATION                             = GL_HSL_SATURATION;
        HSL_COLOR                                  = GL_HSL_COLOR;
        HSL_LUMINOSITY                             = GL_HSL_LUMINOSITY;
        PRIMITIVE_BOUNDING_BOX                     = GL_PRIMITIVE_BOUNDING_BOX;
    }
    else
    {
        GEOMETRY_SHADER                            = GL_GEOMETRY_SHADER_EXT;
        GEOMETRY_SHADER_BIT                        = GL_GEOMETRY_SHADER_BIT_EXT;
        GEOMETRY_LINKED_VERTICES_OUT               = GL_GEOMETRY_LINKED_VERTICES_OUT_EXT;
        GEOMETRY_LINKED_INPUT_TYPE                 = GL_GEOMETRY_LINKED_INPUT_TYPE_EXT;
        GEOMETRY_LINKED_OUTPUT_TYPE                = GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT;
        GEOMETRY_SHADER_INVOCATIONS                = GL_GEOMETRY_SHADER_INVOCATIONS_EXT;
        MAX_GEOMETRY_TEXTURE_IMAGE_UNITS           = GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT;
        MAX_GEOMETRY_IMAGE_UNIFORMS                = GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT;
        MAX_GEOMETRY_SHADER_STORAGE_BLOCKS         = GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT;
        MAX_GEOMETRY_ATOMIC_COUNTERS               = GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT;
        LINE_STRIP_ADJACENCY                       = GL_LINE_STRIP_ADJACENCY_EXT;
        LINES_ADJACENCY                            = GL_LINES_ADJACENCY_EXT;
        TRIANGLES_ADJACENCY                        = GL_TRIANGLES_ADJACENCY_EXT;
        TRIANGLE_STRIP_ADJACENCY                   = GL_TRIANGLE_STRIP_ADJACENCY_EXT;
        FRAMEBUFFER_ATTACHMENT_LAYERED             = GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT;
        LAYER_PROVOKING_VERTEX                     = GL_LAYER_PROVOKING_VERTEX_EXT;
        FIRST_VERTEX_CONVENTION                    = GL_FIRST_VERTEX_CONVENTION_EXT;
        LAST_VERTEX_CONVENTION                     = GL_LAST_VERTEX_CONVENTION_EXT;
        UNDEFINED_VERTEX                           = GL_UNDEFINED_VERTEX_EXT;
        FRAMEBUFFER_DEFAULT_LAYERS                 = GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT;
        FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS       = GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT;
        MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS   = GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT;
        MAX_FRAMEBUFFER_LAYERS                     = GL_MAX_FRAMEBUFFER_LAYERS_EXT;
        MAX_GEOMETRY_UNIFORM_COMPONENTS            = GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT;
        MAX_GEOMETRY_UNIFORM_BLOCKS                = GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT;
        MAX_GEOMETRY_INPUT_COMPONENTS              = GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT;
        MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS       = GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT;
        MAX_GEOMETRY_OUTPUT_COMPONENTS             = GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT;
        MAX_GEOMETRY_OUTPUT_VERTICES               = GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT;
        MAX_GEOMETRY_SHADER_INVOCATIONS            = GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT;
        MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS        = GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT;
        PRIMITIVES_GENERATED                       = GL_PRIMITIVES_GENERATED_EXT;
        TEXTURE_BORDER_COLOR                       = GL_TEXTURE_BORDER_COLOR_EXT;
        TEXTURE_BUFFER_BINDING                     = GL_TEXTURE_BUFFER_BINDING_EXT;
        TEXTURE_BUFFER_DATA_STORE_BINDING          = GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT;
        CLAMP_TO_BORDER                            = GL_CLAMP_TO_BORDER_EXT;
        PATCH_VERTICES                             = GL_PATCH_VERTICES_EXT;
        TESS_CONTROL_SHADER                        = GL_TESS_CONTROL_SHADER_EXT;
        TESS_EVALUATION_SHADER                     = GL_TESS_EVALUATION_SHADER_EXT;
        PATCHES                                    = GL_PATCHES_EXT;
        MAX_PATCH_VERTICES                         = GL_MAX_PATCH_VERTICES_EXT;
        MAX_TESS_GEN_LEVEL                         = GL_MAX_TESS_GEN_LEVEL_EXT;
        MAX_TESS_CONTROL_INPUT_COMPONENTS          = GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT;
        MAX_TESS_CONTROL_OUTPUT_COMPONENTS         = GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT;
        MAX_TESS_PATCH_COMPONENTS                  = GL_MAX_TESS_PATCH_COMPONENTS_EXT;
        MAX_TESS_EVALUATION_INPUT_COMPONENTS       = GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT;
        MAX_TESS_EVALUATION_OUTPUT_COMPONENTS      = GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT;
        MAX_TESS_EVALUATION_ATOMIC_COUNTERS        = GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT;
        MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT;
        MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS     = GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT;
        MAX_TESS_CONTROL_ATOMIC_COUNTERS           = GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT;
        MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS    = GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT;
        MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS  = GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT;
        MAX_TEXTURE_BUFFER_SIZE                    = GL_MAX_TEXTURE_BUFFER_SIZE_EXT;
        REFERENCED_BY_GEOMETRY_SHADER              = GL_REFERENCED_BY_GEOMETRY_SHADER_EXT;
        REFERENCED_BY_TESS_CONTROL_SHADER          = GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT;
        REFERENCED_BY_TESS_EVALUATION_SHADER       = GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT;
        TESS_CONTROL_OUTPUT_VERTICES               = GL_TESS_CONTROL_OUTPUT_VERTICES_EXT;
        TESS_GEN_MODE                              = GL_TESS_GEN_MODE_EXT;
        TESS_GEN_SPACING                           = GL_TESS_GEN_SPACING_EXT;
        TESS_GEN_POINT_MODE                        = GL_TESS_GEN_POINT_MODE_EXT;
        TESS_GEN_VERTEX_ORDER                      = GL_TESS_GEN_VERTEX_ORDER_EXT;
        TESS_CONTROL_SHADER_BIT                    = GL_TESS_CONTROL_SHADER_BIT_EXT;
        TESS_EVALUATION_SHADER_BIT                 = GL_TESS_EVALUATION_SHADER_BIT_EXT;
        TEXTURE_BUFFER                             = GL_TEXTURE_BUFFER_EXT;
        TEXTURE_BUFFER_SIZE                        = GL_TEXTURE_BUFFER_SIZE_EXT;
        TEXTURE_BINDING_BUFFER                     = GL_TEXTURE_BINDING_BUFFER_EXT;
        TEXTURE_BUFFER_OFFSET                      = GL_TEXTURE_BUFFER_OFFSET_EXT;
        TEXTURE_BUFFER_OFFSET_ALIGNMENT            = GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT;
        SAMPLER_BUFFER                             = GL_SAMPLER_BUFFER_EXT;
        INT_SAMPLER_BUFFER                         = GL_INT_SAMPLER_BUFFER_EXT;
        UNSIGNED_INT_SAMPLER_BUFFER                = GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT;
        IMAGE_BUFFER                               = GL_IMAGE_BUFFER_EXT;
        INT_IMAGE_BUFFER                           = GL_INT_IMAGE_BUFFER_EXT;
        UNSIGNED_INT_IMAGE_BUFFER                  = GL_UNSIGNED_INT_IMAGE_BUFFER_EXT;
        QUADS                                      = GL_QUADS_EXT;
        ISOLINES                                   = GL_ISOLINES_EXT;
        FRACTIONAL_EVEN                            = GL_FRACTIONAL_EVEN_EXT;
        FRACTIONAL_ODD                             = GL_FRACTIONAL_ODD_EXT;
        COMPRESSED_RGBA_ASTC_4x4                   = GL_COMPRESSED_RGBA_ASTC_4x4_KHR;
        COMPRESSED_RGBA_ASTC_5x4                   = GL_COMPRESSED_RGBA_ASTC_5x4_KHR;
        COMPRESSED_RGBA_ASTC_5x5                   = GL_COMPRESSED_RGBA_ASTC_5x5_KHR;
        COMPRESSED_RGBA_ASTC_6x5                   = GL_COMPRESSED_RGBA_ASTC_6x5_KHR;
        COMPRESSED_RGBA_ASTC_6x6                   = GL_COMPRESSED_RGBA_ASTC_6x6_KHR;
        COMPRESSED_RGBA_ASTC_8x5                   = GL_COMPRESSED_RGBA_ASTC_8x5_KHR;
        COMPRESSED_RGBA_ASTC_8x6                   = GL_COMPRESSED_RGBA_ASTC_8x6_KHR;
        COMPRESSED_RGBA_ASTC_8x8                   = GL_COMPRESSED_RGBA_ASTC_8x8_KHR;
        COMPRESSED_RGBA_ASTC_10x5                  = GL_COMPRESSED_RGBA_ASTC_10x5_KHR;
        COMPRESSED_RGBA_ASTC_10x6                  = GL_COMPRESSED_RGBA_ASTC_10x6_KHR;
        COMPRESSED_RGBA_ASTC_10x8                  = GL_COMPRESSED_RGBA_ASTC_10x8_KHR;
        COMPRESSED_RGBA_ASTC_10x10                 = GL_COMPRESSED_RGBA_ASTC_10x10_KHR;
        COMPRESSED_RGBA_ASTC_12x10                 = GL_COMPRESSED_RGBA_ASTC_12x10_KHR;
        COMPRESSED_RGBA_ASTC_12x12                 = GL_COMPRESSED_RGBA_ASTC_12x12_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_4x4           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_5x4           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_5x5           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_6x5           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_6x6           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_8x5           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_8x6           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_8x8           = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x5          = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x6          = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x8          = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_10x10         = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_12x10         = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR;
        COMPRESSED_SRGB8_ALPHA8_ASTC_12x12         = GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR;
        MULTIPLY                                   = GL_MULTIPLY_KHR;
        SCREEN                                     = GL_SCREEN_KHR;
        OVERLAY                                    = GL_OVERLAY_KHR;
        DARKEN                                     = GL_DARKEN_KHR;
        LIGHTEN                                    = GL_LIGHTEN_KHR;
        COLORDODGE                                 = GL_COLORDODGE_KHR;
        COLORBURN                                  = GL_COLORBURN_KHR;
        HARDLIGHT                                  = GL_HARDLIGHT_KHR;
        SOFTLIGHT                                  = GL_SOFTLIGHT_KHR;
        DIFFERENCE                                 = GL_DIFFERENCE_KHR;
        EXCLUSION                                  = GL_EXCLUSION_KHR;
        HSL_HUE                                    = GL_HSL_HUE_KHR;
        HSL_SATURATION                             = GL_HSL_SATURATION_KHR;
        HSL_COLOR                                  = GL_HSL_COLOR_KHR;
        HSL_LUMINOSITY                             = GL_HSL_LUMINOSITY_KHR;
        PRIMITIVE_BOUNDING_BOX                     = GL_PRIMITIVE_BOUNDING_BOX_EXT;
    }
}

} // namespace deqp
