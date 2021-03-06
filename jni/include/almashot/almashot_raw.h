/* ------------------------------------------------------------------------- *\

 Almalence, Inc.
 3803 Mt. Bonnell Rd
 Austin, 78731
 Texas, USA

 CONFIDENTIAL: CONTAINS CONFIDENTIAL PROPRIETARY INFORMATION OWNED BY
 ALMALENCE, INC., INCLUDING BUT NOT LIMITED TO TRADE SECRETS,
 KNOW-HOW, TECHNICAL AND BUSINESS INFORMATION. USE, DISCLOSURE OR
 DISTRIBUTION OF THE SOFTWARE IN ANY FORM IS LIMITED TO SPECIFICALLY
 AUTHORIZED LICENSEES OF ALMALENCE, INC. ANY UNAUTHORIZED DISCLOSURE
 IS A VIOLATION OF STATE, FEDERAL, AND INTERNATIONAL LAWS.
 BOTH CIVIL AND CRIMINAL PENALTIES APPLY.

 DO NOT DUPLICATE. UNAUTHORIZED DUPLICATION IS A VIOLATION OF STATE,
 FEDERAL AND INTERNATIONAL LAWS.

 USE OF THE SOFTWARE IS AT YOUR SOLE RISK. THE SOFTWARE IS PROVIDED ON AN
 "AS IS" BASIS AND WITHOUT WARRANTY OF ANY KIND. TO THE MAXIMUM EXTENT
 PERMITTED BY LAW, ALMALENCE EXPRESSLY DISCLAIM ALL WARRANTIES AND
 CONDITIONS OF ANY KIND, WHETHER EXPRESS OR IMPLIED, INCLUDING, BUT NOT
 LIMITED TO THE IMPLIED WARRANTIES AND CONDITIONS OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.

 ALMALENCE DOES NOT WARRANT THAT THE SOFTWARE WILL MEET YOUR REQUIREMENTS,
 OR THAT THE OPERATION OF THE SOFTWARE WILL BE UNINTERRUPTED OR ERROR-FREE,
 OR THAT DEFECTS IN THE SOFTWARE WILL BE CORRECTED. UNDER NO CIRCUMSTANCES,
 INCLUDING NEGLIGENCE, SHALL ALMALENCE, OR ITS DIRECTORS, OFFICERS,
 EMPLOYEES OR AGENTS, BE LIABLE TO YOU FOR ANY INCIDENTAL, INDIRECT,
 SPECIAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE, MISUSE OR
 INABILITY TO USE THE SOFTWARE OR RELATED DOCUMENTATION.

 COPYRIGHT 2010-2014, ALMALENCE, INC.

 ---------------------------------------------------------------------------

  Raw sensor functions

\* ------------------------------------------------------------------------- */


#ifndef __ALMASHOT_RAW_H__
#define __ALMASHOT_RAW_H__

#if defined __cplusplus
extern "C"
{
#endif

#include "almashot.h"

// ----------------------------------------------------------------
// Functions
// ----------------------------------------------------------------

int Raw_AutoWB
(
		Int16 *raw,
		int sx,
		int sy
);

void Raw_AutoWB_nonTemp
(
		Int16 *raw,
		int sx,
		int sy,
		int *kelvin
);
/*
void Raw_DemosaicAndColorCorrect
(
	Uint8 *restrict in,
	Uint8 *restrict out,
	int sx,
	int sy,
	int *kelvin,
	Int16 *inColorMatrix,
	Uint8 * gamma,
	int blevel,
	int wlevel,
	int cameraIndex,
	int outputRGB,
	int bayer
);*/

extern Uint8 pow22_gamma_table[1024];
extern Uint8 srgb_gamma_table[1024];
extern Uint8 sinrgb_gamma_table[1024];
extern Uint8 iphone7p_gamma_table[1024];
extern Uint8 iphone6s_gamma_table[1024];


#if defined __cplusplus
}
#endif

#endif // __ALMASHOT_RAW_H__
