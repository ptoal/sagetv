/*
 * Copyright 2015 The SageTV Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MEPG_DTS_FORMAT_ANALYZER_H
#define MEPG_DTS_FORMAT_ANALYZER_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef  __STDC_FORMAT_MACROS
#define  __STDC_FORMAT_MACROS
#endif
#include <inttypes.h>

typedef struct DTS_AUDIO
{
	uint16_t channels;
	uint16_t block_align;
	uint16_t bits_per_sample;
	uint16_t padding;
	uint32_t samples_per_sec;
	uint32_t avgbytes_per_sec;

} DTS_AUDIO;

int ReadDTS_AudioHeader( DTS_AUDIO *pDTSAudio, const uint8_t* pStart, int Size );

#ifdef __cplusplus
}
#endif

#endif
