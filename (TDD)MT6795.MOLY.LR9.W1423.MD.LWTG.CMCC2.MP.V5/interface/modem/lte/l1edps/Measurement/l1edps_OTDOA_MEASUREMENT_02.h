/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *  l1edps_OTDOA_MEASUREMENT_02.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *  Parameters define value between SS and UE
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * removed!
 * removed!
 * . Modify EL1S test script
 *
 ****************************************************************************/



#ifndef _L1SS_OTDOA_MEASUREMENT_02_H
#define _L1SS_OTDOA_MEASUREMENT_02_H

#include "l1edps_common_parameters.h"

#undef DL_EARFCN_BTS1
#undef DL_EARFCN_BTS2
#undef DL_EARFCN_BTS3
#undef DL_EARFCN_BTS4
#undef MIB_DL_BANDWIDTH_BTS1
#undef MIB_DL_BANDWIDTH_BTS2
#undef MIB_DL_BANDWIDTH_BTS3
#undef MIB_DL_BANDWIDTH_BTS4
#undef SIB2_UL_BANDWIDTH_BTS1 
#undef SIB2_UL_BANDWIDTH_BTS2
#undef SIB2_UL_BANDWIDTH_BTS3 
#undef SIB2_UL_BANDWIDTH_BTS4  
#undef RRC_RECONFIG_GAP_CONFIG_SETUP_BTS1
#undef RRC_RECONFIG_GAP_OFFSET_gp0_BTS1
#undef RRC_RECONFIG_GAP_OFFSET_gp1_BTS1
#undef RRC_RECONFIG_GAP_CONFIG_SETUP_BTS2
#undef RRC_RECONFIG_GAP_OFFSET_gp0_BTS2
#undef RRC_RECONFIG_GAP_OFFSET_gp1_BTS2
#undef OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS1
#undef OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS2
#undef OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS3
#undef OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS4
#undef OTDOA_PRS_SUBFRAME_OFFSET_VALID_BTS3 
#undef OTDOA_PRS_SUBFRAME_OFFSET_VALID_BTS4 
#undef OTDOA_PRS_SUBFRAME_OFFSET_BTS3
#undef OTDOA_PRS_SUBFRAME_OFFSET_BTS4
#undef PWR1
#undef PWR2
#undef PWR3
#undef PWR4

#define DL_EARFCN_BTS1 900
#define DL_EARFCN_BTS2 1100
#define DL_EARFCN_BTS3 1100
#define DL_EARFCN_BTS4 1100
#define MIB_DL_BANDWIDTH_BTS1 BW_100_RB
#define MIB_DL_BANDWIDTH_BTS2 BW_100_RB
#define MIB_DL_BANDWIDTH_BTS3 BW_100_RB
#define MIB_DL_BANDWIDTH_BTS4 BW_100_RB
#define SIB2_UL_BANDWIDTH_BTS1 BW_100_RB
#define SIB2_UL_BANDWIDTH_BTS2 BW_100_RB
#define SIB2_UL_BANDWIDTH_BTS3 BW_100_RB
#define SIB2_UL_BANDWIDTH_BTS4 BW_100_RB
#define RRC_RECONFIG_GAP_CONFIG_SETUP_BTS1 L1S_SETUP
#define RRC_RECONFIG_GAP_OFFSET_gp0_BTS1 9
#define RRC_RECONFIG_GAP_OFFSET_gp1_BTS1 9
#define RRC_RECONFIG_GAP_CONFIG_SETUP_BTS2 L1S_SETUP
#define RRC_RECONFIG_GAP_OFFSET_gp0_BTS2 19
#define RRC_RECONFIG_GAP_OFFSET_gp1_BTS2 19
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS1 181
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS2 181
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS3 171
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS4 171
#define OTDOA_PRS_SUBFRAME_OFFSET_VALID_BTS3 L1S_SETUP
#define OTDOA_PRS_SUBFRAME_OFFSET_VALID_BTS4 L1S_SETUP
#define OTDOA_PRS_SUBFRAME_OFFSET_BTS3 310
#define OTDOA_PRS_SUBFRAME_OFFSET_BTS4 310
#define PWR1 -77
#define PWR2 -80
#define PWR3 -80
#define PWR4 -80

#endif

