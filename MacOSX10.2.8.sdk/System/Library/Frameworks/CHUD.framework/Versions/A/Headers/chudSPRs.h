/*
 * Copyright (c) 2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef	CHUD_SPRS_H
#define	CHUD_SPRS_H

#ifdef __cplusplus
extern "C" {
#endif

/* PPC SPRs - 32-bit and 64-bit implementations */
#define chud_ppc_srr0		26
#define chud_ppc_srr1		27
#define chud_ppc_dsisr		18
#define chud_ppc_dar		19
#define chud_ppc_dec		22
#define chud_ppc_sdr1		25
#define chud_ppc_sprg0		272
#define chud_ppc_sprg1		273
#define chud_ppc_sprg2		274
#define chud_ppc_sprg3		275
#define chud_ppc_ear		282
#define chud_ppc_tbl		284
#define chud_ppc_tbu		285
#define chud_ppc_pvr		287
#define chud_ppc_ibat0u		528
#define chud_ppc_ibat0l		529
#define chud_ppc_ibat1u		530
#define chud_ppc_ibat1l		531
#define chud_ppc_ibat2u		532
#define chud_ppc_ibat2l		533
#define chud_ppc_ibat3u		534
#define chud_ppc_ibat3l		535
#define chud_ppc_dbat0u		536
#define chud_ppc_dbat0l		537
#define chud_ppc_dbat1u		538
#define chud_ppc_dbat1l		539
#define chud_ppc_dbat2u		540
#define chud_ppc_dbat2l		541
#define chud_ppc_dbat3u		542
#define chud_ppc_dbat3l		543
#define chud_ppc_dabr		1013
#define chud_ppc_msr		10000

/* PPC SPRs - 32-bit implementations */
#define chud_ppc32_sr0		20000
#define chud_ppc32_sr1		20001
#define chud_ppc32_sr2		20002
#define chud_ppc32_sr3		20003
#define chud_ppc32_sr4		20004
#define chud_ppc32_sr5		20005
#define chud_ppc32_sr6		20006
#define chud_ppc32_sr7		20007
#define chud_ppc32_sr8		20008
#define chud_ppc32_sr9		20009
#define chud_ppc32_sr10		20010
#define chud_ppc32_sr11		20011
#define chud_ppc32_sr12		20012
#define chud_ppc32_sr13		20013
#define chud_ppc32_sr14		20014
#define chud_ppc32_sr15		20015   

/* PPC SPRs - 64-bit implementations */
#define chud_ppc64_asr		280

/* PPC SPRs - 750/750CX/750CXe/750FX Specific */
#define chud_750_upmc1		937
#define chud_750_upmc2		938
#define chud_750_upmc3		941
#define chud_750_upmc4		942
#define chud_750_mmcr0		952
#define chud_750_pmc1		953
#define chud_750_pmc2		954
#define chud_750_sia		955
#define chud_750_mmcr1		956
#define chud_750_pmc3		957
#define chud_750_pmc4		958
#define chud_750_hid0		1008
#define chud_750_hid1		1009
#define chud_750_iabr		1010
#define chud_750_l2cr		1017
#define chud_750_ictc		1019
#define chud_750_thrm1		1020
#define chud_750_thrm2		1021
#define chud_750_thrm3		1022
#define chud_750fx_ibat4u	560 /* 750FX only */
#define chud_750fx_ibat4l	561 /* 750FX only */
#define chud_750fx_ibat5u	562 /* 750FX only */
#define chud_750fx_ibat5l	563 /* 750FX only */
#define chud_750fx_ibat6u	564 /* 750FX only */
#define chud_750fx_ibat6l	565 /* 750FX only */
#define chud_750fx_ibat7u	566 /* 750FX only */
#define chud_750fx_ibat7l	567 /* 750FX only */
#define chud_750fx_dbat4u	568 /* 750FX only */
#define chud_750fx_dbat4l	569 /* 750FX only */
#define chud_750fx_dbat5u	570 /* 750FX only */
#define chud_750fx_dbat5l	571 /* 750FX only */
#define chud_750fx_dbat6u	572 /* 750FX only */
#define chud_750fx_dbat6l	573 /* 750FX only */
#define chud_750fx_dbat7u	574 /* 750FX only */
#define chud_750fx_dbat7l	575 /* 750FX only */
#define chud_750fx_hid2		1016  /* 750FX only */

