/**
  ******************************************************************************
  * File Name          : cp866-8x8.c
  * Description        : This file contains font bitmap
  ******************************************************************************
  *
  * COPYRIGHT(c) 2016 Roman Stepanov
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

const unsigned char cp866_8x8_psf[256][8] = {
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // 0x0000 (.)
        { 0x7e, 0x81, 0xa5, 0x81, 0xbd, 0x99, 0x81, 0x7e }, // 0x0001 (.)
        { 0x3c, 0x7e, 0xdb, 0xff, 0xc3, 0x7e, 0x3c, 0x00 }, // 0x0002 (.)
        { 0x00, 0x77, 0x7f, 0x7f, 0x3e, 0x1c, 0x08, 0x00 }, // 0x0003 (.)
        { 0x08, 0x1c, 0x3e, 0x7f, 0x3e, 0x1c, 0x08, 0x00 }, // 0x0004 (.)
        { 0x00, 0x3c, 0x18, 0xff, 0xff, 0x10, 0x18, 0x00 }, // 0x0005 (.)
        { 0x08, 0x1c, 0x3e, 0x7f, 0x7f, 0x08, 0x1c, 0x00 }, // 0x0006 (.)
        { 0x00, 0x00, 0x18, 0x3c, 0x18, 0x00, 0x00, 0x00 }, // 0x0007 (.)
        { 0xff, 0xff, 0xe7, 0xc3, 0xe7, 0xff, 0xff, 0xff }, // 0x0008 (.)
        { 0x00, 0x3c, 0x42, 0x81, 0x81, 0x42, 0x3c, 0x00 }, // 0x0009 (.)
        { 0xff, 0xc3, 0xbd, 0x7e, 0x7e, 0xbd, 0xc3, 0xff }, // 0x000a (.)
        { 0xf8, 0xe0, 0xb0, 0x3e, 0x63, 0x63, 0x3e, 0x00 }, // 0x000b (.)
        { 0x00, 0x7e, 0xc3, 0xc3, 0x7e, 0x18, 0x7e, 0x18 }, // 0x000c (.)
        { 0x20, 0x60, 0xe0, 0x20, 0x20, 0x3f, 0x1f, 0x00 }, // 0x000d (.)
        { 0x30, 0x50, 0xb0, 0xd0, 0x9f, 0x9f, 0xf8, 0xf8 }, // 0x000e (.)
        { 0x00, 0x49, 0x3e, 0x22, 0x63, 0x3e, 0x49, 0x00 }, // 0x000f (.)
        { 0x00, 0x00, 0x06, 0x1e, 0x7e, 0x1e, 0x06, 0x00 }, // 0x0010 (.)
        { 0x00, 0x00, 0x60, 0x78, 0x7e, 0x78, 0x60, 0x00 }, // 0x0011 (.)
        { 0x18, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x18 }, // 0x0012 (.)
        { 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x66, 0x00 }, // 0x0013 (.)
        { 0xff, 0x6d, 0x6e, 0x6c, 0x6c, 0x6c, 0x6c, 0x00 }, // 0x0014 (.)
        { 0x7e, 0x83, 0x3b, 0x44, 0x44, 0xf8, 0xc1, 0x7e }, // 0x0015 (.)
        { 0x00, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x00, 0x00 }, // 0x0016 (.)
        { 0x18, 0x7e, 0x18, 0x18, 0x7e, 0x18, 0x00, 0xff }, // 0x0017 (.)
        { 0x18, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00 }, // 0x0018 (.)
        { 0x18, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x18, 0x00 }, // 0x0019 (.)
        { 0x00, 0x20, 0x60, 0xff, 0x60, 0x20, 0x00, 0x00 }, // 0x001a (.)
        { 0x00, 0x04, 0x06, 0xff, 0x06, 0x04, 0x00, 0x00 }, // 0x001b (.)
        { 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0xff, 0x00 }, // 0x001c (.)
        { 0x00, 0x24, 0x66, 0xff, 0x66, 0x24, 0x00, 0x00 }, // 0x001d (.)
        { 0x00, 0x00, 0x08, 0x1c, 0x3e, 0x7f, 0x00, 0x00 }, // 0x001e (.)
        { 0x00, 0x00, 0x00, 0x7f, 0x3e, 0x1c, 0x08, 0x00 }, // 0x001f (.)
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // 0x0020 ( )
        { 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x0c, 0x00 }, // 0x0021 (!)
        { 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // 0x0022 (")
        { 0x36, 0x36, 0x7f, 0x36, 0x7f, 0x36, 0x36, 0x00 }, // 0x0023 (#)
        { 0x08, 0x3e, 0x4b, 0x3e, 0x61, 0x3e, 0x08, 0x00 }, // 0x0024 ($)
        { 0x0f, 0x69, 0x3f, 0x18, 0x7c, 0x4e, 0x7b, 0x00 }, // 0x0025 (%)
        { 0x0c, 0x12, 0x0c, 0x1e, 0x73, 0x33, 0x1e, 0x00 }, // 0x0026 (&)
        { 0x30, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00 }, // 0x0027 (')
        { 0x08, 0x06, 0x03, 0x03, 0x03, 0x06, 0x08, 0x00 }, // 0x0028 (()
        { 0x08, 0x30, 0x60, 0x60, 0x60, 0x30, 0x08, 0x00 }, // 0x0029 ())
        { 0x00, 0x2a, 0x1c, 0x7f, 0x1c, 0x2a, 0x00, 0x00 }, // 0x002a (*)
        { 0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00 }, // 0x002b (+)
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x0e }, // 0x002c (,)
        { 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00 }, // 0x002d (-)
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00 }, // 0x002e (.)
        { 0x40, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x00 }, // 0x002f (/)
        { 0x3e, 0x73, 0x7b, 0x6f, 0x67, 0x67, 0x3e, 0x00 }, // 0x0030 (0)
        { 0x18, 0x1c, 0x1e, 0x18, 0x18, 0x18, 0x3c, 0x00 }, // 0x0031 (1)
        { 0x3e, 0x63, 0x60, 0x30, 0x0c, 0x06, 0x7f, 0x00 }, // 0x0032 (2)
        { 0x3e, 0x63, 0x60, 0x3c, 0x60, 0x63, 0x3e, 0x00 }, // 0x0033 (3)
        { 0x70, 0x78, 0x6c, 0x66, 0x7f, 0x60, 0x60, 0x00 }, // 0x0034 (4)
        { 0x7f, 0x03, 0x03, 0x3f, 0x60, 0x60, 0x3f, 0x00 }, // 0x0035 (5)
        { 0x3e, 0x63, 0x03, 0x3f, 0x63, 0x63, 0x3e, 0x00 }, // 0x0036 (6)
        { 0x7f, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x06, 0x00 }, // 0x0037 (7)
        { 0x3e, 0x63, 0x63, 0x3e, 0x63, 0x63, 0x3e, 0x00 }, // 0x0038 (8)
        { 0x3e, 0x63, 0x63, 0x7e, 0x60, 0x63, 0x3e, 0x00 }, // 0x0039 (9)
        { 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00 }, // 0x003a (:)
        { 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x04, 0x00 }, // 0x003b (;)
        { 0x00, 0x38, 0x0c, 0x06, 0x0c, 0x38, 0x00, 0x00 }, // 0x003c (<)
        { 0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00 }, // 0x003d (=)
        { 0x00, 0x0e, 0x18, 0x30, 0x18, 0x0e, 0x00, 0x00 }, // 0x003e (>)
        { 0x3e, 0x63, 0x30, 0x18, 0x0c, 0x00, 0x0c, 0x00 }, // 0x003f (?)
        { 0x3e, 0x41, 0x59, 0x55, 0x55, 0x79, 0x3e, 0x00 }, // 0x0040 (@)
        { 0x3e, 0x63, 0x63, 0x7f, 0x63, 0x63, 0x63, 0x00 }, // 0x0041 (A)
        { 0x3f, 0x66, 0x66, 0x3e, 0x66, 0x66, 0x3f, 0x00 }, // 0x0042 (B)
        { 0x3e, 0x63, 0x03, 0x03, 0x03, 0x63, 0x3e, 0x00 }, // 0x0043 (C)
        { 0x3f, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3f, 0x00 }, // 0x0044 (D)
        { 0x7f, 0x46, 0x16, 0x1e, 0x16, 0x46, 0x7f, 0x00 }, // 0x0045 (E)
        { 0x7f, 0x46, 0x16, 0x1e, 0x16, 0x06, 0x0f, 0x00 }, // 0x0046 (F)
        { 0x3e, 0x63, 0x63, 0x03, 0x7b, 0x63, 0x3e, 0x00 }, // 0x0047 (G)
        { 0x63, 0x63, 0x63, 0x7f, 0x63, 0x63, 0x63, 0x00 }, // 0x0048 (H)
        { 0x3c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00 }, // 0x0049 (I)
        { 0x78, 0x30, 0x30, 0x30, 0x30, 0x33, 0x1e, 0x00 }, // 0x004a (J)
        { 0x63, 0x33, 0x1b, 0x0f, 0x1b, 0x33, 0x63, 0x00 }, // 0x004b (K)
        { 0x0f, 0x06, 0x06, 0x06, 0x06, 0x46, 0x7f, 0x00 }, // 0x004c (L)
        { 0x63, 0x77, 0x7f, 0x6b, 0x63, 0x63, 0x63, 0x00 }, // 0x004d (M)
        { 0x63, 0x67, 0x6f, 0x7b, 0x73, 0x63, 0x63, 0x00 }, // 0x004e (N)
        { 0x3e, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3e, 0x00 }, // 0x004f (O)
        { 0x3f, 0x66, 0x66, 0x3e, 0x06, 0x06, 0x0f, 0x00 }, // 0x0050 (P)
        { 0x3e, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3e, 0x30 }, // 0x0051 (Q)
        { 0x3f, 0x66, 0x66, 0x3e, 0x66, 0x66, 0x67, 0x00 }, // 0x0052 (R)
        { 0x3e, 0x63, 0x03, 0x3e, 0x60, 0x63, 0x3e, 0x00 }, // 0x0053 (S)
        { 0x7e, 0x5a, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00 }, // 0x0054 (T)
        { 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3e, 0x00 }, // 0x0055 (U)
        { 0x63, 0x63, 0x63, 0x63, 0x63, 0x36, 0x1c, 0x00 }, // 0x0056 (V)
        { 0x63, 0x63, 0x63, 0x63, 0x6b, 0x77, 0x63, 0x00 }, // 0x0057 (W)
        { 0x63, 0x36, 0x1c, 0x1c, 0x1c, 0x36, 0x63, 0x00 }, // 0x0058 (X)
        { 0x66, 0x66, 0x66, 0x3c, 0x18, 0x18, 0x3c, 0x00 }, // 0x0059 (Y)
        { 0x7f, 0x63, 0x30, 0x18, 0x0c, 0x66, 0x7f, 0x00 }, // 0x005a (Z)
        { 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x38, 0x00 }, // 0x005b ([)
        { 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x40, 0x00 }, // 0x005c (\)
        { 0x0e, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0e, 0x00 }, // 0x005d (])
        { 0x00, 0x00, 0x08, 0x1c, 0x36, 0x63, 0x00, 0x00 }, // 0x005e (^)
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff }, // 0x005f (_)
        { 0x0c, 0x0c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00 }, // 0x0060 (`)
        { 0x00, 0x00, 0x3e, 0x60, 0x7e, 0x63, 0x7e, 0x00 }, // 0x0061 (a)
        { 0x03, 0x03, 0x3f, 0x63, 0x63, 0x63, 0x3f, 0x00 }, // 0x0062 (b)
        { 0x00, 0x00, 0x3e, 0x63, 0x03, 0x63, 0x3e, 0x00 }, // 0x0063 (c)
        { 0x60, 0x60, 0x7e, 0x63, 0x63, 0x63, 0x7e, 0x00 }, // 0x0064 (d)
        { 0x00, 0x00, 0x3e, 0x63, 0x7f, 0x03, 0x3e, 0x00 }, // 0x0065 (e)
        { 0x3c, 0x66, 0x06, 0x0f, 0x06, 0x06, 0x06, 0x00 }, // 0x0066 (f)
        { 0x00, 0x00, 0x7e, 0x63, 0x63, 0x7e, 0x60, 0x3e }, // 0x0067 (g)
        { 0x03, 0x03, 0x3f, 0x63, 0x63, 0x63, 0x63, 0x00 }, // 0x0068 (h)
        { 0x18, 0x00, 0x1c, 0x18, 0x18, 0x18, 0x3c, 0x00 }, // 0x0069 (i)
        { 0x00, 0x30, 0x00, 0x38, 0x30, 0x30, 0x33, 0x1e }, // 0x006a (j)
        { 0x03, 0x03, 0x63, 0x1b, 0x0f, 0x1b, 0x63, 0x00 }, // 0x006b (k)
        { 0x1c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00 }, // 0x006c (l)
        { 0x00, 0x00, 0x77, 0x7f, 0x6b, 0x63, 0x63, 0x00 }, // 0x006d (m)
        { 0x00, 0x00, 0x3f, 0x63, 0x63, 0x63, 0x63, 0x00 }, // 0x006e (n)
        { 0x00, 0x00, 0x3e, 0x63, 0x63, 0x63, 0x3e, 0x00 }, // 0x006f (o)
        { 0x00, 0x00, 0x3f, 0x63, 0x63, 0x3f, 0x03, 0x03 }, // 0x0070 (p)
        { 0x00, 0x00, 0x7e, 0x63, 0x63, 0x7e, 0x60, 0x60 }, // 0x0071 (q)
        { 0x00, 0x00, 0x7b, 0x6e, 0x06, 0x06, 0x06, 0x00 }, // 0x0072 (r)
        { 0x00, 0x00, 0x3e, 0x03, 0x3e, 0x60, 0x3e, 0x00 }, // 0x0073 (s)
        { 0x18, 0x18, 0x7e, 0x18, 0x18, 0x18, 0x78, 0x00 }, // 0x0074 (t)
        { 0x00, 0x00, 0x63, 0x63, 0x63, 0x63, 0x7e, 0x00 }, // 0x0075 (u)
        { 0x00, 0x00, 0x63, 0x63, 0x63, 0x36, 0x1c, 0x00 }, // 0x0076 (v)
        { 0x00, 0x00, 0x63, 0x63, 0x6b, 0x7f, 0x63, 0x00 }, // 0x0077 (w)
        { 0x00, 0x00, 0x63, 0x36, 0x1c, 0x36, 0x63, 0x00 }, // 0x0078 (x)
        { 0x00, 0x00, 0x63, 0x63, 0x63, 0x7e, 0x60, 0x3e }, // 0x0079 (y)
        { 0x00, 0x00, 0x7f, 0x30, 0x18, 0x06, 0x7f, 0x00 }, // 0x007a (z)
        { 0x70, 0x18, 0x18, 0x0e, 0x18, 0x18, 0x70, 0x00 }, // 0x007b ({)
        { 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00 }, // 0x007c (|)
        { 0x07, 0x0c, 0x0c, 0x38, 0x0c, 0x0c, 0x07, 0x00 }, // 0x007d (})
        { 0x00, 0x6e, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x00 }, // 0x007e (~)
        { 0x00, 0x00, 0x18, 0x3c, 0x66, 0xff, 0x00, 0x00 }, // 0x007f (.)
        { 0x70, 0x78, 0x6c, 0x66, 0x7f, 0x63, 0x63, 0x00 }, // 0x0080 (.)
        { 0x3f, 0x03, 0x03, 0x3f, 0x63, 0x63, 0x3f, 0x00 }, // 0x0081 (.)
        { 0x1f, 0x33, 0x33, 0x3f, 0x63, 0x63, 0x3f, 0x00 }, // 0x0082 (.)
        { 0x3f, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00 }, // 0x0083 (.)
        { 0x7e, 0x66, 0x66, 0x66, 0x66, 0x66, 0xff, 0xc3 }, // 0x0084 (.)
        { 0x3f, 0x03, 0x03, 0x1f, 0x03, 0x03, 0x7f, 0x00 }, // 0x0085 (.)
        { 0xdb, 0xdb, 0x7e, 0x18, 0x7e, 0xdb, 0xdb, 0x00 }, // 0x0086 (.)
        { 0x3c, 0x66, 0x60, 0x3c, 0x60, 0x63, 0x3e, 0x00 }, // 0x0087 (.)
        { 0x63, 0x63, 0x73, 0x7b, 0x6f, 0x67, 0x63, 0x00 }, // 0x0088 (.)
        { 0x6b, 0x63, 0x73, 0x7b, 0x6f, 0x67, 0x63, 0x00 }, // 0x0089 (.)
        { 0x63, 0x33, 0x1b, 0x1f, 0x33, 0x63, 0x63, 0x00 }, // 0x008a (.)
        { 0x60, 0x70, 0x78, 0x6c, 0x66, 0x63, 0x63, 0x00 }, // 0x008b (.)
        { 0x63, 0x77, 0x7f, 0x6b, 0x63, 0x63, 0x63, 0x00 }, // 0x008c (.)
        { 0x63, 0x63, 0x63, 0x7f, 0x63, 0x63, 0x63, 0x00 }, // 0x008d (.)
        { 0x3e, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3e, 0x00 }, // 0x008e (.)
        { 0x7f, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x00 }, // 0x008f (.)
        { 0x3f, 0x63, 0x63, 0x3f, 0x03, 0x03, 0x03, 0x00 }, // 0x0090 (.)
        { 0x3e, 0x63, 0x03, 0x03, 0x03, 0x63, 0x3e, 0x00 }, // 0x0091 (.)
        { 0x3f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00 }, // 0x0092 (.)
        { 0x63, 0x63, 0x63, 0x7e, 0x60, 0x63, 0x3e, 0x00 }, // 0x0093 (.)
        { 0x18, 0x7e, 0xdb, 0xdb, 0xdb, 0x7e, 0x18, 0x00 }, // 0x0094 (.)
        { 0xc3, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0xc3, 0x00 }, // 0x0095 (.)
        { 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x7f, 0x60 }, // 0x0096 (.)
        { 0x63, 0x63, 0x63, 0x7e, 0x60, 0x60, 0x60, 0x00 }, // 0x0097 (.)
        { 0x6b, 0x6b, 0x6b, 0x6b, 0x6b, 0x6b, 0x7f, 0x00 }, // 0x0098 (.)
        { 0x6b, 0x6b, 0x6b, 0x6b, 0x6b, 0x6b, 0xff, 0xc0 }, // 0x0099 (.)
        { 0x0f, 0x0c, 0x0c, 0x7c, 0xcc, 0xcc, 0x7c, 0x00 }, // 0x009a (.)
        { 0x43, 0x43, 0x43, 0x4f, 0x5b, 0x5b, 0x4f, 0x00 }, // 0x009b (.)
        { 0x03, 0x03, 0x03, 0x3f, 0x63, 0x63, 0x3f, 0x00 }, // 0x009c (.)
        { 0x3e, 0x63, 0x60, 0x78, 0x60, 0x63, 0x3e, 0x00 }, // 0x009d (.)
        { 0x73, 0xdb, 0xdb, 0xdf, 0xdb, 0xdb, 0x73, 0x00 }, // 0x009e (.)
        { 0x7e, 0x63, 0x63, 0x7e, 0x6c, 0x66, 0x63, 0x00 }, // 0x009f (.)
        { 0x00, 0x00, 0x1e, 0x30, 0x3e, 0x33, 0x7e, 0x00 }, // 0x00a0 (.)
        { 0x20, 0x1e, 0x03, 0x1f, 0x33, 0x33, 0x1e, 0x00 }, // 0x00a1 (.)
        { 0x00, 0x00, 0x1f, 0x33, 0x1f, 0x63, 0x3f, 0x00 }, // 0x00a2 (.)
        { 0x00, 0x00, 0x3f, 0x03, 0x03, 0x03, 0x03, 0x00 }, // 0x00a3 (.)
        { 0x00, 0x00, 0x7e, 0x66, 0x66, 0x66, 0xff, 0xc3 }, // 0x00a4 (.)
        { 0x00, 0x00, 0x1e, 0x33, 0x3f, 0x03, 0x3e, 0x00 }, // 0x00a5 (.)
        { 0x00, 0x00, 0xdb, 0x7e, 0x18, 0x7e, 0xdb, 0x00 }, // 0x00a6 (.)
        { 0x00, 0x00, 0x1e, 0x33, 0x18, 0x33, 0x1e, 0x00 }, // 0x00a7 (.)
        { 0x00, 0x00, 0x33, 0x33, 0x3b, 0x37, 0x33, 0x00 }, // 0x00a8 (.)
        { 0x0c, 0x00, 0x33, 0x33, 0x3b, 0x37, 0x33, 0x00 }, // 0x00a9 (.)
        { 0x00, 0x00, 0x33, 0x1b, 0x0f, 0x33, 0x33, 0x00 }, // 0x00aa (.)
        { 0x00, 0x00, 0x70, 0x78, 0x6c, 0x66, 0x63, 0x00 }, // 0x00ab (.)
        { 0x00, 0x00, 0x63, 0x77, 0x6b, 0x63, 0x63, 0x00 }, // 0x00ac (.)
        { 0x00, 0x00, 0x33, 0x33, 0x3f, 0x33, 0x33, 0x00 }, // 0x00ad (.)
        { 0x00, 0x00, 0x1e, 0x33, 0x33, 0x33, 0x1e, 0x00 }, // 0x00ae (.)
        { 0x00, 0x00, 0x3f, 0x33, 0x33, 0x33, 0x33, 0x00 }, // 0x00af (.)
        { 0x44, 0x11, 0x44, 0x11, 0x44, 0x11, 0x44, 0x11 }, // 0x00b0 (.)
        { 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55 }, // 0x00b1 (.)
        { 0xdb, 0xee, 0xdb, 0x77, 0xdb, 0xee, 0xdb, 0x77 }, // 0x00b2 (.)
        { 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08 }, // 0x00b3 (.)
        { 0x08, 0x08, 0x08, 0x08, 0x0f, 0x08, 0x08, 0x08 }, // 0x00b4 (.)
        { 0x08, 0x08, 0x0f, 0x08, 0x0f, 0x08, 0x08, 0x08 }, // 0x00b5 (.)
        { 0x28, 0x28, 0x28, 0x28, 0x2f, 0x28, 0x28, 0x28 }, // 0x00b6 (.)
        { 0x00, 0x00, 0x00, 0x00, 0x3f, 0x28, 0x28, 0x28 }, // 0x00b7 (.)
        { 0x00, 0x00, 0x0f, 0x08, 0x0f, 0x08, 0x08, 0x08 }, // 0x00b8 (.)
        { 0x28, 0x28, 0x2f, 0x20, 0x2f, 0x28, 0x28, 0x28 }, // 0x00b9 (.)
        { 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28 }, // 0x00ba (.)
        { 0x00, 0x00, 0x3f, 0x20, 0x2f, 0x28, 0x28, 0x28 }, // 0x00bb (.)
        { 0x28, 0x28, 0x2f, 0x20, 0x3f, 0x00, 0x00, 0x00 }, // 0x00bc (.)
        { 0x28, 0x28, 0x28, 0x28, 0x3f, 0x00, 0x00, 0x00 }, // 0x00bd (.)
        { 0x08, 0x08, 0x0f, 0x08, 0x0f, 0x00, 0x00, 0x00 }, // 0x00be (.)
        { 0x00, 0x00, 0x00, 0x00, 0x0f, 0x08, 0x08, 0x08 }, // 0x00bf (.)
        { 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0x00 }, // 0x00c0 (.)
        { 0x08, 0x08, 0x08, 0x08, 0xff, 0x00, 0x00, 0x00 }, // 0x00c1 (.)
        { 0x00, 0x00, 0x00, 0x00, 0xff, 0x08, 0x08, 0x08 }, // 0x00c2 (.)
        { 0x08, 0x08, 0x08, 0x08, 0xf8, 0x08, 0x08, 0x08 }, // 0x00c3 (.)
        { 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00 }, // 0x00c4 (.)
        { 0x08, 0x08, 0x08, 0x08, 0xff, 0x08, 0x08, 0x08 }, // 0x00c5 (.)
        { 0x08, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0x08, 0x08 }, // 0x00c6 (.)
        { 0x28, 0x28, 0x28, 0x28, 0xe8, 0x28, 0x28, 0x28 }, // 0x00c7 (.)
        { 0x28, 0x28, 0xe8, 0x08, 0xf8, 0x00, 0x00, 0x00 }, // 0x00c8 (.)
        { 0x00, 0x00, 0xf8, 0x08, 0xe8, 0x28, 0x28, 0x28 }, // 0x00c9 (.)
        { 0x28, 0x28, 0xef, 0x00, 0xff, 0x00, 0x00, 0x00 }, // 0x00ca (.)
        { 0x00, 0x00, 0xff, 0x00, 0xef, 0x28, 0x28, 0x28 }, // 0x00cb (.)
        { 0x28, 0x28, 0xe8, 0x08, 0xe8, 0x28, 0x28, 0x28 }, // 0x00cc (.)
        { 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00 }, // 0x00cd (.)
        { 0x28, 0x28, 0xef, 0x00, 0xef, 0x28, 0x28, 0x28 }, // 0x00ce (.)
        { 0x08, 0x08, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00 }, // 0x00cf (.)
        { 0x28, 0x28, 0x28, 0x28, 0xff, 0x00, 0x00, 0x00 }, // 0x00d0 (.)
        { 0x00, 0x00, 0xff, 0x00, 0xff, 0x08, 0x08, 0x08 }, // 0x00d1 (.)
        { 0x00, 0x00, 0x00, 0x00, 0xff, 0x28, 0x28, 0x28 }, // 0x00d2 (.)
        { 0x28, 0x28, 0x28, 0x28, 0xf8, 0x00, 0x00, 0x00 }, // 0x00d3 (.)
        { 0x08, 0x08, 0xf8, 0x08, 0xf8, 0x00, 0x00, 0x00 }, // 0x00d4 (.)
        { 0x00, 0x00, 0xf8, 0x08, 0xf8, 0x08, 0x08, 0x08 }, // 0x00d5 (.)
        { 0x00, 0x00, 0x00, 0x00, 0xf8, 0x28, 0x28, 0x28 }, // 0x00d6 (.)
        { 0x28, 0x28, 0x28, 0x28, 0xff, 0x28, 0x28, 0x28 }, // 0x00d7 (.)
        { 0x08, 0x08, 0xff, 0x08, 0xff, 0x08, 0x08, 0x08 }, // 0x00d8 (.)
        { 0x08, 0x08, 0x08, 0x08, 0x0f, 0x00, 0x00, 0x00 }, // 0x00d9 (.)
        { 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08 }, // 0x00da (.)
        { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff }, // 0x00db (.)
        { 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff }, // 0x00dc (.)
        { 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f }, // 0x00dd (.)
        { 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0 }, // 0x00de (.)
        { 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 }, // 0x00df (.)
        { 0x00, 0x00, 0x1f, 0x33, 0x33, 0x1f, 0x03, 0x03 }, // 0x00e0 (.)
        { 0x00, 0x00, 0x1e, 0x33, 0x03, 0x33, 0x1e, 0x00 }, // 0x00e1 (.)
        { 0x00, 0x00, 0x3f, 0x0c, 0x0c, 0x0c, 0x0c, 0x00 }, // 0x00e2 (.)
        { 0x00, 0x00, 0x33, 0x33, 0x3e, 0x30, 0x33, 0x1e }, // 0x00e3 (.)
        { 0x00, 0x18, 0x7e, 0xdb, 0xdb, 0x7e, 0x18, 0x18 }, // 0x00e4 (.)
        { 0x00, 0x00, 0x63, 0x36, 0x1c, 0x36, 0x63, 0x00 }, // 0x00e5 (.)
        { 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x7f, 0x60 }, // 0x00e6 (.)
        { 0x00, 0x00, 0x33, 0x33, 0x3e, 0x30, 0x30, 0x00 }, // 0x00e7 (.)
        { 0x00, 0x00, 0x6b, 0x6b, 0x6b, 0x6b, 0x7f, 0x00 }, // 0x00e8 (.)
        { 0x00, 0x00, 0x6b, 0x6b, 0x6b, 0x6b, 0xff, 0xc0 }, // 0x00e9 (.)
        { 0x00, 0x00, 0x0f, 0x0c, 0x7c, 0xcc, 0x7c, 0x00 }, // 0x00ea (.)
        { 0x00, 0x00, 0x43, 0x43, 0x4f, 0x5b, 0x0f, 0x00 }, // 0x00eb (.)
        { 0x00, 0x00, 0x03, 0x03, 0x1f, 0x33, 0x1f, 0x00 }, // 0x00ec (.)
        { 0x00, 0x00, 0x3e, 0x63, 0x78, 0x63, 0x3e, 0x00 }, // 0x00ed (.)
        { 0x00, 0x00, 0x73, 0xdb, 0xdf, 0xdb, 0x73, 0x00 }, // 0x00ee (.)
        { 0x00, 0x00, 0x3e, 0x33, 0x3e, 0x36, 0x33, 0x00 }, // 0x00ef (.)
        { 0x12, 0x00, 0x3f, 0x03, 0x0f, 0x03, 0x7f, 0x00 }, // 0x00f0 (.)
        { 0x12, 0x00, 0x1e, 0x33, 0x3f, 0x03, 0x3e, 0x00 }, // 0x00f1 (.)
        { 0x3e, 0x63, 0x03, 0x0f, 0x03, 0x63, 0x3e, 0x00 }, // 0x00f2 (.)
        { 0x00, 0x00, 0x3e, 0x63, 0x0f, 0x63, 0x3e, 0x00 }, // 0x00f3 (.)
        { 0x14, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x3c, 0x00 }, // 0x00f4 (.)
        { 0x14, 0x00, 0x1c, 0x18, 0x18, 0x18, 0x3c, 0x00 }, // 0x00f5 (.)
        { 0x14, 0x6b, 0x63, 0x7e, 0x60, 0x63, 0x3e, 0x00 }, // 0x00f6 (.)
        { 0x12, 0x0c, 0x33, 0x33, 0x3e, 0x30, 0x33, 0x1e }, // 0x00f7 (.)
        { 0x06, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00 }, // 0x00f8 (.)
        { 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00 }, // 0x00f9 (.)
        { 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00 }, // 0x00fa (.)
        { 0xf8, 0x08, 0x08, 0x09, 0x0a, 0x0c, 0x08, 0x00 }, // 0x00fb (.)
        { 0x71, 0x13, 0x57, 0xb5, 0x5d, 0x19, 0xd1, 0x00 }, // 0x00fc (.)
        { 0x00, 0x2d, 0x1e, 0x33, 0x33, 0x1e, 0x2d, 0x00 }, // 0x00fd (.)
        { 0x00, 0x00, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, 0x00 }, // 0x00fe (.)
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }  // 0x00ff (.)
};

/************************ (C) COPYRIGHT Roman Stepanov *****END OF FILE****/
