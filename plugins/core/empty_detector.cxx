/*ckwg +29
 * Copyright 2020 by Kitware, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 *  * Neither name of Kitware, Inc. nor the names of any contributors may be used
 *    to endorse or promote products derived from this software without specific
 *    prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "empty_detector.h"

namespace viame
{

// =============================================================================

empty_detector
::empty_detector()
{
}


empty_detector
::~empty_detector()
{
}


// -----------------------------------------------------------------------------
kwiver::vital::config_block_sptr
empty_detector
::get_configuration() const
{
  return kwiver::vital::algo::image_object_detector::get_configuration();
}


// -----------------------------------------------------------------------------
void
empty_detector
::set_configuration( kwiver::vital::config_block_sptr /*config*/ )
{
}


// -----------------------------------------------------------------------------
bool
empty_detector
::check_configuration( kwiver::vital::config_block_sptr /*config*/ ) const
{
  return true;
}


// -----------------------------------------------------------------------------
kwiver::vital::detected_object_set_sptr
empty_detector
::detect( kwiver::vital::image_container_sptr image_data ) const
{
  return std::make_shared< kwiver::vital::detected_object_set >();
}


} // end namespace