/* PPC SPRs - 7400/7410 Specific */
#define chud_7400_upmc1		937
#define chud_7400_upmc2		938
#define chud_7400_upmc3		941
#define chud_7400_upmc4		942
#define chud_7400_mmcr2		944
#define chud_7400_bamr		951
#define chud_7400_mmcr0		952
#define chud_7400_pmc1		953
#define chud_7400_pmc2		954
#define chud_7400_siar		955 
#define chud_7400_mmcr1		956
#define chud_7400_pmc3		957
#define chud_7400_pmc4		958
#define chud_7400_sda		959
#define chud_7400_hid0		1008
#define chud_7400_hid1		1009
#define chud_7400_iabr		1010
#define chud_7400_msscr0	1014
#define chud_7410_l2pmcr	1016 /* 7410 only */
#define chud_7400_l2cr		1017
#define chud_7400_ictc		1019
#define chud_7400_thrm1		1020
#define chud_7400_thrm2		1021
#define chud_7400_thrm3		1022
#define chud_7400_pir		1023

/* PPC SPRs - 7450/7455 Specific */
#define chud_7455_sprg4		276 /* 7455 only */
#define chud_7455_sprg5		277 /* 7455 only */
#define chud_7455_sprg6		278 /* 7455 only */
#define chud_7455_sprg7		279 /* 7455 only */
#define chud_7455_ibat4u	560 /* 7455 only */
#define chud_7455_ibat4l	561 /* 7455 only */
#define chud_7455_ibat5u	562 /* 7455 only */
#define chud_7455_ibat5l	563 /* 7455 only */
#define chud_7455_ibat6u	564 /* 7455 only */
#define chud_7455_ibat6l	565 /* 7455 only */
#define chud_7455_ibat7u	566 /* 7455 only */
#define chud_7455_ibat7l	567 /* 7455 only */
#define chud_7455_dbat4u	568 /* 7455 only */
#define chud_7455_dbat4l	569 /* 7455 only */
#define chud_7455_dbat5u	570 /* 7455 only */
#define chud_7455_dbat5l	571 /* 7455 only */
#define chud_7455_dbat6u	572 /* 7455 only */
#define chud_7455_dbat6l	573 /* 7455 only */
#define chud_7455_dbat7u	574 /* 7455 only */
#define chud_7455_dbat7l	575 /* 7455 only */
#define chud_7450_upmc5		929
#define chud_7450_upmc6		930
#define chud_7450_upmc1		937
#define chud_7450_upmc2		938
#define chud_7450_upmc3		941
#define chud_7450_upmc4		942
#define chud_7450_mmcr2		944
#define chud_7450_pmc5		945
#define chud_7450_pmc6		946
#define chud_7450_bamr		951
#define chud_7450_mmcr0		952
#define chud_7450_pmc1		953
#define chud_7450_pmc2		954
#define chud_7450_siar		955 
#define chud_7450_mmcr1		956
#define chud_7450_pmc3		957
#define chud_7450_pmc4		958
#define chud_7450_tlbmiss	980
#define chud_7450_ptehi		981
#define chud_7450_ptelo		982
#define chud_7450_l3pm		983
#define chud_7450_hid0		1008
#define chud_7450_hid1		1009
#define chud_7450_iabr		1010
#define chud_7450_ldstdb	1012
#define chud_7450_msscr0	1014
#define chud_7450_msssr0	1015
#define chud_7450_ldstcr	1016
#define chud_7450_l2cr		1017
#define chud_7450_l3cr		1018
#define chud_7450_ictc		1019
#define chud_7450_ictrl		1011
#define chud_7450_thrm1		1020
#define chud_7450_thrm2		1021
#define chud_7450_thrm3		1022
#define chud_7450_pir		1023

typedef int chudSPR;

#ifndef CHUD_KEXT
int 	chudReadSPR( chud_device_t dev, chudSPR spr, u_int32_t *val_p );
int	chudWriteSPR( chud_device_t dev, chudSPR spr, u_int32_t *val_p );
#endif /* !CHUD_KEXT */

#ifdef __cplusplus
}
#endif

#endif /* CHUD_SPRS_H */