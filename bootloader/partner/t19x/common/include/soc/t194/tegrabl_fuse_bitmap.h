/*
 * Copyright (c) 2017-2018, NVIDIA CORPORATION.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *  * Neither the name of NVIDIA CORPORATION nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef TEGRABL_FUSE_BITMAP_H
#define TEGRABL_FUSE_BITMAP_H

#include <stdint.h>
#include <stdbool.h>

#define FUSE_HYPERVOLTAGING_WIDTH			32
#define FUSE_HYPERVOLTAGING_ADDR_0			0x26
#define FUSE_HYPERVOLTAGING_ADDR_0_MASK			0x3FFFFF
#define FUSE_HYPERVOLTAGING_ADDR_0_SHIFT			10
#define FUSE_HYPERVOLTAGING_ADDR_0_WIDTH			22
#define FUSE_HYPERVOLTAGING_ADDR_1			0x27
#define FUSE_HYPERVOLTAGING_ADDR_1_MASK			0xFFC00000
#define FUSE_HYPERVOLTAGING_ADDR_1_SHIFT			(32 - 10)
#define FUSE_HYPERVOLTAGING_ADDR_1_WIDTH			10

#define FUSE_SKU_INFO_WIDTH			8
#define FUSE_SKU_INFO_ADDR_0			0x29
#define FUSE_SKU_INFO_ADDR_0_MASK			0XFF
#define FUSE_SKU_INFO_ADDR_0_SHIFT			0
#define FUSE_SKU_INFO_ADDR_0_WIDTH			8

#define FUSE_PRODUCTION_MODE_WIDTH			1
#define FUSE_PRODUCTION_MODE_ADDR_0			0x0
#define FUSE_PRODUCTION_MODE_ADDR_0_MASK			0x1
#define FUSE_PRODUCTION_MODE_ADDR_0_SHIFT			4
#define FUSE_PRODUCTION_MODE_ADDR_0_WIDTH			1

#define FUSE_SECURITY_MODE_WIDTH			1
#define FUSE_SECURITY_MODE_ADDR_0			0x0
#define FUSE_SECURITY_MODE_ADDR_0_MASK			0x1
#define FUSE_SECURITY_MODE_ADDR_0_SHIFT			11
#define FUSE_SECURITY_MODE_ADDR_0_WIDTH			1

#define FUSE_SECURITY_MODE_REDUNDANT_WIDTH			1
#define FUSE_SECURITY_MODE_REDUNDANT_ADDR_0			0x1
#define FUSE_SECURITY_MODE_REDUNDANT_ADDR_0_MASK			0x1
#define FUSE_SECURITY_MODE_REDUNDANT_ADDR_0_SHIFT			11
#define FUSE_SECURITY_MODE_REDUNDANT_ADDR_0_WIDTH			1

#define FUSE_ODM_LOCK_WIDTH			4
#define FUSE_ODM_LOCK_ADDR_0			0x0
#define FUSE_ODM_LOCK_ADDR_0_MASK			0xF
#define FUSE_ODM_LOCK_ADDR_0_SHIFT			6
#define FUSE_ODM_LOCK_ADDR_0_WIDTH			4

#define FUSE_ODM_LOCK_REDUNDANT_WIDTH			4
#define FUSE_ODM_LOCK_REDUNDANT_ADDR_0			0x1
#define FUSE_ODM_LOCK_REDUNDANT_ADDR_0_MASK			0xF
#define FUSE_ODM_LOCK_REDUNDANT_ADDR_0_SHIFT			6
#define FUSE_ODM_LOCK_REDUNDANT_ADDR_0_WIDTH			4

#define FUSE_ARM_JTAG_DIS_WIDTH			1
#define FUSE_ARM_JTAG_DIS_ADDR_0			0x0
#define FUSE_ARM_JTAG_DIS_ADDR_0_MASK			0x1
#define FUSE_ARM_JTAG_DIS_ADDR_0_SHIFT			12
#define FUSE_ARM_JTAG_DIS_ADDR_0_WIDTH			1

#define FUSE_ARM_JTAG_DIS_REDUNDANT_WIDTH			1
#define FUSE_ARM_JTAG_DIS_REDUNDANT_ADDR_0			0x1
#define FUSE_ARM_JTAG_DIS_REDUNDANT_ADDR_0_MASK			0x1
#define FUSE_ARM_JTAG_DIS_REDUNDANT_ADDR_0_SHIFT			12
#define FUSE_ARM_JTAG_DIS_REDUNDANT_ADDR_0_WIDTH			1


#define FUSE_BOOT_SECURITY_INFO_WIDTH			16
#define FUSE_BOOT_SECURITY_INFO_ADDR_0			0x66
#define FUSE_BOOT_SECURITY_INFO_ADDR_0_MASK			0x7FF
#define FUSE_BOOT_SECURITY_INFO_ADDR_0_SHIFT			21
#define FUSE_BOOT_SECURITY_INFO_ADDR_0_WIDTH			11
#define FUSE_BOOT_SECURITY_INFO_ADDR_1			0x67
#define FUSE_BOOT_SECURITY_INFO_ADDR_1_MASK			0xF8000000
#define FUSE_BOOT_SECURITY_INFO_ADDR_1_SHIFT			(32 -5)
#define FUSE_BOOT_SECURITY_INFO_ADDR_1_WIDTH			5

#define FUSE_RESERVED_ODM0_WIDTH			32
#define FUSE_RESERVED_ODM0_ADDR_0			0x2
#define FUSE_RESERVED_ODM0_ADDR_0_MASK			0x3FFFFFFF
#define FUSE_RESERVED_ODM0_ADDR_0_SHIFT			2
#define FUSE_RESERVED_ODM0_ADDR_0_WIDTH			30
#define FUSE_RESERVED_ODM0_ADDR_1			0x4
#define FUSE_RESERVED_ODM0_ADDR_1_MASK			0xC0000000
#define FUSE_RESERVED_ODM0_ADDR_1_SHIFT			(32 - 2)
#define FUSE_RESERVED_ODM0_ADDR_1_WIDTH			2

#define FUSE_RESERVED_ODM0_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM0_REDUNDANT_ADDR_0		0x3
#define FUSE_RESERVED_ODM0_REDUNDANT_ADDR_0_MASK	0x3FFFFFFF
#define FUSE_RESERVED_ODM0_REDUNDANT_ADDR_0_SHIFT	2
#define FUSE_RESERVED_ODM0_REDUNDANT_ADDR_0_WIDTH	30
#define FUSE_RESERVED_ODM0_REDUNDANT_ADDR_1		0x5
#define FUSE_RESERVED_ODM0_REDUNDANT_ADDR_1_MASK	0xC0000000
#define FUSE_RESERVED_ODM0_REDUNDANT_ADDR_1_SHIFT	(32 - 2)
#define FUSE_RESERVED_ODM0_REDUNDANT_ADDR_1_WIDTH	2

#define FUSE_RESERVED_ODM1_WIDTH			32
#define FUSE_RESERVED_ODM1_ADDR_0			0x4
#define FUSE_RESERVED_ODM1_ADDR_0_MASK			0x3FFFFFFF
#define FUSE_RESERVED_ODM1_ADDR_0_SHIFT			2
#define FUSE_RESERVED_ODM1_ADDR_0_WIDTH			30
#define FUSE_RESERVED_ODM1_ADDR_1			0x6
#define FUSE_RESERVED_ODM1_ADDR_1_MASK			0xC0000000
#define FUSE_RESERVED_ODM1_ADDR_1_SHIFT			(32 - 2)
#define FUSE_RESERVED_ODM1_ADDR_1_WIDTH			2

#define FUSE_RESERVED_ODM1_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM1_REDUNDANT_ADDR_0		0x5
#define FUSE_RESERVED_ODM1_REDUNDANT_ADDR_0_MASK	0x3FFFFFFF
#define FUSE_RESERVED_ODM1_REDUNDANT_ADDR_0_SHIFT	2
#define FUSE_RESERVED_ODM1_REDUNDANT_ADDR_0_WIDTH	30
#define FUSE_RESERVED_ODM1_REDUNDANT_ADDR_1		0x7
#define FUSE_RESERVED_ODM1_REDUNDANT_ADDR_1_MASK	0xC0000000
#define FUSE_RESERVED_ODM1_REDUNDANT_ADDR_1_SHIFT	(32 - 2)
#define FUSE_RESERVED_ODM1_REDUNDANT_ADDR_1_WIDTH	2

#define FUSE_RESERVED_ODM2_WIDTH			32
#define FUSE_RESERVED_ODM2_ADDR_0			0x6
#define FUSE_RESERVED_ODM2_ADDR_0_MASK			0x3FFFFFFF
#define FUSE_RESERVED_ODM2_ADDR_0_SHIFT			2
#define FUSE_RESERVED_ODM2_ADDR_0_WIDTH			30
#define FUSE_RESERVED_ODM2_ADDR_1			0x8
#define FUSE_RESERVED_ODM2_ADDR_1_MASK			0xC0000000
#define FUSE_RESERVED_ODM2_ADDR_1_SHIFT			(32 - 2)
#define FUSE_RESERVED_ODM2_ADDR_1_WIDTH			2

#define FUSE_RESERVED_ODM2_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM2_REDUNDANT_ADDR_0		0x7
#define FUSE_RESERVED_ODM2_REDUNDANT_ADDR_0_MASK	0x3FFFFFFF
#define FUSE_RESERVED_ODM2_REDUNDANT_ADDR_0_SHIFT	2
#define FUSE_RESERVED_ODM2_REDUNDANT_ADDR_0_WIDTH	30
#define FUSE_RESERVED_ODM2_REDUNDANT_ADDR_1		0x9
#define FUSE_RESERVED_ODM2_REDUNDANT_ADDR_1_MASK	0xC0000000
#define FUSE_RESERVED_ODM2_REDUNDANT_ADDR_1_SHIFT	(32 - 2)
#define FUSE_RESERVED_ODM2_REDUNDANT_ADDR_1_WIDTH	2

#define FUSE_RESERVED_ODM3_WIDTH			32
#define FUSE_RESERVED_ODM3_ADDR_0			0x8
#define FUSE_RESERVED_ODM3_ADDR_0_MASK			0x3FFFFFFF
#define FUSE_RESERVED_ODM3_ADDR_0_SHIFT			2
#define FUSE_RESERVED_ODM3_ADDR_0_WIDTH			30
#define FUSE_RESERVED_ODM3_ADDR_1			0xA
#define FUSE_RESERVED_ODM3_ADDR_1_MASK			0xC0000000
#define FUSE_RESERVED_ODM3_ADDR_1_SHIFT			(32 - 2)
#define FUSE_RESERVED_ODM3_ADDR_1_WIDTH			2

#define FUSE_RESERVED_ODM3_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM3_REDUNDANT_ADDR_0		0x9
#define FUSE_RESERVED_ODM3_REDUNDANT_ADDR_0_MASK	0x3FFFFFFF
#define FUSE_RESERVED_ODM3_REDUNDANT_ADDR_0_SHIFT	2
#define FUSE_RESERVED_ODM3_REDUNDANT_ADDR_0_WIDTH	30
#define FUSE_RESERVED_ODM3_REDUNDANT_ADDR_1		0xB
#define FUSE_RESERVED_ODM3_REDUNDANT_ADDR_1_MASK	0xC0000000
#define FUSE_RESERVED_ODM3_REDUNDANT_ADDR_1_SHIFT	(32 - 2)
#define FUSE_RESERVED_ODM3_REDUNDANT_ADDR_1_WIDTH	2

#define FUSE_RESERVED_ODM4_WIDTH			32
#define FUSE_RESERVED_ODM4_ADDR_0			0xA
#define FUSE_RESERVED_ODM4_ADDR_0_MASK			0x3FFFFFFF
#define FUSE_RESERVED_ODM4_ADDR_0_SHIFT			2
#define FUSE_RESERVED_ODM4_ADDR_0_WIDTH			30
#define FUSE_RESERVED_ODM4_ADDR_1			0xC
#define FUSE_RESERVED_ODM4_ADDR_1_MASK			0xC0000000
#define FUSE_RESERVED_ODM4_ADDR_1_SHIFT			(32 - 2)
#define FUSE_RESERVED_ODM4_ADDR_1_WIDTH			2

#define FUSE_RESERVED_ODM4_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM4_REDUNDANT_ADDR_0		0xB
#define FUSE_RESERVED_ODM4_REDUNDANT_ADDR_0_MASK	0x3FFFFFFF
#define FUSE_RESERVED_ODM4_REDUNDANT_ADDR_0_SHIFT	2
#define FUSE_RESERVED_ODM4_REDUNDANT_ADDR_0_WIDTH	30
#define FUSE_RESERVED_ODM4_REDUNDANT_ADDR_1		0xD
#define FUSE_RESERVED_ODM4_REDUNDANT_ADDR_1_MASK	0xC0000000
#define FUSE_RESERVED_ODM4_REDUNDANT_ADDR_1_SHIFT	(32 - 2)
#define FUSE_RESERVED_ODM4_REDUNDANT_ADDR_1_WIDTH	2

#define FUSE_RESERVED_ODM5_WIDTH			32
#define FUSE_RESERVED_ODM5_ADDR_0			0xC
#define FUSE_RESERVED_ODM5_ADDR_0_MASK			0x3FFFFFFF
#define FUSE_RESERVED_ODM5_ADDR_0_SHIFT			2
#define FUSE_RESERVED_ODM5_ADDR_0_WIDTH			30
#define FUSE_RESERVED_ODM5_ADDR_1			0xE
#define FUSE_RESERVED_ODM5_ADDR_1_MASK			0xC0000000
#define FUSE_RESERVED_ODM5_ADDR_1_SHIFT			(32 - 2)
#define FUSE_RESERVED_ODM5_ADDR_1_WIDTH			2

#define FUSE_RESERVED_ODM5_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM5_REDUNDANT_ADDR_0		0xD
#define FUSE_RESERVED_ODM5_REDUNDANT_ADDR_0_MASK	0x3FFFFFFF
#define FUSE_RESERVED_ODM5_REDUNDANT_ADDR_0_SHIFT	2
#define FUSE_RESERVED_ODM5_REDUNDANT_ADDR_0_WIDTH	30
#define FUSE_RESERVED_ODM5_REDUNDANT_ADDR_1		0xF
#define FUSE_RESERVED_ODM5_REDUNDANT_ADDR_1_MASK	0xC0000000
#define FUSE_RESERVED_ODM5_REDUNDANT_ADDR_1_SHIFT	(32 - 2)
#define FUSE_RESERVED_ODM5_REDUNDANT_ADDR_1_WIDTH	2

#define FUSE_RESERVED_ODM6_WIDTH			32
#define FUSE_RESERVED_ODM6_ADDR_0			0xE
#define FUSE_RESERVED_ODM6_ADDR_0_MASK			0x3FFFFFFF
#define FUSE_RESERVED_ODM6_ADDR_0_SHIFT			2
#define FUSE_RESERVED_ODM6_ADDR_0_WIDTH			30
#define FUSE_RESERVED_ODM6_ADDR_1			0x10
#define FUSE_RESERVED_ODM6_ADDR_1_MASK			0xC0000000
#define FUSE_RESERVED_ODM6_ADDR_1_SHIFT			(32 - 2)
#define FUSE_RESERVED_ODM6_ADDR_1_WIDTH			2

#define FUSE_RESERVED_ODM6_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM6_REDUNDANT_ADDR_0		0xF
#define FUSE_RESERVED_ODM6_REDUNDANT_ADDR_0_MASK	0x3FFFFFFF
#define FUSE_RESERVED_ODM6_REDUNDANT_ADDR_0_SHIFT	2
#define FUSE_RESERVED_ODM6_REDUNDANT_ADDR_0_WIDTH	30
#define FUSE_RESERVED_ODM6_REDUNDANT_ADDR_1		0x11
#define FUSE_RESERVED_ODM6_REDUNDANT_ADDR_1_MASK	0xC0000000
#define FUSE_RESERVED_ODM6_REDUNDANT_ADDR_1_SHIFT	(32 - 2)
#define FUSE_RESERVED_ODM6_REDUNDANT_ADDR_1_WIDTH	2

#define FUSE_RESERVED_ODM7_WIDTH			32
#define FUSE_RESERVED_ODM7_ADDR_0			0x10
#define FUSE_RESERVED_ODM7_ADDR_0_MASK			0x3FFFFFFF
#define FUSE_RESERVED_ODM7_ADDR_0_SHIFT			2
#define FUSE_RESERVED_ODM7_ADDR_0_WIDTH			30
#define FUSE_RESERVED_ODM7_ADDR_1			0x12
#define FUSE_RESERVED_ODM7_ADDR_1_MASK			0xC0000000
#define FUSE_RESERVED_ODM7_ADDR_1_SHIFT			(32 - 2)
#define FUSE_RESERVED_ODM7_ADDR_1_WIDTH			2

#define FUSE_RESERVED_ODM7_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM7_REDUNDANT_ADDR_0		0x11
#define FUSE_RESERVED_ODM7_REDUNDANT_ADDR_0_MASK	0x3FFFFFFF
#define FUSE_RESERVED_ODM7_REDUNDANT_ADDR_0_SHIFT	2
#define FUSE_RESERVED_ODM7_REDUNDANT_ADDR_0_WIDTH	30
#define FUSE_RESERVED_ODM7_REDUNDANT_ADDR_1		0x13
#define FUSE_RESERVED_ODM7_REDUNDANT_ADDR_1_MASK	0xC0000000
#define FUSE_RESERVED_ODM7_REDUNDANT_ADDR_1_SHIFT	(32 - 2)
#define FUSE_RESERVED_ODM7_REDUNDANT_ADDR_1_WIDTH	2


#define FUSE_RESERVED_ODM8_WIDTH			32
#define FUSE_RESERVED_ODM8_ADDR_0			0x16
#define FUSE_RESERVED_ODM8_ADDR_0_MASK			0x3F
#define FUSE_RESERVED_ODM8_ADDR_0_SHIFT			26
#define FUSE_RESERVED_ODM8_ADDR_0_WIDTH			6
#define FUSE_RESERVED_ODM8_ADDR_1			0x18
#define FUSE_RESERVED_ODM8_ADDR_1_MASK			0xFFFFFFC0
#define FUSE_RESERVED_ODM8_ADDR_1_SHIFT			(32 - 26)
#define FUSE_RESERVED_ODM8_ADDR_1_WIDTH			26

#define FUSE_RESERVED_ODM8_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM8_REDUNDANT_ADDR_0		0x17
#define FUSE_RESERVED_ODM8_REDUNDANT_ADDR_0_MASK	0x3F
#define FUSE_RESERVED_ODM8_REDUNDANT_ADDR_0_SHIFT	26
#define FUSE_RESERVED_ODM8_REDUNDANT_ADDR_0_WIDTH	6
#define FUSE_RESERVED_ODM8_REDUNDANT_ADDR_1		0x19
#define FUSE_RESERVED_ODM8_REDUNDANT_ADDR_1_MASK	0xFFFFFFC0
#define FUSE_RESERVED_ODM8_REDUNDANT_ADDR_1_SHIFT	(32 - 26)
#define FUSE_RESERVED_ODM8_REDUNDANT_ADDR_1_WIDTH	26

#define FUSE_RESERVED_ODM9_WIDTH			32
#define FUSE_RESERVED_ODM9_ADDR_0			0x18
#define FUSE_RESERVED_ODM9_ADDR_0_MASK			0x3F
#define FUSE_RESERVED_ODM9_ADDR_0_SHIFT			26
#define FUSE_RESERVED_ODM9_ADDR_0_WIDTH			6
#define FUSE_RESERVED_ODM9_ADDR_1			0x1A
#define FUSE_RESERVED_ODM9_ADDR_1_MASK			0xFFFFFFC0
#define FUSE_RESERVED_ODM9_ADDR_1_SHIFT			(32 - 26)
#define FUSE_RESERVED_ODM9_ADDR_1_WIDTH			26

#define FUSE_RESERVED_ODM9_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM9_REDUNDANT_ADDR_0		0x19
#define FUSE_RESERVED_ODM9_REDUNDANT_ADDR_0_MASK	0x3F
#define FUSE_RESERVED_ODM9_REDUNDANT_ADDR_0_SHIFT	26
#define FUSE_RESERVED_ODM9_REDUNDANT_ADDR_0_WIDTH	6
#define FUSE_RESERVED_ODM9_REDUNDANT_ADDR_1		0x1B
#define FUSE_RESERVED_ODM9_REDUNDANT_ADDR_1_MASK	0xFFFFFFC0
#define FUSE_RESERVED_ODM9_REDUNDANT_ADDR_1_SHIFT	(32 - 26)
#define FUSE_RESERVED_ODM9_REDUNDANT_ADDR_1_WIDTH	26


#define FUSE_RESERVED_ODM10_WIDTH			32
#define FUSE_RESERVED_ODM10_ADDR_0			0x1A
#define FUSE_RESERVED_ODM10_ADDR_0_MASK			0x3F
#define FUSE_RESERVED_ODM10_ADDR_0_SHIFT			26
#define FUSE_RESERVED_ODM10_ADDR_0_WIDTH			6
#define FUSE_RESERVED_ODM10_ADDR_1			0x1C
#define FUSE_RESERVED_ODM10_ADDR_1_MASK			0xFFFFFFC0
#define FUSE_RESERVED_ODM10_ADDR_1_SHIFT			(32 - 26)
#define FUSE_RESERVED_ODM10_ADDR_1_WIDTH			26

#define FUSE_RESERVED_ODM10_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM10_REDUNDANT_ADDR_0		0x1B
#define FUSE_RESERVED_ODM10_REDUNDANT_ADDR_0_MASK	0x3F
#define FUSE_RESERVED_ODM10_REDUNDANT_ADDR_0_SHIFT	26
#define FUSE_RESERVED_ODM10_REDUNDANT_ADDR_0_WIDTH	6
#define FUSE_RESERVED_ODM10_REDUNDANT_ADDR_1		0x1D
#define FUSE_RESERVED_ODM10_REDUNDANT_ADDR_1_MASK	0xFFFFFFC0
#define FUSE_RESERVED_ODM10_REDUNDANT_ADDR_1_SHIFT	(32 - 26)
#define FUSE_RESERVED_ODM10_REDUNDANT_ADDR_1_WIDTH	26


#define FUSE_RESERVED_ODM11_WIDTH			32
#define FUSE_RESERVED_ODM11_ADDR_0			0x1C
#define FUSE_RESERVED_ODM11_ADDR_0_MASK			0x3F
#define FUSE_RESERVED_ODM11_ADDR_0_SHIFT			26
#define FUSE_RESERVED_ODM11_ADDR_0_WIDTH			6
#define FUSE_RESERVED_ODM11_ADDR_1			0x1E
#define FUSE_RESERVED_ODM11_ADDR_1_MASK			0xFFFFFFC0
#define FUSE_RESERVED_ODM11_ADDR_1_SHIFT			(32 - 26)
#define FUSE_RESERVED_ODM11_ADDR_1_WIDTH			26

#define FUSE_RESERVED_ODM11_REDUNDANT_WIDTH		32
#define FUSE_RESERVED_ODM11_REDUNDANT_ADDR_0		0x1D
#define FUSE_RESERVED_ODM11_REDUNDANT_ADDR_0_MASK	0x3F
#define FUSE_RESERVED_ODM11_REDUNDANT_ADDR_0_SHIFT	26
#define FUSE_RESERVED_ODM11_REDUNDANT_ADDR_0_WIDTH	6
#define FUSE_RESERVED_ODM11_REDUNDANT_ADDR_1		0x1F
#define FUSE_RESERVED_ODM11_REDUNDANT_ADDR_1_MASK	0xFFFFFFC0
#define FUSE_RESERVED_ODM11_REDUNDANT_ADDR_1_SHIFT	(32 - 26)
#define FUSE_RESERVED_ODM11_REDUNDANT_ADDR_1_WIDTH	26

#define FUSE_PUBLIC_KEY0_WIDTH			32
#define FUSE_PUBLIC_KEY0_ADDR_0			0x59
#define FUSE_PUBLIC_KEY0_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PUBLIC_KEY0_ADDR_0_SHIFT			1
#define FUSE_PUBLIC_KEY0_ADDR_0_WIDTH			31
#define FUSE_PUBLIC_KEY0_ADDR_1			0x5A
#define FUSE_PUBLIC_KEY0_ADDR_1_MASK			0x80000000
#define FUSE_PUBLIC_KEY0_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PUBLIC_KEY0_ADDR_1_WIDTH			1

#define FUSE_PUBLIC_KEY1_WIDTH			32
#define FUSE_PUBLIC_KEY1_ADDR_0			0x5A
#define FUSE_PUBLIC_KEY1_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PUBLIC_KEY1_ADDR_0_SHIFT			1
#define FUSE_PUBLIC_KEY1_ADDR_0_WIDTH			31
#define FUSE_PUBLIC_KEY1_ADDR_1			0x5B
#define FUSE_PUBLIC_KEY1_ADDR_1_MASK			0x80000000
#define FUSE_PUBLIC_KEY1_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PUBLIC_KEY1_ADDR_1_WIDTH			1

#define FUSE_PUBLIC_KEY2_WIDTH			32
#define FUSE_PUBLIC_KEY2_ADDR_0			0x5B
#define FUSE_PUBLIC_KEY2_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PUBLIC_KEY2_ADDR_0_SHIFT			1
#define FUSE_PUBLIC_KEY2_ADDR_0_WIDTH			31
#define FUSE_PUBLIC_KEY2_ADDR_1			0x5C
#define FUSE_PUBLIC_KEY2_ADDR_1_MASK			0x80000000
#define FUSE_PUBLIC_KEY2_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PUBLIC_KEY2_ADDR_1_WIDTH			1

#define FUSE_PUBLIC_KEY3_WIDTH			32
#define FUSE_PUBLIC_KEY3_ADDR_0			0x5C
#define FUSE_PUBLIC_KEY3_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PUBLIC_KEY3_ADDR_0_SHIFT			1
#define FUSE_PUBLIC_KEY3_ADDR_0_WIDTH			31
#define FUSE_PUBLIC_KEY3_ADDR_1			0x5D
#define FUSE_PUBLIC_KEY3_ADDR_1_MASK			0x80000000
#define FUSE_PUBLIC_KEY3_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PUBLIC_KEY3_ADDR_1_WIDTH			1

#define FUSE_PUBLIC_KEY4_WIDTH			32
#define FUSE_PUBLIC_KEY4_ADDR_0			0x5D
#define FUSE_PUBLIC_KEY4_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PUBLIC_KEY4_ADDR_0_SHIFT			1
#define FUSE_PUBLIC_KEY4_ADDR_0_WIDTH			31
#define FUSE_PUBLIC_KEY4_ADDR_1			0x5E
#define FUSE_PUBLIC_KEY4_ADDR_1_MASK			0x80000000
#define FUSE_PUBLIC_KEY4_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PUBLIC_KEY4_ADDR_1_WIDTH			1

#define FUSE_PUBLIC_KEY5_WIDTH			32
#define FUSE_PUBLIC_KEY5_ADDR_0			0x5E
#define FUSE_PUBLIC_KEY5_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PUBLIC_KEY5_ADDR_0_SHIFT			1
#define FUSE_PUBLIC_KEY5_ADDR_0_WIDTH			31
#define FUSE_PUBLIC_KEY5_ADDR_1			0x5F
#define FUSE_PUBLIC_KEY5_ADDR_1_MASK			0x80000000
#define FUSE_PUBLIC_KEY5_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PUBLIC_KEY5_ADDR_1_WIDTH			1

#define FUSE_PUBLIC_KEY6_WIDTH			32
#define FUSE_PUBLIC_KEY6_ADDR_0			0x5F
#define FUSE_PUBLIC_KEY6_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PUBLIC_KEY6_ADDR_0_SHIFT			1
#define FUSE_PUBLIC_KEY6_ADDR_0_WIDTH			31
#define FUSE_PUBLIC_KEY6_ADDR_1			0x60
#define FUSE_PUBLIC_KEY6_ADDR_1_MASK			0x80000000
#define FUSE_PUBLIC_KEY6_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PUBLIC_KEY6_ADDR_1_WIDTH			1

#define FUSE_PUBLIC_KEY7_WIDTH			32
#define FUSE_PUBLIC_KEY7_ADDR_0			0x60
#define FUSE_PUBLIC_KEY7_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PUBLIC_KEY7_ADDR_0_SHIFT			1
#define FUSE_PUBLIC_KEY7_ADDR_0_WIDTH			31
#define FUSE_PUBLIC_KEY7_ADDR_1			0x61
#define FUSE_PUBLIC_KEY7_ADDR_1_MASK			0x80000000
#define FUSE_PUBLIC_KEY7_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PUBLIC_KEY7_ADDR_1_WIDTH			1

#define FUSE_PRIVATE_KEY0_WIDTH			32
#define FUSE_PRIVATE_KEY0_ADDR_0			0x61
#define FUSE_PRIVATE_KEY0_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PRIVATE_KEY0_ADDR_0_SHIFT			1
#define FUSE_PRIVATE_KEY0_ADDR_0_WIDTH			31
#define FUSE_PRIVATE_KEY0_ADDR_1			0x62
#define FUSE_PRIVATE_KEY0_ADDR_1_MASK			0x80000000
#define FUSE_PRIVATE_KEY0_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PRIVATE_KEY0_ADDR_1_WIDTH			1

#define FUSE_PRIVATE_KEY1_WIDTH			32
#define FUSE_PRIVATE_KEY1_ADDR_0			0x62
#define FUSE_PRIVATE_KEY1_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PRIVATE_KEY1_ADDR_0_SHIFT			1
#define FUSE_PRIVATE_KEY1_ADDR_0_WIDTH			31
#define FUSE_PRIVATE_KEY1_ADDR_1			0x63
#define FUSE_PRIVATE_KEY1_ADDR_1_MASK			0x80000000
#define FUSE_PRIVATE_KEY1_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PRIVATE_KEY1_ADDR_1_WIDTH			1

#define FUSE_PRIVATE_KEY2_WIDTH			32
#define FUSE_PRIVATE_KEY2_ADDR_0			0x63
#define FUSE_PRIVATE_KEY2_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PRIVATE_KEY2_ADDR_0_SHIFT			1
#define FUSE_PRIVATE_KEY2_ADDR_0_WIDTH			31
#define FUSE_PRIVATE_KEY2_ADDR_1			0x64
#define FUSE_PRIVATE_KEY2_ADDR_1_MASK			0x80000000
#define FUSE_PRIVATE_KEY2_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PRIVATE_KEY2_ADDR_1_WIDTH			1

#define FUSE_PRIVATE_KEY3_WIDTH			32
#define FUSE_PRIVATE_KEY3_ADDR_0			0x64
#define FUSE_PRIVATE_KEY3_ADDR_0_MASK			0x7FFFFFFF
#define FUSE_PRIVATE_KEY3_ADDR_0_SHIFT			1
#define FUSE_PRIVATE_KEY3_ADDR_0_WIDTH			31
#define FUSE_PRIVATE_KEY3_ADDR_1			0x65
#define FUSE_PRIVATE_KEY3_ADDR_1_MASK			0x80000000
#define FUSE_PRIVATE_KEY3_ADDR_1_SHIFT			(32 - 1)
#define FUSE_PRIVATE_KEY3_ADDR_1_WIDTH			1

#define FUSE_ODMID0_WIDTH			32
#define FUSE_ODMID0_ADDR_0			0x7B
#define FUSE_ODMID0_ADDR_0_MASK			0x3
#define FUSE_ODMID0_ADDR_0_SHIFT			30
#define FUSE_ODMID0_ADDR_0_WIDTH			2
#define FUSE_ODMID0_ADDR_1			0x7C
#define FUSE_ODMID0_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_ODMID0_ADDR_1_SHIFT			(32 - 30)
#define FUSE_ODMID0_ADDR_1_WIDTH			30

#define FUSE_ODMID1_WIDTH			32
#define FUSE_ODMID1_ADDR_0			0x7C
#define FUSE_ODMID1_ADDR_0_MASK			0x3
#define FUSE_ODMID1_ADDR_0_SHIFT			30
#define FUSE_ODMID1_ADDR_0_WIDTH			2
#define FUSE_ODMID1_ADDR_1			0x7D
#define FUSE_ODMID1_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_ODMID1_ADDR_1_SHIFT			(32 - 30)
#define FUSE_ODMID1_ADDR_1_WIDTH			30

#define FUSE_KEK00_WIDTH			32
#define FUSE_KEK00_ADDR_0			0x6F
#define FUSE_KEK00_ADDR_0_MASK			0x3
#define FUSE_KEK00_ADDR_0_SHIFT			30
#define FUSE_KEK00_ADDR_0_WIDTH			2
#define FUSE_KEK00_ADDR_1			0x70
#define FUSE_KEK00_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK00_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK00_ADDR_1_WIDTH			30

#define FUSE_KEK01_WIDTH			32
#define FUSE_KEK01_ADDR_0			0x70
#define FUSE_KEK01_ADDR_0_MASK			0x3
#define FUSE_KEK01_ADDR_0_SHIFT			30
#define FUSE_KEK01_ADDR_0_WIDTH			2
#define FUSE_KEK01_ADDR_1			0x71
#define FUSE_KEK01_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK01_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK01_ADDR_1_WIDTH			30


#define FUSE_KEK02_WIDTH			32
#define FUSE_KEK02_ADDR_0			0x71
#define FUSE_KEK02_ADDR_0_MASK			0x3
#define FUSE_KEK02_ADDR_0_SHIFT			30
#define FUSE_KEK02_ADDR_0_WIDTH			2
#define FUSE_KEK02_ADDR_1			0x72
#define FUSE_KEK02_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK02_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK02_ADDR_1_WIDTH			30

#define FUSE_KEK03_WIDTH			32
#define FUSE_KEK03_ADDR_0			0x72
#define FUSE_KEK03_ADDR_0_MASK			0x3
#define FUSE_KEK03_ADDR_0_SHIFT			30
#define FUSE_KEK03_ADDR_0_WIDTH			2
#define FUSE_KEK03_ADDR_1			0x73
#define FUSE_KEK03_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK03_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK03_ADDR_1_WIDTH			30

#define FUSE_KEK10_WIDTH			32
#define FUSE_KEK10_ADDR_0			0x73
#define FUSE_KEK10_ADDR_0_MASK			0x3
#define FUSE_KEK10_ADDR_0_SHIFT			30
#define FUSE_KEK10_ADDR_0_WIDTH			2
#define FUSE_KEK10_ADDR_1			0x74
#define FUSE_KEK10_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK10_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK10_ADDR_1_WIDTH			30

#define FUSE_KEK11_WIDTH			32
#define FUSE_KEK11_ADDR_0			0x74
#define FUSE_KEK11_ADDR_0_MASK			0x3
#define FUSE_KEK11_ADDR_0_SHIFT			30
#define FUSE_KEK11_ADDR_0_WIDTH			2
#define FUSE_KEK11_ADDR_1			0x75
#define FUSE_KEK11_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK11_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK11_ADDR_1_WIDTH			30

#define FUSE_KEK12_WIDTH			32
#define FUSE_KEK12_ADDR_0			0x75
#define FUSE_KEK12_ADDR_0_MASK			0x3
#define FUSE_KEK12_ADDR_0_SHIFT			30
#define FUSE_KEK12_ADDR_0_WIDTH			2
#define FUSE_KEK12_ADDR_1			0x76
#define FUSE_KEK12_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK12_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK12_ADDR_1_WIDTH			30

#define FUSE_KEK13_WIDTH			32
#define FUSE_KEK13_ADDR_0			0x76
#define FUSE_KEK13_ADDR_0_MASK			0x3
#define FUSE_KEK13_ADDR_0_SHIFT			30
#define FUSE_KEK13_ADDR_0_WIDTH			2
#define FUSE_KEK13_ADDR_1			0x77
#define FUSE_KEK13_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK13_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK13_ADDR_1_WIDTH			30

#define FUSE_KEK20_WIDTH			32
#define FUSE_KEK20_ADDR_0			0x77
#define FUSE_KEK20_ADDR_0_MASK			0x3
#define FUSE_KEK20_ADDR_0_SHIFT			30
#define FUSE_KEK20_ADDR_0_WIDTH			2
#define FUSE_KEK20_ADDR_1			0x78
#define FUSE_KEK20_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK20_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK20_ADDR_1_WIDTH			30

#define FUSE_KEK21_WIDTH			32
#define FUSE_KEK21_ADDR_0			0x78
#define FUSE_KEK21_ADDR_0_MASK			0x3
#define FUSE_KEK21_ADDR_0_SHIFT			30
#define FUSE_KEK21_ADDR_0_WIDTH			2
#define FUSE_KEK21_ADDR_1			0x79
#define FUSE_KEK21_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK21_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK21_ADDR_1_WIDTH			30

#define FUSE_KEK22_WIDTH			32
#define FUSE_KEK22_ADDR_0			0x79
#define FUSE_KEK22_ADDR_0_MASK			0x3
#define FUSE_KEK22_ADDR_0_SHIFT			30
#define FUSE_KEK22_ADDR_0_WIDTH			2
#define FUSE_KEK22_ADDR_1			0x7A
#define FUSE_KEK22_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK22_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK22_ADDR_1_WIDTH			30

#define FUSE_KEK23_WIDTH			32
#define FUSE_KEK23_ADDR_0			0x7A
#define FUSE_KEK23_ADDR_0_MASK			0x3
#define FUSE_KEK23_ADDR_0_SHIFT			30
#define FUSE_KEK23_ADDR_0_WIDTH			2
#define FUSE_KEK23_ADDR_1			0x7B
#define FUSE_KEK23_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_KEK23_ADDR_1_SHIFT			(32 - 30)
#define FUSE_KEK23_ADDR_1_WIDTH			30

#define FUSE_EK0_WIDTH			32
#define FUSE_EK0_ADDR_0			0x67
#define FUSE_EK0_ADDR_0_MASK			0x3
#define FUSE_EK0_ADDR_0_SHIFT			30
#define FUSE_EK0_ADDR_0_WIDTH			2
#define FUSE_EK0_ADDR_1			0x68
#define FUSE_EK0_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_EK0_ADDR_1_SHIFT			(32 - 30)
#define FUSE_EK0_ADDR_1_WIDTH			30

#define FUSE_EK1_WIDTH			32
#define FUSE_EK1_ADDR_0			0x68
#define FUSE_EK1_ADDR_0_MASK			0x3
#define FUSE_EK1_ADDR_0_SHIFT			30
#define FUSE_EK1_ADDR_0_WIDTH			2
#define FUSE_EK1_ADDR_1			0x69
#define FUSE_EK1_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_EK1_ADDR_1_SHIFT			(32 - 30)
#define FUSE_EK1_ADDR_1_WIDTH			30

#define FUSE_EK2_WIDTH			32
#define FUSE_EK2_ADDR_0			0x69
#define FUSE_EK2_ADDR_0_MASK			0x3
#define FUSE_EK2_ADDR_0_SHIFT			30
#define FUSE_EK2_ADDR_0_WIDTH			2
#define FUSE_EK2_ADDR_1			0x6A
#define FUSE_EK2_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_EK2_ADDR_1_SHIFT			(32 - 30)
#define FUSE_EK2_ADDR_1_WIDTH			30

#define FUSE_EK3_WIDTH			32
#define FUSE_EK3_ADDR_0			0x6A
#define FUSE_EK3_ADDR_0_MASK			0x3
#define FUSE_EK3_ADDR_0_SHIFT			30
#define FUSE_EK3_ADDR_0_WIDTH			2
#define FUSE_EK3_ADDR_1			0x6B
#define FUSE_EK3_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_EK3_ADDR_1_SHIFT			(32 - 30)
#define FUSE_EK3_ADDR_1_WIDTH			30

#define FUSE_EK4_WIDTH			32
#define FUSE_EK4_ADDR_0			0x6B
#define FUSE_EK4_ADDR_0_MASK			0x3
#define FUSE_EK4_ADDR_0_SHIFT			30
#define FUSE_EK4_ADDR_0_WIDTH			2
#define FUSE_EK4_ADDR_1			0x6C
#define FUSE_EK4_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_EK4_ADDR_1_SHIFT			(32 - 30)
#define FUSE_EK4_ADDR_1_WIDTH			30

#define FUSE_EK5_WIDTH			32
#define FUSE_EK5_ADDR_0			0x6C
#define FUSE_EK5_ADDR_0_MASK			0x3
#define FUSE_EK5_ADDR_0_SHIFT			30
#define FUSE_EK5_ADDR_0_WIDTH			2
#define FUSE_EK5_ADDR_1			0x6D
#define FUSE_EK5_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_EK5_ADDR_1_SHIFT			(32 - 30)
#define FUSE_EK5_ADDR_1_WIDTH			30

#define FUSE_EK6_WIDTH			32
#define FUSE_EK6_ADDR_0			0x6D
#define FUSE_EK6_ADDR_0_MASK			0x3
#define FUSE_EK6_ADDR_0_SHIFT			30
#define FUSE_EK6_ADDR_0_WIDTH			2
#define FUSE_EK6_ADDR_1			0x6E
#define FUSE_EK6_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_EK6_ADDR_1_SHIFT			(32 - 30)
#define FUSE_EK6_ADDR_1_WIDTH			30

#define FUSE_EK7_WIDTH			32
#define FUSE_EK7_ADDR_0			0x6E
#define FUSE_EK7_ADDR_0_MASK			0x3
#define FUSE_EK7_ADDR_0_SHIFT			30
#define FUSE_EK7_ADDR_0_WIDTH			2
#define FUSE_EK7_ADDR_1			0x6F
#define FUSE_EK7_ADDR_1_MASK			0xFFFFFFFC
#define FUSE_EK7_ADDR_1_SHIFT			(32 - 30)
#define FUSE_EK7_ADDR_1_WIDTH			30

#define FUSE_RESERVED_SW_WIDTH			24
#define FUSE_RESERVED_SW_ADDR_0			0x65
#define FUSE_RESERVED_SW_ADDR_0_MASK			0x7F
#define FUSE_RESERVED_SW_ADDR_0_SHIFT			25
#define FUSE_RESERVED_SW_ADDR_0_WIDTH			7
#define FUSE_RESERVED_SW_ADDR_1			0x66
#define FUSE_RESERVED_SW_ADDR_1_MASK			0xFFFF8000
#define FUSE_RESERVED_SW_ADDR_1_SHIFT			(32 - 17)
#define FUSE_RESERVED_SW_ADDR_1_WIDTH			17

#define FUSE_BOOT_DEVICE_SELECT_WIDTH			3
#define FUSE_BOOT_DEVICE_SELECT_ADDR_0			0x65
#define FUSE_BOOT_DEVICE_SELECT_ADDR_0_MASK			0x7
#define FUSE_BOOT_DEVICE_SELECT_ADDR_0_SHIFT			25
#define FUSE_BOOT_DEVICE_SELECT_ADDR_0_WIDTH			3

#define FUSE_SKIP_DEV_SEL_STRAPS_WIDTH			1
#define FUSE_SKIP_DEV_SEL_STRAPS_ADDR_0			0x65
#define FUSE_SKIP_DEV_SEL_STRAPS_ADDR_0_MASK			0x1
#define FUSE_SKIP_DEV_SEL_STRAPS_ADDR_0_SHIFT			28
#define FUSE_SKIP_DEV_SEL_STRAPS_ADDR_0_WIDTH			1

#define FUSE_BOOT_DEVICE_INFO_WIDTH			24
#define FUSE_BOOT_DEVICE_INFO_ADDR_0			0x65
#define FUSE_BOOT_DEVICE_INFO_ADDR_0_MASK			0xFFFFFF
#define FUSE_BOOT_DEVICE_INFO_ADDR_0_SHIFT			1
#define FUSE_BOOT_DEVICE_INFO_ADDR_0_WIDTH			24

#define FUSE_SECURE_PROVISION_INFO_WIDTH			2
#define FUSE_SECURE_PROVISION_INFO_ADDR_0			0x67
#define FUSE_SECURE_PROVISION_INFO_ADDR_0_MASK			0x3
#define FUSE_SECURE_PROVISION_INFO_ADDR_0_SHIFT			28
#define FUSE_SECURE_PROVISION_INFO_ADDR_0_WIDTH			2

#define FUSE_H2_WIDTH			32
#define FUSE_H2_ADDR_0			0x7E
#define FUSE_H2_ADDR_0_MASK			0x1FFFFFF
#define FUSE_H2_ADDR_0_SHIFT			7
#define FUSE_H2_ADDR_0_WIDTH			25
#define FUSE_H2_ADDR_1			0x7F
#define FUSE_H2_ADDR_1_MASK			0xFE000000
#define FUSE_H2_ADDR_1_SHIFT			(32 - 7)
#define FUSE_H2_ADDR_1_WIDTH			7

#define FUSE_ODM_INFO_WIDTH			16
#define FUSE_ODM_INFO_ADDR_0			0x67
#define FUSE_ODM_INFO_ADDR_0_MASK			0xFFFF
#define FUSE_ODM_INFO_ADDR_0_SHIFT			5
#define FUSE_ODM_INFO_ADDR_0_WIDTH			16

#define FUSE_DEBUG_AUTHENTICATION_WIDTH			5
#define FUSE_DEBUG_AUTHENTICATION_ADDR_0			0
#define FUSE_DEBUG_AUTHENTICATION_ADDR_0_MASK			0X1F
#define FUSE_DEBUG_AUTHENTICATION_ADDR_0_SHIFT			20
#define FUSE_DEBUG_AUTHENTICATION_ADDR_0_WIDTH			5

#define FUSE_DEBUG_AUTHENTICATION_REDUNDANT_WIDTH			5
#define FUSE_DEBUG_AUTHENTICATION_REDUNDANT_ADDR_0			1
#define FUSE_DEBUG_AUTHENTICATION_REDUNDANT_ADDR_0_MASK			0X1F
#define FUSE_DEBUG_AUTHENTICATION_REDUNDANT_ADDR_0_SHIFT			20
#define FUSE_DEBUG_AUTHENTICATION_REDUNDANT_ADDR_0_REDUNDANT			5

#define FUSE_SATA_MPHY_ODM_CALIB_WIDTH			4
#define FUSE_SATA_MPHY_ODM_CALIB_ADDR_0			0x66
#define FUSE_SATA_MPHY_ODM_CALIB_ADDR_0_MASK			0XF
#define FUSE_SATA_MPHY_ODM_CALIB_ADDR_0_SHIFT			17
#define FUSE_SATA_MPHY_ODM_CALIB_ADDR_0_WIDTH			4

#define FUSE_CCPLEX_DFD_ACCESS_DISABLE_WIDTH			1
#define FUSE_CCPLEX_DFD_ACCESS_DISABLE_ADDR_0			0x0
#define FUSE_CCPLEX_DFD_ACCESS_DISABLE_ADDR_0_MASK			0X1
#define FUSE_CCPLEX_DFD_ACCESS_DISABLE_ADDR_0_SHIFT			19
#define FUSE_CCPLEX_DFD_ACCESS_DISABLE_ADDR_0_WIDTH			1

#define FUSE_CCPLEX_DFD_ACCESS_DISABLE_REDUNDANT_WIDTH			1
#define FUSE_CCPLEX_DFD_ACCESS_DISABLE_REDUNDANT_ADDR_0			0x1
#define FUSE_CCPLEX_DFD_ACCESS_DISABLE_REDUNDANT_ADDR_0_MASK			0X1
#define FUSE_CCPLEX_DFD_ACCESS_DISABLE_REDUNDANT_ADDR_0_SHIFT			19
#define FUSE_CCPLEX_DFD_ACCESS_DISABLE_REDUNDANT_ADDR_0_WIDTH			1

#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_WIDTH 32
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_ADDR_0 0x1E
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_ADDR_0_MASK	0x3F
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_ADDR_0_SHIFT	26
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_ADDR_0_WIDTH	6
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_ADDR_1 0x20
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_ADDR_1_MASK	0xFFFFFFC0
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_ADDR_1_SHIFT	(32 - 26)
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_ADDR_1_WIDTH	26

#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_REDUNDANT_WIDTH 32
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_REDUNDANT_ADDR_0 0x1F
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_REDUNDANT_ADDR_0_MASK	0x3F
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_REDUNDANT_ADDR_0_SHIFT	26
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_REDUNDANT_ADDR_0_WIDTH	6
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_REDUNDANT_ADDR_1 0x21
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_REDUNDANT_ADDR_1_MASK	0xFFFFFFC0
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_REDUNDANT_ADDR_1_SHIFT	(32 - 26)
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET0_REDUNDANT_ADDR_1_WIDTH	26

#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_WIDTH 32
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_ADDR_0 0x20
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_ADDR_0_MASK	0x3F
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_ADDR_0_SHIFT	26
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_ADDR_0_WIDTH	6
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_ADDR_1 0x22
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_ADDR_1_MASK	0xFFFFFFC0
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_ADDR_1_SHIFT	(32 - 26)
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_ADDR_1_WIDTH	26

#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_REDUNDANT_WIDTH 32
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_REDUNDANT_ADDR_0 0x21
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_REDUNDANT_ADDR_0_MASK	0x3F
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_REDUNDANT_ADDR_0_SHIFT	26
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_REDUNDANT_ADDR_0_WIDTH	6
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_REDUNDANT_ADDR_1 0x23
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_REDUNDANT_ADDR_1_MASK	0xFFFFFFC0
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_REDUNDANT_ADDR_1_SHIFT	(32 - 26)
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET1_REDUNDANT_ADDR_1_WIDTH	26

#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_WIDTH 32
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_ADDR_0 0x14
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_ADDR_0_MASK	0x3F
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_ADDR_0_SHIFT	26
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_ADDR_0_WIDTH	6
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_ADDR_1 0x16
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_ADDR_1_MASK	0xFFFFFFC0
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_ADDR_1_SHIFT	(32 - 26)
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_ADDR_1_WIDTH	26

#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_REDUNDANT_WIDTH 32
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_REDUNDANT_ADDR_0 0x15
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_REDUNDANT_ADDR_0_MASK	0x3F
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_REDUNDANT_ADDR_0_SHIFT	26
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_REDUNDANT_ADDR_0_WIDTH	6
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_REDUNDANT_ADDR_1 0x17
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_REDUNDANT_ADDR_1_MASK	0xFFFFFFC0
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_REDUNDANT_ADDR_1_SHIFT	(32 - 26)
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET2_REDUNDANT_ADDR_1_WIDTH	26

#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_WIDTH 32
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_ADDR_0 0x12
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_ADDR_0_MASK	0x7FFFFF
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_ADDR_0_SHIFT	9
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_ADDR_0_WIDTH	23
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_ADDR_1 0x14
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_ADDR_1_MASK	0xFF800000
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_ADDR_1_SHIFT	(32 - 9)
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_ADDR_1_WIDTH	9

#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_REDUNDANT_WIDTH 32
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_REDUNDANT_ADDR_0 0x13
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_REDUNDANT_ADDR_0_MASK	0x7FFFFF
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_REDUNDANT_ADDR_0_SHIFT	9
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_REDUNDANT_ADDR_0_WIDTH	23
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_REDUNDANT_ADDR_1 0x15
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_REDUNDANT_ADDR_1_MASK	0xFF800000
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_REDUNDANT_ADDR_1_SHIFT	(32 - 9)
#define FUSE_CCPLEX_UCODE_MB1_FALCON_UCODE_FIELD_RATCHET3_REDUNDANT_ADDR_1_WIDTH	9

#define FUSE_FORCE_DEBUG_WITH_TEST_KEYS_WIDTH	1
#define FUSE_FORCE_DEBUG_WITH_TEST_KEYS_ADDR_0	0x7d
#define FUSE_FORCE_DEBUG_WITH_TEST_KEYS_ADDR_0_MASK	0x1
#define FUSE_FORCE_DEBUG_WITH_TEST_KEYS_ADDR_0_SHIFT	30
#define FUSE_FORCE_DEBUG_WITH_TEST_KEYS_ADDR_0_WIDTH	1

#define FUSE_SECURE_IN_SYSTEM_BIST_CONTROL_WIDTH	3
#define FUSE_SECURE_IN_SYSTEM_BIST_CONTROL_ADDR_0	0x7d
#define FUSE_SECURE_IN_SYSTEM_BIST_CONTROL_ADDR_0_MASK	0x1
#define FUSE_SECURE_IN_SYSTEM_BIST_CONTROL_ADDR_0_SHIFT	31
#define FUSE_SECURE_IN_SYSTEM_BIST_CONTROL_ADDR_0_WIDTH	1
#define FUSE_SECURE_IN_SYSTEM_BIST_CONTROL_ADDR_1	0x7e
#define FUSE_SECURE_IN_SYSTEM_BIST_CONTROL_ADDR_1_MASK	0xC0000000
#define FUSE_SECURE_IN_SYSTEM_BIST_CONTROL_ADDR_1_SHIFT	(32 - 2)
#define FUSE_SECURE_IN_SYSTEM_BIST_CONTROL_ADDR_1_WIDTH	2

#define FUSE_FLW2_WIDTH	1
#define FUSE_FLW2_ADDR_0	0x7e
#define FUSE_FLW2_ADDR_0_MASK	0x1
#define FUSE_FLW2_ADDR_0_SHIFT	4
#define FUSE_FLW2_ADDR_0_WIDTH	1

#define FUSE_OPT_USB2NVJTAG_DISABLE_WIDTH	1
#define FUSE_OPT_USB2NVJTAG_DISABLE_ADDR_0 0x7e
#define FUSE_OPT_USB2NVJTAG_DISABLE_ADDR_0_MASK	0x1
#define FUSE_OPT_USB2NVJTAG_DISABLE_ADDR_0_SHIFT 5
#define FUSE_OPT_USB2NVJTAG_DISABLE_ADDR_0_WIDTH	1

#define FUSE_OPT_CUSTOMER_OPTIN_FUSE_WIDTH	1
#define FUSE_OPT_CUSTOMER_OPTIN_FUSE_ADDR_0 0x7e
#define FUSE_OPT_CUSTOMER_OPTIN_FUSE_ADDR_0_MASK	0x1
#define FUSE_OPT_CUSTOMER_OPTIN_FUSE_ADDR_0_SHIFT 6
#define FUSE_OPT_CUSTOMER_OPTIN_FUSE_ADDR_0_WIDTH	1

#endif