/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").  
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright (c) 1995, Sun Microsystems, Inc.
 */

#ident	"@(#)wdresolve.h	1.3	97/09/22	SMI"

static unsigned char ieol_dflt[128] = {
	0xa1, 0xd8,	0xa1, 0xd6,	0xa1, 0xca,	0xa1, 0xce,
	0xa1, 0xd0,	0xa1, 0xda,	0xa1, 0xa6,	0xa1, 0xc8,
	0xa1, 0xcc,	0xa1, 0xd2,	0xa1, 0xd4,	0xa1, 0xef,
	0xa1, 0xf0,	0xa1, 0xf2,	0xa1, 0xf8,	0xa1, 0xf7,
	0xa1, 0xc6,	'\0'
};
static unsigned char itol_dflt[128] = {
	0xa1, 0xa2,	0xa1, 0xa3,	0xa1, 0xa5,	0xa1, 0xb9,
	0xa1, 0xd9,	0xa1, 0xd7,	0xa1, 0xaa,	0xa1, 0xa9,
	0xa1, 0xcb,	0xa1, 0xcf,	0xa1, 0xd1,	0xa1, 0xa4,	
	0xa1, 0xa7,	0xa1, 0xa8,	0xa1, 0xcd,	0xa1, 0xd3,
	0xa1, 0xd5,	0xa1, 0xdb,	0xa1, 0xc7,	0xa1, 0xc9,
	0xa4, 0xa1,	0xa4, 0xa3,	0xa4, 0xa5,	0xa4, 0xa7,
	0xa4, 0xa9,	0xa4, 0xe3,	0xa4, 0xe5,	0xa4, 0xe7,
	0xa4, 0xc3,	0xa5, 0xa1,	0xa5, 0xa3,	0xa5, 0xa5,
	0xa5, 0xa7,	0xa5, 0xa9,	0xa5, 0xe3,	0xa5, 0xe5,
	0xa5, 0xe7,	0xa5, 0xc3,	0xa1, 0xbc,	'\0'
};
static unsigned char punct_dflt[7] = {
	0xa1, 0xa2,	0xa1, 0xa3,	'\0'
};
static unsigned char x0208_special_kana[4] =	{ 0xa1, 0xbc, '\0'};