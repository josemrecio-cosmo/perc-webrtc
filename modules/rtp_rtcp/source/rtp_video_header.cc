/*
 *  Copyright (c) 2018 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "modules/rtp_rtcp/source/rtp_video_header.h"

namespace webrtc {

RTPVideoHeader::RTPVideoHeader()
    : width(),
      height(),
      rotation(),
      playout_delay(),
      content_type(),
      video_timing(),
      is_first_packet_in_frame(),
      simulcastIdx(),
      codec() {}
RTPVideoHeader::RTPVideoHeader(const RTPVideoHeader& other) = default;

}  // namespace webrtc
